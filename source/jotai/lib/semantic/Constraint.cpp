#include "Constraint.h"
#include "../Utils.h"

#include <iostream>

Constraint::Constraint(std::vector<Var*> vars) {
  for(auto V: vars) {
    name2var[V->name] = V;
  }
  this->vars = vars;
  ident = "  ";
}

void Constraint::printVarInits(Descriptor D) {
  //Init base parameters
  for(auto V: vars) {
    if(auto BV = dynamic_cast<BaseVar*>(V)) {
      std::cout << "  " << BV->type << " " << BV->name << " = " 
        << V->getInit() << ";\n\n";
    }
  }
  //Init pointer and struct parameters
  for(auto V: vars) {
    if(auto PV = dynamic_cast<PointerVar*>(V)) {
      std::cout << PV->getInit() << "\n";
    } else if(auto SV = dynamic_cast<StructVar*>(V)) {
      std::cout << "  " << SV->type << " " << SV->name << ";\n";
      std::cout << SV->getInit();
    } else if(auto RV = dynamic_cast<RecursiveStructVar*>(V)) {
      std::cout << RV->getInit() << "\n";
    }
  }
}

void Constraint::printVarDealocs(Descriptor D) {
  for(auto V: vars) {
    if(auto PV = dynamic_cast<PointerVar*>(V)) {
      std::cout << PV->getDealloc();
    }
    if(auto RV = dynamic_cast<RecursiveStructVar*>(V)) {
      std::cout << RV->getDelete();
    }
    if(auto SV = dynamic_cast<StructVar*>(V)) {
      std::cout << SV->deallocMembers();
    }
  }
}

void Constraint::printRecursiveStructFunctions() {
  for(auto V: vars) {
    if(auto RV = dynamic_cast<RecursiveStructVar*>(V)) {
      std::cout << RV->getListInitFunction();
      std::cout << RV->getListDeleteFunction();
    }
  }
}

void Constraint::applySkeletonConstraint(std::string skel, std::string var_name, std::string len) {
  for(auto V: vars) {
    if(auto RV = dynamic_cast<RecursiveStructVar*>(V)) {
      if(RV->name == var_name) {
        RV->setSkeleton(skel, len);
      }
    }
  }
}