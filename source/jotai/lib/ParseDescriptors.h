#ifndef PARSE_DESCRIPTORS_H
#define PARSE_DESCRIPTORS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_map>
#include <set>

#include "semantic/Var.h"
#include "semantic/BaseVar.h"
#include "semantic/PointerVar.h"
#include "semantic/StructVar.h"
#include "semantic/RecursiveStructVar.h"

struct Function {
  Function(std::string F);
  std::string name;
  std::string type;
  std::vector<Var*> params;
  int argc();
};

struct Field {
  std::string name;
  std::string type;
};

std::vector<Var*> parseParams(std::string line);
StructVar *initStructVar(std::string name, std::string type);

struct Descriptor {
  static std::unordered_map<std::string, std::vector<Field> > str2fields;
  Descriptor(std::string d_file);

  Function *function;

  void parseStruct(std::string desc);
  void printFunctionCall();
  void printVarInitWithFunctionCall(bool calc_runtime);
  bool hasParamOfType(std::string type);
  void printAllInputs();
};

#endif