/* parser.c -- without the optimizations */

#include "global.h"

int lookahead;

void match(int);
void start(), list(), expr(), moreterms(), term(), morefactors(), factor();

void parse()  /*  parses and translates expression list  */
{
  lookahead = yylex();
  start();
}

void start ()
{
  /* Just one production for start, so we don't need to check lookahead */
  list(); match(DONE);
}

void list()
{
  if (lookahead == '(' || lookahead == ID || lookahead == INT_NUMBER) {
    expr(); match(';'); list();
  }
  else {
    /* Empty */
  }
}

void expr ()
{
  /* Just one production for expr, so we don't need to check lookahead */
  term(); moreterms();
}

void moreterms()
{
  if (lookahead == ADD_OP) {
    match(ADD_OP); term(); emit(ADD_OP, yytext); moreterms();
  }
  else if (lookahead == SUB_OP) {
    match(SUB_OP); term(); emit(SUB_OP, yytext); moreterms();
  }
  else {
    /* Empty */
  }
}

void term ()
{
  /* Just one production for term, so we don't need to check lookahead */
  factor(); morefactors();
}

void morefactors ()
{
  if (lookahead == MULT_OP) {
    match(MULT_OP); factor(); emit(MULT_OP, yytext); morefactors();
  }
  else if (lookahead == DIV_OP) {
    match(DIV_OP); factor(); emit(DIV_OP, yytext); morefactors();
  }
  else if (lookahead == DIV_OP) {
    match(DIV_OP); factor(); emit(DIV_OP, yytext); morefactors();
  }
  else if (lookahead == MOD_OP) {
    match(MOD_OP); factor(); emit(MOD_OP, yytext); morefactors();
  }
  else {
    /* Empty */
  }
}

void factor ()
{
  if (lookahead == '(') {
    match('('); expr(); match(')');
  }
  else if (lookahead == ID) {
    char* id_lexeme = yytext;
    match(ID);
    emit(ID, id_lexeme);
  }
  else if (lookahead == INT_NUMBER) {
    char* INT_NUMBER_value = yytext;
    match(INT_NUMBER);
    emit(INT_NUMBER, INT_NUMBER_value);
  }
  else
    error("syntax error in factor");
}

void match(int t)
{
  if (lookahead == t)
    lookahead = yylex();
  else
    error ("syntax error in match");
}
