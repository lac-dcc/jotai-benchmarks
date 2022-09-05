#ifndef CONSTRAINT_H
#define CONSTRAINT_H

#include <vector>
#include <unordered_map>
#include <functional>

#include "Var.h"
#include "../ParseDescriptors.h"

class Constraint {
public:
  std::vector<Var*> vars;
  std::unordered_map<std::string, Var*> name2var;
  
  Constraint(std::vector<Var*> vars);

  /**
   * Prints the constrained initializations
   * of our parameters.
   */
  void printVarInits(Descriptor D);

  void printVarDealocs(Descriptor D);
  void printRecursiveStructFunctions();
  void applySkeletonConstraint(std::string skel, std::string var_name, std::string len);
  
  std::string ident;

};

#endif