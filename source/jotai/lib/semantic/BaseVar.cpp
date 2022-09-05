#include "BaseVar.h"

bool isIntegerType(std::string type) {
  for(auto T: {"int", "short", "long", "char"}) {
    if(type.find(T) != std::string::npos) return true;
  }
  return false;
}

bool isFloatType(std::string type) {
  for(auto T: {"float", "double"}) {
    if(type.find(T) != std::string::npos) return true;
  }
  return false;
}

//+ " + (((-2 * (rand()%2)) + 1) * rand())%(" + ub + " - " + lb + ")";
std::string integerInit(std::string lower_bound, std::string upper_bound) {
  if(lower_bound == "" && upper_bound == "") 
    return "((-2 * (next_i()%2)) + 1) * next_i()"; 
  std::string lb = (lower_bound == "" ? std::to_string(JOTAI_INT_MIN) : lower_bound);
  std::string ub = (upper_bound == "" ? std::to_string(JOTAI_INT_MAX): upper_bound);
  if(lb == ub) return lb;
  return lb + " + next_i()%(" + ub + " - " + lb + ")";
}

std::string floatInit(std::string lower_bound, std::string upper_bound) {
  if(lower_bound == "") lower_bound = std::to_string(JOTAI_FLT_MIN);
  if(upper_bound == "") upper_bound = std::to_string(JOTAI_FLT_MAX);
  if(lower_bound == upper_bound) return lower_bound;
  return "((-2.0 * (next_i()%2)) + 1.0) * (" + lower_bound 
    + " + (float) next_f() / (((float) " + std::to_string(JOTAI_FLT_MAX) + "/(" + upper_bound 
    + " - " + lower_bound + "))))";
}

std::string BaseVar::getInit() {
  if(isIntegerType(type)) return integerInit(lower_bound, upper_bound);
  else if(isFloatType(type)) return floatInit(lower_bound, upper_bound);
  else return "0";
}

void BaseVar::setLowerBound(std::string lower_bound) {
  this->lower_bound = lower_bound;
}

void BaseVar::setUpperBound(std::string upper_bound) {
  this->upper_bound = upper_bound;
}