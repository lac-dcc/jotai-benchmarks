#include "Element.h"

Element::Element(TokenType tt, Lexeme lex) :
  type(tt), token(lex.token) {}