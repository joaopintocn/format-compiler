/* parser.c -- without the optimizations */

#include "global.h"

int lookahead;

void eat(int);
void start(), list(), expr(), term_tail(), term(), factor_tail(), factor(), expo_tail(), expo();

void parse()  /*  parses and translates expression list  */
{
  lookahead = yylex();
  start();
}

void start ()
{
  /* Just one production for start, so we don't need to check lookahead */
  list(); eat(DONE);
}

void list()
{
  if (lookahead == OPEN_PARENTHESIS || lookahead == ID || lookahead == INT_NUMBER) {
    expr(); eat(SEMICOLON); list();
  }
  else {
    /* Empty */
  }
}


void expr ()
{
  /* Just one production for expr, so we don't need to check lookahead */
  term(); term_tail();
}

void term_tail()
{
  if (lookahead == ADD_OP) {
    eat(ADD_OP); term(); emit(ADD_OP, yytext); term_tail();
  }
  else if (lookahead == SUB_OP) {
    eat(SUB_OP); term(); emit(SUB_OP, yytext); term_tail();
  }
  else {
    /* Empty */
  }
}


void term ()
{
  /* Just one production for term, so we don't need to check lookahead */
  factor(); factor_tail();
}

void factor_tail ()
{
  if (lookahead == MULT_OP) {
    eat(MULT_OP); factor(); emit(MULT_OP, yytext); factor_tail();
  }
  else if (lookahead == DIV_OP) {
    eat(DIV_OP); factor(); emit(DIV_OP, yytext); factor_tail();
  }
  else if (lookahead == MOD_OP) {
    eat(MOD_OP); factor(); emit(MOD_OP, yytext); factor_tail();
  }
  else {
    /* Empty */
  }
}

void factor ()
{
  expo(); expo_tail();
}

void expo_tail ()
{
 if (lookahead == EXPO_OP) {
    eat(EXPO_OP); expo(); emit(EXPO_OP, yytext); expo_tail();
  }
  else {
    /* Empty */
  }
}

void expo ()
{
  if (lookahead == OPEN_PARENTHESIS) {
    eat(OPEN_PARENTHESIS); expr(); eat(CLOSE_PARENTHESIS);
  }
  else if (lookahead == ID) {
    char* id_lexeme = yytext;
    eat(ID);
    emit(ID, id_lexeme);
  }
  else if (lookahead == INT_NUMBER) {
    char* INT_NUMBER_value = yytext;
    eat(INT_NUMBER);
    emit(INT_NUMBER, INT_NUMBER_value);
  }
  else
    error("syntax error in factor");
}

void eat(int t)
{
  if (lookahead == t)
    lookahead = yylex();
  else
    error ("syntax error in match");
}
