#!/bin/bash

# This script uses cfggrind to get statistics for a particular function.
#
# Author: Fernando Magno Quintao Pereira
#
# Environment: Linux/x86
#
# Usage: ./gen_stats.sh prog_name func_name opt_level
#
# Expected output:
# 1. A JSON file with statistics about the execution of the given function in
# the standard output.
# 2. A cfg*.dot file representing the execution of func_name.
#
# Assumption: the C file (prog_name) contains a function called "func_name".
# The executable produced out of "prog_name" reads the cmd-line argument "0".

if [ $# -lt 4 ]
then
  echo "Syntax: gen_stats.sh prog_name func_name opt_level input"
  echo "Where:"
  echo "    prog_name: is a C file."
  echo "    func_name is a function withing the C file prog_name."
  echo "    opt_level is an optimizaiton level of gcc (starts with a dash)"
  echo "    input is the input of the data, which starts from 0 to n"
  exit 1
else
  prog_name=$1
  func_name=$2
  opt_level=$3
  input=$4
  
  rm -rf *.dot test.json
  
  # Genereate the executable using gcc:
  #
  clang -g -ggdb $opt_level -Wall -fno-stack-protector -no-pie -fno-inline -o test $prog_name

  # Get a map of the instructions in the executable, to enable CFGGrind:
  #
  cfggrind_asmmap ./test > test.map
  
  # Run CFGGrind on the executable:
  #
  valgrind --tool=cfggrind --cfg-outfile=test.cfg --instrs-map=test.map \
	  --cfg-dump=$func_name ./test $input

  # Inform the name of the DOT file just produced (be aware that we might have
  # multiple files).
  #echo "DOT files currently in the folder:"
  #ls cfg-*.dot

  # Collect statistics about the target function:
  #
  cfggrind_info -f "test::$func_name" -s functions -m json test.cfg > test.json
  cat test.json
  # Now, remove the auxiliary files, to leave the folder clean:
  #
  rm -rf test test.cfg test.map *.dot
fi
