#include <string>
#include <cctype>
#include <iostream>
#include "LexicalAnalysis.h"

LexicalAnalysis::LexicalAnalysis(const char* filename) : m_line(1) {
  m_input = fopen(filename, "r");
  prevToken.type = TT_SOF;
}

LexicalAnalysis::~LexicalAnalysis() {
  if(m_input != nullptr)
    fclose(m_input);
}

#define SYMBOLS_STATE 13
#define FINAL_STATE 14

Lexeme LexicalAnalysis::nextToken() {
  int state;
  Lexeme lex;

  state = 1;
  while(state < SYMBOLS_STATE) {
    int c = fgetc(m_input);
    switch(state){
      case 1:
        if(c == '/') state = 2;
        else if(isalpha(c) || c == '_') {
          lex.token += (char) c;
          state = 6;
        }
        else if(isdigit(c)) {
          lex.token += (char) c;
          state = 7;
        }
        else if(c == '(' || c == ')' || c == ',' || c == ';' || 
                c == '.' || c == '*' || c == '[' || c == ']') {
          lex.token += (char) c;
          state = SYMBOLS_STATE;
        }
        else if(c == '=') {
          lex.token += (char) c;
          state = 9;
        }
        else if(c == '!') {
          lex.token += (char) c;
          state = 10;
        }
        else if(c == '>') {
          lex.token += (char) c;
          state = 11;
        }
        else if(c == '<') {
          lex.token += (char) c;
          state = 12;
        }
        else if(c == -1) {
          lex.type = TT_EOF;
          state = FINAL_STATE;
        }
        break;

      //COMMENTS
      case 2:
        if(c == '/') state = 3;
        else if(c == '*') state = 4;
        break;

      case 3:
        if(c == '\n') {
          m_line++;
          state = 1;
        }
        else if(c == -1) {
          lex.type = TT_EOF;
          state = FINAL_STATE;
        }
        break;

      case 4:
        if(c == '*') state = 5;
        else if(c == -1) {
          lex.type = TT_UNEXPECTED_EOF;
          state = FINAL_STATE;
        }
        else {
          state = 4;
        }
        break;

      case 5:
        if(c == '/') state = 1;
        else if(c == -1) {
          lex.type = TT_EOF;
          state = FINAL_STATE;
        }
        else if(c != '*') state = 4;
        break;

      //KEYWORDS and VARIABLES
      case 6:
        if(isalpha(c) || isdigit(c) || c == '_') {
          lex.token += (char) c;
          state = 6;
        }
        else if(c == ' ' || c == '(' || c == ')' || c == '*' ||
                c == '[' || c == ']' || c == '.' || c == ',' || c == -1) {
          ungetc(c, m_input);
          if(prevToken.type == TT_LPAREN || prevToken.type == TT_LBRACKET ||
             prevToken.type == TT_PERIOD) {
            lex.type = TT_VAR;
            state = FINAL_STATE;
          } else {
            state = SYMBOLS_STATE;
          }
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;

      //NUMERICALS
      case 7:
        if(isdigit(c)) {
          lex.token += (char) c;
          state = 7;
        }
        else if(c == '.') {
          lex.token += (char) c;
          state = 8;
        }
        else if(c == ' ' || c == ',' || c == ')' || c == ']' || c == -1 || c == '\n') {
          ungetc(c, m_input);
          lex.type = TT_INTEGER;
          state = FINAL_STATE;
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;

      case 8:
        if(isdigit(c)) {
          lex.token += (char) c;
          state = 8;
        }
        else if(c == ' ' || c == ',' || c == ')' || c == -1) {
          ungetc(c, m_input);
          lex.type = TT_FLOAT;
          state = FINAL_STATE;
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;

      //SYMBOLS
      case 9: // =
        if(c == '=' || c == '>') {
          lex.token += (char) c;
          state = SYMBOLS_STATE;
        }
        else if(c == -1) {
          lex.type = TT_UNEXPECTED_EOF;
          state = FINAL_STATE;
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;

      case 10: // !
        if(c == '=') {
          lex.token += (char) c;
          state = SYMBOLS_STATE;
        }
        else if(c == -1) {
          lex.type = TT_UNEXPECTED_EOF;
          state = FINAL_STATE;
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;

      case 11: // >
        if(c == '=') {
          lex.token += (char) c;
          state = SYMBOLS_STATE;
        }
        else if(isdigit(c) || isalpha(c) || c == ' ') {
          ungetc(c, m_input);
          state = SYMBOLS_STATE;
        }
        else if(c == -1) {
          lex.type = TT_UNEXPECTED_EOF;
          state = FINAL_STATE;
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;

      case 12: // <
        if(c == '=') {
          lex.token += (char) c;
          state = SYMBOLS_STATE;
        }
        else if(isdigit(c) || isalpha(c) || c == ' ') {
          ungetc(c, m_input);
          state = SYMBOLS_STATE;
        }
        else if(c == -1) {
          lex.type = TT_UNEXPECTED_EOF;
          state = FINAL_STATE;
        }
        else {
          lex.type = TT_INVALID_TOKEN;
          state = FINAL_STATE;
        }
        break;
      
      default:
        throw std::string("LexicalAnalysis: invalid state");
    }
  }

  if(state == SYMBOLS_STATE) {
    lex.type = m_st.find(lex.token);
  }

  prevToken = lex;
  return lex;
}