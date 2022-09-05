#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <unordered_map>
#include "TokenType.h"

class SymbolTable {
public:
  SymbolTable();
  virtual ~SymbolTable();

  bool contains(const std::string& token) const;
  enum TokenType find(const std::string& token);

private:
  std::unordered_map<std::string, enum TokenType> m_symbols = {
    //Symbols
    {",", TT_COMMA},
    {".", TT_PERIOD},
    {"(", TT_LPAREN},
    {")", TT_RPAREN},
    {"[", TT_LBRACKET},
    {"]", TT_RBRACKET},

    //Ties
    {"==", TT_EQUAL},
    {"!=", TT_NOT_EQUAL},
    {"<=", TT_LESS_EQ},
    {">=", TT_GREATER_EQ},
    {"<", TT_LESS},
    {">", TT_GREATER},

    //Keywords
    {"value", TT_VALUE},
    {"length", TT_LENGTH},
    {"linked", TT_LINKED},
    {"dlinked", TT_DLINKED},
    {"btree", TT_BTREE},
  };
};

#endif