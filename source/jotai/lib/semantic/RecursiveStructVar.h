#ifndef RECURSIVE_STRUCT_VAR_H
#define RECURSIVE_STRUCT_VAR_H

#include <vector>

#include "Var.h"
#include "BaseVar.h" 
#include "PointerVar.h"

class RecursiveStructVar: public Var {
public:
  std::vector<Var*> fields;
  std::string skel = "linked";
  std::string length = "1";

  RecursiveStructVar(std::string name, std::string type);

  std::string getInit();
  std::string getDelete();
  std::string linkedListInitFunction();
  std::string doublyLinkedListInitFunction();
  std::string binTreeInitFunction();
  std::string getListInitFunction();
  std::string getListDeleteFunction();
  std::string binTreeDeleteFunction();
  void setSkeleton(std::string type, std::string length);
};

class RecursiveField: public Var {
public:
  RecursiveField(std::string name, std::string type): Var(name, type) {}

  std::string getInit() {}
};

#endif