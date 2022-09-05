#ifndef LEXEME_H
#define LEXEME_H

#include <string>
#include <sstream>
#include "TokenType.h"

struct Lexeme {
  std::string token;
  enum TokenType type;

  Lexeme() : token(""), type(TT_EOF) {};
  virtual ~Lexeme() {};

  const std::string str() {
    std::stringstream ss;

    ss << "(\"" << token << "\", " << tt2str(type) << ")";
    return ss.str();
  };
};

#endif