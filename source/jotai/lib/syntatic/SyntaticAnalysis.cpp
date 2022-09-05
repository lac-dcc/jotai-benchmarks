#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "SyntaticAnalysis.h"

SyntaticAnalysis::SyntaticAnalysis(LexicalAnalysis& lex, std::vector<Var*> params) :
  m_lex(lex), m_current(lex.nextToken()), C(new Constraint(params)) {}

SyntaticAnalysis::~SyntaticAnalysis() {}

Constraint SyntaticAnalysis::start() {
  procConstraint();
  eat(TT_EOF);
  return *C;
}

void SyntaticAnalysis::advance() {
  m_current = m_lex.nextToken();
}

void SyntaticAnalysis::eat(TokenType type) {
  if(type == m_current.type) {
    advance();
  } else {
    showError();
  }
}

void SyntaticAnalysis::showError() {
  std::cout << std::setw(2) << std::setfill('0') << m_lex.line() << ": ";
  
  switch(m_current.type) {
    case TT_INVALID_TOKEN:
      std::cout << "Invalid lexeme [" << m_current.token << "]" << std::endl;
      break;
    case TT_UNEXPECTED_EOF:
    case TT_EOF:
      std::cout << "Unexpected end of file" << std::endl;
      break;
    default:
      std::cout << "Unexpected lexeme [" << m_current.token << "]" << std::endl;
  }

  exit(1);
}

// <constraint>  ::= <expr> { ',' <expr> }
void SyntaticAnalysis::procConstraint() {
  if((m_current.type >= TT_INTEGER && m_current.type <= TT_STRING)
      || m_current.type >= TT_VALUE && m_current.type <= TT_LINKED
      || m_current.type >= TT_VALUE && m_current.type <= TT_DLINKED
      || m_current.type >= TT_VALUE && m_current.type <= TT_BTREE) {
    procExpr();
    while(m_current.type == TT_COMMA) {
      eat(TT_COMMA);
      procExpr();
    }
  } else if(m_current.type != TT_EOF) {
    showError();
  }
}

// <expr>        ::= <skeleton> | <element> (== | != | > | < | >= | <=) <element>
void SyntaticAnalysis::procExpr() {
  if((m_current.type >= TT_LINKED && m_current.type <= TT_LINKED) ||
    (m_current.type >= TT_DLINKED && m_current.type <= TT_DLINKED) ||
    (m_current.type >= TT_BTREE && m_current.type <= TT_BTREE))
  {
    procSkeleton();
  } else {
    Element lhs = procElement();
    TokenType comp = m_current.type;
    switch(m_current.type) {
      case TT_EQUAL:
        eat(TT_EQUAL);
        break;
      case TT_NOT_EQUAL:
        eat(TT_NOT_EQUAL);
        break;
      case TT_GREATER:
        eat(TT_GREATER);
        break;
      case TT_LESS:
        eat(TT_LESS);
        break;
      case TT_GREATER_EQ:
        eat(TT_GREATER_EQ);
        break;
      case TT_LESS_EQ:
        eat(TT_LESS_EQ);
        break;
      default:
        showError();
    }
    Element rhs = procElement();
    Expr::apply(lhs,comp,rhs,C);
  }
}

std::string skel_constraint(TokenType skel)
{
  if (skel == TT_LINKED)
    return "linked";
  else if (skel == TT_DLINKED)
    return "dlinked";
  else if (skel == TT_BTREE)
    return "btree";
  return "";
}

// <skeleton>    ::= (linked | doublyLinked | binTree) '(' <variable> ',' <integer> ')'
void SyntaticAnalysis::procSkeleton() {
  auto skel = m_current.type;
  
  if(skel == TT_LINKED || skel == TT_DLINKED || skel == TT_BTREE)
  {
    eat(skel);
    eat(TT_LPAREN);
    Lexeme var = procVariable();
    eat(TT_COMMA);
    std::string len = m_current.token;
    eat(TT_INTEGER);
    eat(TT_RPAREN);

    C->applySkeletonConstraint(skel_constraint(skel), var.token, len);
  }

}

// <element>     ::= <const> | (value | length) '(' <variable> ')'
Element SyntaticAnalysis::procElement() {
  if(m_current.type >= TT_INTEGER && m_current.type <= TT_STRING) {
    Element elem(m_current.type, m_current);
    procConst();
    return elem;
  } else if(m_current.type == TT_VALUE) {
    eat(TT_VALUE);
    eat(TT_LPAREN);
    Element elem(TT_VALUE, procVariable());
    eat(TT_RPAREN);
    return elem;
  } else if(m_current.type == TT_LENGTH) {
    eat(TT_LENGTH);
    eat(TT_LPAREN);
    Element elem(TT_LENGTH, procVariable());
    eat(TT_RPAREN);
    return elem;
  }
}

// <variable>    ::= <var> { '[' (<integer> | <variable>) ']' }
Lexeme SyntaticAnalysis::procVariable() {
  Lexeme lex = m_current;
  eat(TT_VAR);
  while(m_current.type == TT_LBRACKET) {
    eat(TT_LBRACKET);
    lex.token += "[";
    if(m_current.type == TT_INTEGER) {
      lex.token += m_current.token;
      eat(TT_INTEGER);
    } else {
      lex.token += procVariable().token;
    }
    eat(TT_RBRACKET);
    lex.token += "]";
  }
  return lex;
}

// <const> ::= <integer> | <floating-point> | <char> | <string>
void SyntaticAnalysis::procConst() {
  switch(m_current.type) {
    case TT_INTEGER:
      eat(TT_INTEGER);
      break;
    case TT_FLOAT:
      eat(TT_FLOAT);
      break;
    case TT_CHAR:
      eat(TT_CHAR);
      break;
    case TT_STRING:
      eat(TT_STRING);
      break;
    default:
      showError();
  }
}