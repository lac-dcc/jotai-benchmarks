#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

#include <string>

enum TokenType {
  //Specials
  TT_UNEXPECTED_EOF = -2,
  TT_INVALID_TOKEN = -1,
  TT_EOF = 0,
  TT_SOF,         // Start Of File

  //Values
  TT_INTEGER,     // 1234
  TT_FLOAT,       // 12.34
  TT_CHAR,        // 'c'
  TT_STRING,      // "str"

  //Symbols
  TT_COMMA,       // ,
  TT_PERIOD,      // .
  TT_LPAREN,      // (
  TT_RPAREN,      // )
  TT_LBRACKET,    // [
  TT_RBRACKET,    // ]
  TT_SINGLE_QUOTE,

  //Ties
  TT_EQUAL,       // ==
  TT_NOT_EQUAL,   // !=
  TT_LESS_EQ,     // <=
  TT_GREATER_EQ,  // >=
  TT_LESS,        // <
  TT_GREATER,     // >

  //Arithmetic operators
  TT_ADD,         // +
  TT_SUB,         // -
  TT_MUL,         // *
  TT_DIV,         // /


  //Keywords
  TT_VALUE,       // value
  TT_LENGTH,      // length
  TT_LINKED,      // linked list skeleton
  TT_DLINKED,     // doubly linked list skeleton
  TT_BTREE,       // binary tree

  //Other
  TT_VAR,          // C var
};

inline std::string tt2str(TokenType type) {
  switch(type) {
    //Specials
    case TT_UNEXPECTED_EOF:
      return "UNEXPECTED_EOF";
    case TT_INVALID_TOKEN:
      return "INVALID_TOKEN";
    case TT_EOF:
      return "EOF";

    //Consts
    case TT_INTEGER:
      return "INTEGER";     
    case TT_FLOAT:
      return "FLOAT";
    case TT_CHAR:
      return "CHAR";
    case TT_STRING:
      return "STRING";

    // Arithmetic operators
    case TT_ADD:
      return "ADD";
    case TT_SUB:
      return "SUB";
    case TT_MUL:
      return "MUL";
    case TT_DIV:
      return "DIV";


    //Symbols
    case TT_COMMA:
      return "COMMA";
    case TT_PERIOD:
      return "PERIOD";
    case TT_LPAREN:
      return "LPAREN";
    case TT_RPAREN:
      return "RPAREN";
    case TT_LBRACKET:
      return "LBRACKET";
    case TT_RBRACKET:
      return "RBRACKET";

    //Ties
    case TT_EQUAL:
      return "EQUAL";
    case TT_NOT_EQUAL:
      return "NOT_EQUAL";
    case TT_LESS_EQ:
      return "LESS_EQ";
    case TT_GREATER_EQ:
      return "GREATER_EQ";
    case TT_LESS:
      return "LESS";
    case TT_GREATER:
      return "GREATER";

    //Keywords
    case TT_VALUE:
      return "VALUE";
    case TT_LENGTH:
      return "LENGTH";
    case TT_LINKED:
      return "LINKED";
    case TT_DLINKED:
      return "DLINKED";
    case TT_BTREE:
      return "BINTREE";

    //Other
    case TT_VAR:
      return "VAR";
  }
  return "UNKNOWN_TT";
};

#endif