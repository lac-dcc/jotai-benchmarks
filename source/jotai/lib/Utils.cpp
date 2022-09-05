#include "Utils.h"

bool trimString(std::string &s) {
  bool rem = false;
  while(s[0] == ' ') { rem = true; s.erase(s.begin()); }
  while(s[s.size()-1] == ' ') { rem = true; s.pop_back(); }
  return rem;
}

std::string formatTypeUnion(std::string type) {
  size_t pos;
  type.insert(0,"_");
  if((pos = type.find("const")) != std::string::npos) {
    type.replace(pos, 5, "");
  }
  while((pos = type.find(" ")) != std::string::npos) {
    type.replace(pos, 1, "");
  }
  while((pos = type.find("*")) != std::string::npos) {
    type.replace(pos, 1, "p");
  }
  while((pos = type.find("[")) != std::string::npos) {
    type.replace(pos, 1, "_");
  }
  while((pos = type.find("]")) != std::string::npos) {
    type.replace(pos, 1, "_");
  }
  return type;
}