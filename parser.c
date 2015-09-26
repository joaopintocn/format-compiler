/* parser.c -- without the optimizations */

#include "global.h"






int lookahead;

void eat(int);
void start(), program(), program_header(), program_body(), import(), variable_declaration(), subprogram_declaration();
void simple_variable_declaration(), compost_variable_declaration(), type(), expression(), identifier();
void list(), values(), term_tail(), term(), factor_tail(), factor(), expo_tail(), expo();
void dimensions() {} ;






void parse(char *src)  /*  parses and translates expression list  */
{
    FILE *file = fopen(src, "r");
    if (!file) {
        fprintf(stderr,"could not open %s\n",src);
        exit(1);
    }
    yyin = file;
    lookahead = yylex();
    start();
}

void start ()
{
  /* Just one production for start, so we don't need to check lookahead */
  program(); eat(EOF);
}


void program()
{
/*
 * <program> ::=
 *    <program_header> <program_body>
 *
 */

  program_header(); program_body(); 

}


void program_header()
{
/*
 * <program_header> ::=
 *      { <import> }
 * 
 */ 

    if (lookahead != VARIABLES_SECTION && lookahead != SUBPROGRAMS_SECTION) {
        import();
    }
}


void program_body()
{
/*
 * <program_body> ::=  
 *    [ ‘variables’ ‘:’ ( <variable_declaration> )+ ]
 *    [ ‘subprograms’ ‘:’ ( <subprogram_declaration> )+ ]
 */
 if (lookahead == VARIABLES_SECTION) {
    eat(VARIABLES_SECTION); eat(COLON); 

    while (lookahead != SUBPROGRAMS_SECTION) {
      variable_declaration();  
    }

 } else if (lookahead == SUBPROGRAMS_SECTION) {
    eat(SUBPROGRAMS_SECTION); eat(COLON); 
        
    while (lookahead != EOF) {
      subprogram_declaration();  
    }

 } else {
    /* Empty */
 }
}


void import()
{
/*
 * <import> ::=   
 *      ‘import’ <identifier>
 *
 */

  eat(IMPORT); eat(STRING);

}

void variable_declaration() 
{
/*
 * <variable_declaration> ::=
 *    ( <simple_variable_declaration> | <compost_variable_declaration> )
 *
 */

  if (lookahead == CONST || 
      lookahead == REF ||
      lookahead == INT || 
      lookahead == DOUBLE || 
      lookahead == REAL ||
      lookahead == STRING || 
      lookahead == COMPLEX ) {
    printf("simple_variable_declaration()  %s\n", yytext);
    simple_variable_declaration();

  } 

  if (lookahead == MATRIX_OF || 
      lookahead == SET_OF ||
      lookahead == ENUM || 
      lookahead == STRUCT ) {

    compost_variable_declaration();

  }

}  


void simple_variable_declaration()
{
/*
 * <simple_variable_declaration> ::=
 *    [ ‘const’ | ‘ref’ ] <type> <id> [ ‘=’ <expression> ] ‘;’
 * 
 */

    if ( lookahead == CONST )
        eat(CONST);

    if ( lookahead == REF )
        eat(REF);

    type();

    identifier();

    if ( lookahead == ASSIGN_OP ) {
        eat(ASSIGN_OP);

        if ( lookahead == STRING ) {
            eat(STRING);
        } else {
            expression();        
        }
    }
    
    eat(SEMICOLON);
}

void compost_variable_declaration()
{
/*
 * <compost_variable_declaration> ::=
 *      ‘matrix_of’ <type> ‘[’ <dimensions> ‘]’ <identifier> 
 *            [ ‘=’ ‘{’ <values> ‘}’ { ‘,’ ‘{’ <values> ‘}’ } ] ‘;’ |
 *
 *      ‘set_of’ <type> <identifier> [ ‘=’ ‘{’ ‘}’ ]‘;’ |
 * 
 *      ‘enum’ <identifier> ‘:’ ( <identifier> [ ‘=’ <value> ] ‘,’ )+ ‘end_enum’ ‘;’ |
 *
 *      ‘struct’ <identifier> ‘:’ ( <simple_variable_declaration> )+ ‘end_struct’ ‘;’
 *
 */

    if ( lookahead == MATRIX_OF ) {
        eat(MATRIX_OF);
        type();
        eat(OPEN_BRACKETS);
        dimensions();
        eat(CLOSE_BRACKETS);
        identifier();

        if ( lookahead == ASSIGN_OP ) {
            eat(ASSIGN_OP);
            eat(OPEN_BRACES);
            values();
            eat(CLOSE_BRACES);

            while (lookahead == COMMA) {
                eat(OPEN_BRACES);
                values();
                eat(CLOSE_BRACES);
            }
        }

        eat(SEMICOLON);
        return;
    }

    if ( lookahead == SET_OF ) {
        eat(SET_OF);
        type();
        identifier();

        if ( lookahead == ASSIGN_OP ) {
            eat(ASSIGN_OP);
            values(); //TO-DO: Não sei ainda como definir/implementar isso.
        }

        eat(SEMICOLON);
        return;
    }

    if ( lookahead == ENUM ) {
        eat(ENUM);
        identifier();
        eat(COLON);

        while (lookahead != END_ENUM) {
            identifier();
            if ( lookahead == ASSIGN_OP ) {
                eat(ASSIGN_OP);
                expression(); //TO-DO: Não sei ainda como definir/implementar isso.
            }
        }

        eat(END_ENUM);
        eat(SEMICOLON);
        return;
    }

    if ( lookahead == STRUCT ) {
        eat(STRUCT);
        identifier();
        eat(COLON);

        while (lookahead != END_STRUCT) {
            simple_variable_declaration();
        }

        eat(END_STRUCT);
        eat(SEMICOLON);
        return;
    }

}

void subprogram_declaration()
{



}


void identifier() {
  char* id_lexeme = yytext;
  eat(ID);
  emit(ID, id_lexeme);
}


void type() {
/*
 * <type> ::=
 *    int | [double] real | string | complex 
 *
 */

  if ( lookahead == INT ) {
      eat(INT); return;
  }

  if ( lookahead == DOUBLE ) {
    eat(DOUBLE);
    if ( lookahead == REAL ) {
      eat(REAL); return;
    }
  }

  if ( lookahead == REAL ) {
      eat(REAL); return;
    }

  if ( lookahead == STRING ) {
      eat(STRING); return;
  }

  if ( lookahead == COMPLEX ) {
      eat(COMPLEX); return;
  }
} 



void list()
{
  if (lookahead == OPEN_PARENTHESIS || lookahead == ID || lookahead == INT_NUMBER) {
    expression(); eat(SEMICOLON); list();
  }
  else {
    /* Empty */
  }
}





void expression()
{
/*
 *  <expr>    ::=   <term> <term_tail>
 */

  term(); term_tail();
}


void term_tail()
{
/*
 *  <term_tail>     ::=   + <term> <term_tail> | 
 *                        - <term> <term_tail> |
 */

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
/*
 *  <term>    ::=  <factor> <factor_tail>
 */

  factor(); factor_tail();
}


void factor_tail ()
{
/*
 *  <factor_tail>   ::=   x <factor> <factor_tail> |
 *                        / <factor> <factor_tail> |
 *                        % <factor> <factor_tail> |
 */

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
/*
 *  <factor>    ::=   <expo> <expo_tail>
 */

  expo(); expo_tail();
}

void expo_tail ()
{
/*
 * <expo_tail>   ::=   ^ <expo> <expo_tail> |
 */

 if (lookahead == EXPO_OP) {
    eat(EXPO_OP); expo(); emit(EXPO_OP, yytext); expo_tail();
  }
  else {
    /* Empty */
  }
}


void expo ()
{
/*
 * <expo>    ::=    <id> | <lit> | (<expr>)
 */

    if (lookahead == OPEN_PARENTHESIS) {
        eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS);
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
    else if (lookahead == REAL_NUMBER) {
        char* REAL_NUMBER_value = yytext;
        eat(REAL_NUMBER);
        emit(REAL_NUMBER, REAL_NUMBER_value);
    }
    else if (lookahead == COMPLEX_NUMBER) {
        char* COMPLEX_NUMBER_value = yytext;
        eat(COMPLEX_NUMBER);
        emit(COMPLEX_NUMBER, COMPLEX_NUMBER_value);
    }
    else
        error("syntax error in factor");
}


void values() {

}

void eat(int t)
{

  printf("%d   %d\n", lookahead, t);
  if (lookahead == t)
    lookahead = yylex();
  else {
    error ("syntax error in match");
  }
}