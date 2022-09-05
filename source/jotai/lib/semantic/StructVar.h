#ifndef STRUCT_VAR_H
#define STRUCT_VAR_H

#include <vector>

#include "Var.h"
#include "BaseVar.h" 
#include "PointerVar.h"

class StructVar: public Var {
public:
  std::vector<Var*> fields;

  StructVar(std::string name, std::string type, bool structMember = false);

  std::string getInit();
  std::string deallocMembers(std::string len, std::string name);
  std::string deallocMembers();
};

#endif