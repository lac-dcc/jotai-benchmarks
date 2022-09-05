#include <iostream>

#include "lexical/LexicalAnalysis.h"
#include "syntatic/SyntaticAnalysis.h"
#include "semantic/Constraint.h"
#include "ParseDescriptors.h"



void printVars(Var *var, std::string indent="") {
  if(auto V = dynamic_cast<BaseVar*>(var)) {
    std::cout << indent << "BaseVar(" << var->name << ", " << var->type << ")\n";
  }
  if(auto V = dynamic_cast<StructVar*>(var)) {
    std::cout << indent << "StructVar(" << var->name << ", " << var->type << ") {\n";
    for(auto f: V->fields) {
      printVars(f, indent+" ");
    }
    std::cout << indent << "}\n";
  }
  if(auto V = dynamic_cast<PointerVar*>(var)) {
    std::cout << indent << "PointerVar(" << var->name << ", " << var->type << ") {\n";
    for(auto m: V->members) {
      printVars(m, indent+" ");
    }
    std::cout << indent << "}\n";
  }
  if(auto V = dynamic_cast<RecursiveStructVar*>(var)) {
    std::cout << indent << "RecursiveStructVar(" << var->name << ", " << var->type << ")\n";
  }
}

int main(int argc, char *argv[]) {
  if(argc != 3) {
    std::cout << "Usage: " << argv[0] << " [CONSTRAINTS FILE] [DESCRIPTOR FILE]" << std::endl;
    exit(0);
  }

  srand48(888l);

  Descriptor D(argv[2]);

  try {
    LexicalAnalysis l(argv[1]);
    SyntaticAnalysis s(l, D.function->params);

    Constraint C = s.start();

    C.printRecursiveStructFunctions();
    std::cout << "/*RV_DELIM*/" ;
    C.printVarInits(D);
    D.printVarInitWithFunctionCall();
    // D.printAllInputs();
    C.printVarDealocs(D);
  } catch(const std::string& error) {
    std::cerr << error << std::endl;
  }

  return 0;
}