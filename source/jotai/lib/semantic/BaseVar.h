#ifndef BASE_VAR_H
#define BASE_VAR_H

#include <iostream>

#include "Var.h"

class BaseVar: public Var {
public:
  std::string lower_bound = "";
  std::string upper_bound = "";

  BaseVar(std::string name, std::string type) : Var(name, type) {};
  std::string getInit();
  void setLowerBound(std::string lower_bound);
  void setUpperBound(std::string upper_bound);
};

#endif