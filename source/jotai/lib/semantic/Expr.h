#ifndef EXPR_H
#define EXPR_H

#include "Var.h"
#include "Constraint.h"
#include "Element.h"
#include "../lexical/TokenType.h"
#include "../Utils.h"

class Expr {
public:
  static void apply(Element lhs, TokenType comp, Element rhs, Constraint *C);
};

#endif