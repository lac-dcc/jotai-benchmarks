#ifndef LEXICAL_ANALYSIS_H
#define LEXICAL_ANALYSIS_H

#include "Lexeme.h"
#include "SymbolTable.h"

class LexicalAnalysis {
public:
  LexicalAnalysis(const char* filename);
  virtual ~LexicalAnalysis();

  Lexeme nextToken();
  int line() const { return m_line; }
  
private:
  int m_line;
  SymbolTable m_st;
  FILE* m_input;
  Lexeme prevToken;
};

#endif