#include "Expr.h"

#include <iostream>

TokenType invert(TokenType comp) {
  switch(comp) {
    case TT_LESS:
      return TT_GREATER;
    case TT_LESS_EQ:
      return TT_GREATER_EQ;
    case TT_GREATER:
      return TT_LESS;
    case TT_GREATER_EQ:
      return TT_LESS_EQ;
  }
  return TT_EQUAL;
}

BaseVar *getBaseVar(std::string token, Constraint *C) {
  BaseVar *lhv;
  if(token.find("[") != std::string::npos) {
    std::string varName = token;
    varName.erase(varName.find("["));
    trimString(varName);

    PointerVar *PV = dynamic_cast<PointerVar*>(C->name2var[varName]);
    
    size_t l = -1;
    while((l = token.find("[", l+1)) != std::string::npos) {
      size_t r = token.find("]", l);
      std::string ind = token.substr(l+1,r-l-1);
      Var *V = PV->findMember(ind);
      PV = dynamic_cast<PointerVar*>(V);
      lhv = dynamic_cast<BaseVar*>(V);
    }
  } else lhv = dynamic_cast<BaseVar*>(C->name2var[token]);
  return lhv;
}

//We don't support (length x length) expressions!
bool needToSwap(Element lhs, TokenType comp, Element rhs, Constraint *C) {
  if(lhs.type != TT_VALUE && lhs.type != TT_LENGTH) return true;
  if(lhs.type == TT_LENGTH) return false;
  if(rhs.type == TT_LENGTH) return true;
  if(comp == TT_LESS || comp == TT_LESS_EQ || comp == TT_EQUAL) {
    if(lhs.type == TT_VALUE) {
      BaseVar *lhv = getBaseVar(lhs.token, C);
      return lhv->upper_bound != "";
    }
  }
  if(comp == TT_GREATER || comp == TT_GREATER_EQ || comp == TT_EQUAL) {
    if(lhs.type == TT_VALUE) {
      BaseVar *lhv = getBaseVar(lhs.token, C);
      return lhv->lower_bound != "";
    }
  }
  return false;
}

//lhs in bounded by whatever is on rhs
void applyValueExpr(Element lhs, TokenType comp, Element rhs, Constraint *C) {
  BaseVar *lhv = getBaseVar(lhs.token, C);
  std::string bound = rhs.token;
  if(comp == TT_LESS_EQ || comp == TT_GREATER) {
    bound = "(" + bound + "+1)";
  }
  if(comp == TT_GREATER || comp == TT_GREATER_EQ || comp == TT_EQUAL) {
    lhv->setLowerBound(bound);
  }
  if(comp == TT_LESS || comp == TT_LESS_EQ || comp == TT_EQUAL) {
    lhv->setUpperBound(bound);
  }
}

//lhs is length; rhs is value or const
void applyLengthExpr(Element lhs, TokenType comp, Element rhs, Constraint *C) {
  std::vector<std::string> inds;
  size_t pos = -1;
  while((pos = lhs.token.find("[", pos+1)) != std::string::npos) {
    size_t r = lhs.token.find("]", pos);
    inds.push_back(lhs.token.substr(pos+1, r-pos-1));
  }
  if((pos = lhs.token.find("[")) != std::string::npos) lhs.token = lhs.token.substr(0, pos);

  PointerVar *lhv = dynamic_cast<PointerVar*>(C->name2var[lhs.token]);
  for(auto ind: inds) {
    if(ind == "_") {
      lhv = dynamic_cast<PointerVar*>(lhv->members[0]);
    }
  }

  std::string bound = rhs.token;
  if(comp == TT_LESS_EQ || comp == TT_GREATER) {
    bound = "(" + bound + "+1)";
  }
  if(comp == TT_GREATER || comp == TT_GREATER_EQ || comp == TT_EQUAL) {
    lhv->setLowerBound(bound);
  }
  if(comp == TT_LESS || comp == TT_LESS_EQ || comp == TT_EQUAL) {
    lhv->setUpperBound(bound);
  }
}

void Expr::apply(Element lhs, TokenType comp, Element rhs, Constraint *C) {
  if(needToSwap(lhs,comp,rhs,C)) {
    std::swap(lhs,rhs);
    comp = invert(comp);
  }
  if(lhs.type == TT_VALUE) {
    applyValueExpr(lhs, comp, rhs, C);
  } else if(lhs.type == TT_LENGTH) {
    applyLengthExpr(lhs, comp, rhs, C);
  }
}