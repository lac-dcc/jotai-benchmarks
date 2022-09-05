from kotai.kotypes import BenchInfo, Failure, ExitCode, KonstrainExecType, OptLevel, SysExitCode, success, failure

def isInteger(param_type):
	if '*' in param_type or '[' in param_type or 'struct' in param_type:
		return False
	elif "int" in param_type or "char" in param_type or "short" in param_type or "long" in param_type:
		return True

def isPointerType(param_type):
	if ('*' in param_type or '[' in param_type) and 'struct' not in param_type:
		return True
	return False

def isPointerorStructType(param_type):
	if ('*' in param_type or '[' in param_type) and 'struct' in param_type:
		return True
	return False

class Descriptor:
	def __init__(self, pArgs: BenchInfo):

		
		intParams = []
		pointerParams = []
		structPointerParams = []

		descriptor = pArgs.descriptor
		for line in descriptor.split('\n'):
			if 'function' in line:
				func_params = line.split('|')[1:]
				for param in func_params:
					try:
						param_name, param_type = param.split(None, 1)
					except (ValueError):
						continue
						
					param_name.strip()
					param_type.strip()
					if(isInteger(param_type)):
						intParams += [param_name]
					elif(isPointerType(param_type)):
						pointerParams += [param_name]
					elif(isPointerorStructType(param_type)):
						structPointerParams += [param_name]
        
		self.intParams = intParams
		self.pointerParams = pointerParams
		self.structPointerParams = structPointerParams



	def printIntBounds(self):
		desc = ""
		for name in self.intParams:
			desc += 'value(' + name + ') == 100, '
		
		if(desc):
			desc = desc[:-2]

		return desc

	def printBigArr(self):
		desc = ""
		for name in self.intParams:
			desc += 'value(' + name + ') == 255, '
		for name in self.pointerParams:
			desc += 'length(' + name + ') == 65025, '
		for name in self.structPointerParams:
			desc += 'length(' + name + ') == 65025, '
		if(desc):
			desc = desc[:-2]

		return desc

	def printBigArr10x(self):
		desc = ""
		for name in self.intParams:
			desc += 'value(' + name + ') == 10, '
		for name in self.pointerParams:
			desc += 'length(' + name + ') == 100, '
		for name in self.structPointerParams:
			desc += 'length(' + name + ') == 100, '
		if(desc):
			desc = desc[:-2]

		return desc


def _getBasicConstraints(pArgs: BenchInfo, constraintType: KonstrainExecType) -> BenchInfo:
	
	d = Descriptor(pArgs)
	if constraintType == "int-bounds":
		return d.printIntBounds()
	elif constraintType == "big-arr":
		return d.printBigArr()
	elif constraintType == "big-arr-10x":
		return d.printBigArr10x()