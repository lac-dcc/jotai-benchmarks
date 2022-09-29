#ifndef POINTER_VAR_H
#define POINTER_VAR_H

#include <vector>

#include "Var.h"
#include "BaseVar.h"
#include "StructVar.h"
#include "../Utils.h"

class PointerVar: public Var {
public:
  std::string lower_bound = "";
  std::string upper_bound = "";
  std::vector<Var*> members;
  int depth;
  bool structMember;

  PointerVar(std::string name, std::string type, int depth = 0, bool structMember = false);

  std::string getInit();
  std::string getDealloc();
  std::string getLenVar();
  std::string getLen();
  std::string getPointerInit(Var *V, std::string len_var, int depth);
  void setLowerBound(std::string lower_bound);
  void setUpperBound(std::string upper_bound);
  Var *findMember(std::string ind, std::string token, bool addToMembers);
};

#endif