#ifndef ELEMENT_H
#define ELEMENT_H

#include "../lexical/TokenType.h"
#include "../lexical/Lexeme.h"
#include "Arith.h"

class Element {
public:
  Element(TokenType tt, Lexeme lex);
  TokenType type;
  std::string token;
  Arith arith_constraint;

};

#endif