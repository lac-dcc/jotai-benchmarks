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

BaseVar *getBaseVar(std::string token, Constraint *C, bool addToMembers) {
  BaseVar *lhv;
  if(token.find("[") != std::string::npos) {
    std::string varName = token;
    varName.erase(varName.find("["));
    trimString(varName);

    PointerVar *PV = dynamic_cast<PointerVar*>(C->name2var[varName]);
    PointerVar *first = PV;

    size_t l = -1;
    
    while((l = token.find("[", l+1)) != std::string::npos) {
      size_t r = token.find("]", l);
      std::string ind = token.substr(l+1,r-l-1);
      
      Var *V = PV->findMember(ind, token, addToMembers);

      // If the last index is a number and it's a BaseVar, 
      // add the new value to members: ex v[0][0] = 5
      if(ind != "_")
      {
        if(auto BV = dynamic_cast<BaseVar*>(V))
        {
          V = new BaseVar(token, BV->type);
          if(addToMembers)
            first->members.push_back(V);
        }   
      }

      PV = dynamic_cast<PointerVar*>(V);
      lhv = dynamic_cast<BaseVar*>(V);
    }


  } 

  else // no need to parse token since there are no [] along with the name
  {
     lhv = dynamic_cast<BaseVar*>(C->name2var[token]);
  }
  return lhv;
}

//We don't support (length x length) expressions!
bool needToSwap(Element lhs, TokenType comp, Element rhs, Constraint *C) {
  if(lhs.type != TT_VALUE && lhs.type != TT_LENGTH) return true;
  if(lhs.type == TT_LENGTH) return false;
  if(rhs.type == TT_LENGTH) return true;
  if(comp == TT_LESS || comp == TT_LESS_EQ || comp == TT_EQUAL) {
    if(lhs.type == TT_VALUE) {
      BaseVar *lhv = getBaseVar(lhs.token, C, false);
      return lhv->upper_bound != "";
    }
  }
  if(comp == TT_GREATER || comp == TT_GREATER_EQ || comp == TT_EQUAL) {
    if(lhs.type == TT_VALUE) {
      BaseVar *lhv = getBaseVar(lhs.token, C, false);
      return lhv->lower_bound != "";
    }
  }
  return false;
}

std::string invertOp(TokenType op)
{
  if(op == TT_ADD)
    return "-";
  else if(op == TT_SUB)
    return "+";
  else if(op == TT_MUL)
    return "/";
  else if(op == TT_DIV)
    return "*";
  return "";
}

std::string getStringOp(TokenType op)
{
  if(op == TT_ADD)
    return "+";
  else if(op == TT_SUB)
    return "-";
  else if(op == TT_MUL)
    return "*";
  else if(op == TT_DIV)
    return "/";
  return "";
}
std::string arith_constraint(Arith lhs, Arith rhs, std::string bound )
{
  std::string lhs_op = "";
  std::string rhs_op = "";

  if(rhs.op != TT_EOF)
  {
    rhs_op = getStringOp(rhs.op);
    bound = bound + " " + rhs_op + " " + rhs.token;
  }

  if(lhs.op != TT_EOF)
  {
    lhs_op = invertOp(lhs.op);
    bound = "(" + bound + ") "+  lhs_op + " " + lhs.token;
  }

  
  
  return bound;
}
//lhs in bounded by whatever is on rhs
void applyValueExpr(Element lhs, TokenType comp, Element rhs, Constraint *C) {
  BaseVar *lhv = getBaseVar(lhs.token, C, true);
  
  std::string bound = arith_constraint(lhs.arith_constraint, rhs.arith_constraint, rhs.token);


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

  std::string bound = arith_constraint(lhs.arith_constraint, rhs.arith_constraint, rhs.token);
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