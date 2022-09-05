#ifndef SYNTATIC_ANALYSIS_H
#define SYNTATIC_ANALYSIS_H

#include "../lexical/LexicalAnalysis.h"
#include "../semantic/Constraint.h"
#include "../semantic/Var.h"
#include "../semantic/Expr.h"
#include "../semantic/Element.h"

class SyntaticAnalysis {
public:
  SyntaticAnalysis(LexicalAnalysis& lex, std::vector<Var*> params);
  virtual ~SyntaticAnalysis();

  Constraint start();

private:
  LexicalAnalysis& m_lex;
  Lexeme m_current;
  Constraint *C;

  void advance();
  void eat(TokenType type);
  void showError();

  void procConstraint();
  void procExpr();
  void procSkeleton();
  Element procElement();
  Lexeme procVariable();
  void procConst();
};

#endif