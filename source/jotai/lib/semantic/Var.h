#ifndef VAR_H
#define VAR_H

#include <string>
#include "../Utils.h"

// 1 classe abstrata e N concretas que a extendem
// dificilmente se extenderia uma concreta
// Liskov

class Var {
public:
  Var(std::string name, std::string type) : name(name), type(type){};
  virtual std::string getInit() = 0;

  std::string name;
  std::string type;
};

#endif