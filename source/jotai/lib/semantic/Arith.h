#ifndef ARITH_H
#define ARITH_H

#include "../lexical/TokenType.h"
#include "../lexical/Lexeme.h"

class Arith {
public:
  TokenType type;
  std::string token;
  TokenType op = TT_EOF;
  
};

#endif