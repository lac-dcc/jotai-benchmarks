#!/usr/bin/env python3
# =========================================================================== #

import pandas as pd
import os
from os.path import exists
from pathlib import Path
from kotai.kotypes import OptLevel, KonstrainExecType
from multiprocessing import Pool

from functools import reduce
from pprint import pprint
import numpy as np
import scipy.stats as stats
import yaml
# Misc
lineSepThin  = ('# --------------------------------------------------------------------------- #')
lineSepThick = ('# =========================================================================== #')
pd.options.display.float_format = '{:20,.2f}'.format
NDEBUG = False

def remove_prefix(self: str, prefix: str, /) -> str:
    if self.startswith(prefix):
        return self[len(prefix):]
    else:
        return self[:]
# =========================================================================== #

class GetBenchInfo():

	# ---------------------------- Member attrs. ---------------------------- #

	__slots__ = (
		'inputDir',
		'optLevelList',
		'ketList',
	)

	# ----------------------------------------------------------------------- #
	def __init__(self, inputDir: str, optLevelList: list[OptLevel], ketList: list[KonstrainExecType]):
	    self.inputDir: str = inputDir
	    self.optLevelList: list[OptLevel] = optLevelList
	    self.ketList: list[KonstrainExecType] = ketList

	# ----------------------------------------------------------------------- #

	def err(self, msg=None, val=None, *args):

		if NDEBUG:
			return val
		for arg in args:
			print(arg)

		return val


	# Loads .info files faster if you have parallel disk access
	def parseInfo(self, infoFilePath):

		try:
			with open(infoFilePath, 'r') as infoFileHandle:
				try:
					info = yaml.safe_load(infoFileHandle)

				except Exception as e:
					return self.err(msg=f'Failed parsing {infoFilePath}: {e}')

				else:
					if not info:
						return self.err(f'Info evaluates to False: {infoFilePath}')
					return info[0]

		except Exception as e:
			return self.err(f'Failed parsing {infoFilePath}: {e}')


	# Turns each key in the inner dicts ('static' and 'dynamic') into a key in
	# the outer dict, e.g., accessing infoFile['static']['instructions'] becomes
	# infoFile['static_instructions']. This also makes pandas happier.
	def flattenCfgInfo(self, cfgInfo, desiredCols=None, group=None):


		try: fullName = cfgInfo['name']
		except Exception as e:
			return self.err(f'File without the field "name"! {e}\nContents:\n{cfgInfo}\n')

		try: res = {k: v for k, v in {
				'cfg': cfgInfo['cfg'],
				'invoked': cfgInfo['invoked'],
				'complete': cfgInfo['complete'],
				'blocks': cfgInfo['blocks'],
				'phantoms': cfgInfo['phantoms'],
				'exit': cfgInfo['exit'],
				'halt': cfgInfo['halt'],
				'edges': cfgInfo['edges'],
				'static_instructions' + '_' + group : cfgInfo['static']['instructions'],
				'static_calls': cfgInfo['static']['calls'],
				'static_signals': cfgInfo['static']['signals'],
				'dynamic_instructions' + '_' + group : cfgInfo['dynamic']['instructions'],
				'dynamic_calls': cfgInfo['dynamic']['calls'],
				'dynamic_signals': cfgInfo['dynamic']['signals'],
				'name': Path(Path(cfgInfo['name']).parent.name).with_suffix('.c'),
		}.items() if k in desiredCols}

		except Exception as e:
			return self.err(f'Function flattenCfgInfo(cfgInfo, desiredCols) failed for {fullName}: {e}')
		else:
			return res  # Success

	def runcmd(self):

		# Make sure the path leading to the last prefix directory exists
		outputPrefix = os.getcwd() + '/util/output/'

		patterns = {}

		for o in self.optLevelList:
			for k in self.ketList:
				patterns['case_'+ k + '_' + o] = '*.d/*_' + o + '_' + k + '.info'

		infoFilePaths = {group: list(Path(self.inputDir[0]).glob(pattern)) for group, pattern in patterns.items()}

		runInParallel = True  # Run in parallel?
		# Number of cpu cores (remove the `// 2` to use all the cores)
		nproc = len(os.sched_getaffinity(0)) // 2 if runInParallel else 1

		chunksize = 512

		tmpdf = {}
		infoGroups = {}

		#with Pool(nproc) as pool:
		for group, files in infoFilePaths.items():

			desiredCols = ['name', 'static_instructions_' + group, 'dynamic_instructions_' + group]
			res = [self.parseInfo(f) for f in files]
			infoGroups[group] = [self.flattenCfgInfo(r, desiredCols, group) for r in res if r]
			tmpdf[group] = pd.DataFrame(infoGroups[group], columns=desiredCols)


			df = {}
			for group, infoFiles in infoGroups.items():
				df[group] = tmpdf[group].set_index(['name'], verify_integrity=True)
				if not len(df[group]): continue

				csvSeparator = ','
				for group in patterns.keys():
					try:
						df[group].to_csv(Path(outputPrefix + f'CFGInfo_{group}.csv'), sep=csvSeparator, encoding='utf-8')
					except Exception as e:
						continue
		
		caseStdoutFile = pd.read_csv(os.getcwd() +'/output/caseStdout.csv', sep=',')
		caseStdoutFile = caseStdoutFile.rename(columns={'filename': 'name'})

		#remove / if input folder ends with /
		if self.inputDir[0][-1] == '/':
			prefix = self.inputDir[0]
		else:
			prefix = self.inputDir[0]+ '/'

		caseStdoutFile['name'] = caseStdoutFile['name'].map(lambda a: remove_prefix(a, prefix))


		# print(self.inputDir[0])
		for k in self.ketList:

			file = []
			caseStdoutCols = []
			
			for o in self.optLevelList:
				if(exists(outputPrefix + f'CFGInfo_case_{k}_{o}.csv')):
					file = file + [pd.read_csv(outputPrefix + f'CFGInfo_case_{k}_{o}.csv', sep=',')]
					caseStdoutCols = caseStdoutCols + [k + o]
			if(file):
				all_stats_case = reduce(lambda left,right: pd.merge(left,right,on=['name'],how='inner'), file)
				all_stats_case.to_csv(outputPrefix + 'CFG_allOpt_' + str(k) + '.csv',index = False)

				stats_and_output = pd.merge(all_stats_case, caseStdoutFile[['name'] + caseStdoutCols], how='inner')
				stats_and_output.to_csv(outputPrefix + 'retVal_and_CFGstats' + str(k),index = False)

				print(k + " : " + str(len(stats_and_output)))
	# =========================================================================== #

		final_file = []
		for k in self.ketList:
			if(exists(outputPrefix + 'retVal_and_CFGstats' + str(k) )):
				final_file = final_file + [pd.read_csv( outputPrefix + 'retVal_and_CFGstats' + str(k) , sep=',')]
		final = reduce(lambda left,right: pd.merge(left,right,on=['name'],how='outer'), final_file)
		final.to_csv( outputPrefix + 'final.csv',index = False)
		print(str(len(final)) + ' benchmarks were generated')	