/* parser.c -- without the optimizations */

#include "global.h"



int lookahead; 

void eat(int);
void start(), program(), program_header(), program_body(), import(), variable_declaration();
void simple_variable_declaration(), compost_variable_declaration(), type(), expression(), identifier();
void list(), values(), term_tail(), term(), factor_tail(), factor(), expo_tail(), expo();
void dimensions() {} ;
void subprogram_declaration(), procedure_declaration(), function_declaration();
void procedure_header(), procedure_body(), function_header(), function_body();
void parameter_list(), statement(), return_statement(), assignment_statement();
void if_statement(), switch_statement(), case_clasule(), while_statement(), for_statement();
void subprogram_call(), destination(), argument_list();
void return_statement(), case_clasule(), argument_list(), destination(); 
void term_or(), term_or_tail(), term_and(), term_and_tail(), term_comparison(), term_and_tail(), term_comparison_tail();
void incr_decr(), incr_decr_tail(), term_and(), term_and_tail(), term_comparison(), term_and_tail(), term_comparison_tail();


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
 *    [ ‘variables’ ‘:’ ( <variable_declaration> ‘;’)+ ]
 *    [ ‘subprograms’ ‘:’ ( <subprogram_declaration> )+ ]
 */
 if (lookahead == VARIABLES_SECTION) {
    eat(VARIABLES_SECTION); eat(COLON); 

    while (lookahead != SUBPROGRAMS_SECTION) {
      variable_declaration();  eat(SEMICOLON);
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
 *    [ ‘const’ | ‘ref’ ] <type> <id> [ ‘=’ <expression> ] 
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

}

void compost_variable_declaration()
{
/*
 * <compost_variable_declaration> ::=
 *      ‘matrix_of’ <type> ‘[’ <dimensions> ‘]’ <identifier> 
 *            [ ‘=’ ‘{’ <values> ‘}’ { ‘,’ ‘{’ <values> ‘}’ } ] |
 *
 *      ‘set_of’ <type> <identifier> [ ‘=’ ‘{’ ‘}’ ] |
 * 
 *      ‘enum’ <identifier> ‘:’ ( <identifier> [ ‘=’ <value> ] ‘,’ )+ ‘end_enum’ |
 *
 *      ‘struct’ <identifier> ‘:’ ( <simple_variable_declaration> )+ ‘end_struct’
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
        return;
    }

}

void subprogram_declaration()
{
/* 
 *	<subprogram_declaration> ::=	
 *		( <procedure_declaration> | <function_declaration> )" 
 */
		
	if (lookahead == PROCEDURE) {
		procedure_declaration();
        return;
	} 

	if (lookahead == FUNCTION) {
		function_declaration();
        return;
	}
}

void procedure_declaration()
{
/* 
 *	<procedure_declaration> ::=	
 *		<procedure_header> <procedure_body>
 */

	procedure_header(); procedure_body();
}

void function_declaration()
{
/* 
 * <function_declaration> ::=	
 * 		<function_header> <function_body>
 */
		
	function_header(); function_body();

}

void procedure_header()
{
/* 
 *	<procedure_header> ::=	
 *		‘procedure’ <identifier> ‘(’[ <parameter_list> ]‘)’ ‘:’ 	
 */

	eat(PROCEDURE);
	identifier();
	eat(OPEN_PARENTHESIS);
	
	parameter_list();
	
	eat(CLOSE_PARENTHESIS);
	eat(COLON);
	
}

void function_header()
{
/*  
 * <function_header> 	::=	
 *      ‘function’ <type> <identifier> ‘(’[ <parameter_list> ]‘)’ ‘:’  
 */
		
	eat(FUNCTION);
	type();
	identifier();
	eat(OPEN_PARENTHESIS);
	
	parameter_list();
	
	eat(CLOSE_PARENTHESIS);
	eat(COLON);
}

void procedure_body()
{
/*
 *	<procedure_body> ::=
 *		{ { <variable_declaration> } | { <statement> } } 
 *		‘end_procedure’ <identifier> ‘;’
 */
	
	while (lookahead != END_PROCEDURE) {	
        //XXX: Não tenho certeza se está correto
		variable_declaration();
		statement();
	}
	
	eat(END_PROCEDURE);
	identifier();
	eat(SEMICOLON);
}

void function_body()
{
/* 
 *	<function_body> ::=
 *		{ { <variable_declaration> } | { <statement> } } 
 *		<return_statement>
 *		‘end_function’ <identifier> ‘;’
 */
	
	while (lookahead != END_FUNCTION) {
        //XXX: Não tenho certeza se está correto
    	variable_declaration();
    	statement();
	}

	eat(END_FUNCTION);
	identifier();
	eat(SEMICOLON);
}


void identifier() {
  char* id_lexeme = yytext;
  eat(ID);
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

void parameter_list() 
{
/*
 * <parameter_list> ::=    
 *      <variable_declaration> { ',' <parameter_list> } |
 *      <variable_declaration>
 */
    if (lookahead == CONST || 
        lookahead == REF ||
        lookahead == INT || 
        lookahead == DOUBLE || 
        lookahead == REAL ||
        lookahead == STRING || 
        lookahead == COMPLEX ||
        lookahead == MATRIX_OF || 
        lookahead == SET_OF ||
        lookahead == ENUM || 
        lookahead == STRUCT ) {
        variable_declaration(); 
            if (lookahead == COMMA) {
                eat(COMMA); parameter_list();
            }
    } else {
        variable_declaration();
    }
}

void statement () 
{
/*
 * <statement> ::=
 *      <assignment_statement> |
 *      <if_statement> |
 *      <switch_statement> |
 *      <while_statement> |  
 *      <for_statement> |   
 *      <return_statement> | 
 *      <subprogram_call>
 */

    if (lookahead == IF) {
        if_statement(); return;
    }

    if (lookahead == SWITCH) {
        switch_statement(); return;
    }

    if (lookahead == WHILE) {
        while_statement(); return;
    }

    if (lookahead == FOR) {
        for_statement(); return;
    }

    if (lookahead == RETURN) {
        return_statement(); return;
    }

    if (lookahead == PROCEDURE || lookahead == FUNCTION) {
        subprogram_call(); return;
    }

    assignment_statement();

} 


void return_statement () 
{
/*
 * <return_statement> ::=    
 *      ‘return’ <expression> ‘;’
 *
 */

    eat(RETURN); expression(); eat(SEMICOLON);

}

void assignment_statement () 
{
/*
 * <assignment_statement> ::=    
 *      <destination> '=' <expression>
 */
  
    destination(); eat(ASSIGN_OP); expression();

}

void if_statement() 
{
/*
 * <if_statement> ::=    
 *     'if' '(' <expression> ')' ':' ( <statement> )+    
 *    [ 'else' ( <statement> )+ ]
 *    'end_if' ‘;’
 */

    eat(IF); eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS); eat(COLON);
    while (lookahead != ELSE) {
        statement();
    }

    if(lookahead == ELSE) {
        while (lookahead != END_IF) {
            statement();
        }
    }

    eat(END_IF); eat(SEMICOLON);

}

void switch_statement () 
{
/*
 * <switch_statement> ::= 
 *      ‘switch’ ‘(’ <identifier> ‘)’ ‘:’
 *          (<case_clasule>)+
 *          ['other' ':' <statement> ]
 *      'end_switch'';'
 */

    eat(SWITCH); eat(OPEN_PARENTHESIS); identifier(); eat(CLOSE_PARENTHESIS); eat(COLON);

    while (lookahead != OTHER | lookahead != END_SWITCH) {
        case_clasule();
    }

    if (lookahead == OTHER) {
        eat(OTHER); eat(COLON); statement(); 
    }

    eat(END_SWITCH);

}

void case_clasule () 
{
/*
 * <case_clasule> ::=  
 * ‘case’ ‘(’ <expression> ‘)’ ‘:’
 * <statement>
 * ‘break’ ‘;’
 */

  eat(CASE); eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS); eat(COLON);
  statement();
  eat(BREAK); eat(SEMICOLON);

}

void while_statement () 
{
/*
 * <while_statement> ::=
 *      'while' (<expression>)
 *              <statement>
 *      'end_while'';'
 */

  eat(WHILE); eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS);
  statement();
  eat(END_WHILE);

}

void for_statement () 
{
/*
 * <for_statement> ::=
 *      'for' <identifier> 'in' <identifier>:
 *              (<statement>)+
 *      ‘end_for’ ‘;’
*/

  eat(FOR); identifier(); eat(IN); identifier();

  while (lookahead != END_FOR) {
    statement();
  }

  eat(END_FOR); eat(SEMICOLON);

}

void argument_list() {

}

void subprogram_call () 
{
/*
 * <subprogram_call> ::=    
 *      <identifier> '(' [ <argument_list> ] ')'
*/
  
  identifier(); eat(OPEN_PARENTHESIS); 

  if (lookahead != CLOSE_PARENTHESIS)
  {
    argument_list();
  }

  eat(CLOSE_PARENTHESIS);

}

void destination () 
{
/*
 * <destination> ::= 
 *      <identifier> [ ‘[’ <expression> ‘]’ ]
 */

  identifier();

  if (lookahead == OPEN_BRACKETS)
  {
    eat(OPEN_BRACKETS); expression(); eat(CLOSE_BRACKETS);
  }

}

void list ()
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
 *  <expr>    ::=   <term_or> <term_or_tail>
 */

  term_or(); term_or_tail();

}


void term_or_tail()
{
/*
 * <term_or_tail> ::= 
 *      ‘||’ <term_or> <term_or_tail> |
 */

    if (lookahead == OR_OP) {
        eat(OR_OP); term_and(); term_and_tail();      
    } else {
        // Empty
    }

}

void term_or()
{
/*
 * <term_or>:= 
 *    <term_and><term_and_tail>
 */

  term_and(); term_and_tail();

}

void term_and_tail()
{
/*
 * <term_and_tail> ::= 
 * ‘&&’ <term_and> <term_and_tail> |
 */

    if (lookahead == AND_OP) {
        eat(AND_OP); term_and(); term_and_tail();      
    } else {
        // Empty
    }
  

}


void term_and()
{
/*
 * <term_and> ::=
 *    <term_comparison> <term_comparison_tail>
 */

  term_comparison(); term_comparison_tail();

}


void  term_comparison_tail()
{
/*
* <term_comparison_tail>::=
 *    ‘<>’ <term_comparison> <term_comparison_tail> |
 *    ‘<=’ <term_comparison> <term_comparison_tail> |
 *    ‘>=’ <term_comparison> <term_comparison_tail> |
 *    ‘<’ <term_comparison> <term_comparison_tail> |
 *    ‘>’ <term_comparison> <term_comparison_tail> |
 */

    if (lookahead == NEQ_OP) {
        eat(NEQ_OP); term_comparison(); term_comparison_tail();
        return;      
    }

    if (lookahead == LEQ_OP) {
        eat(LEQ_OP); term_comparison(); term_comparison_tail();
        return;      
    }

    if (lookahead == BEQ_OP) {
        eat(BEQ_OP); term_comparison(); term_comparison_tail();
        return;      
    }

    if (lookahead == LT_OP) {
        eat(LT_OP); term_comparison(); term_comparison_tail();
        return;      
    }

    if (lookahead == BT_OP) {
        eat(BT_OP); term_comparison(); term_comparison_tail();
        return;      
    }

}

 
void term_comparison()
{
/*
 * 
 *<term_comparison> :=
 *      <term> <term_tail>
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
 *  <factor>    ::=   <incr_decr> <expo_tail>
 */

  incr_decr(); expo_tail();

}

void expo_tail()
{
/*
 * <expo_tail>   ::=   ^ <incr_decr> <expo_tail> |
 */

 if (lookahead == EXPO_OP) {
    eat(EXPO_OP); incr_decr();  expo_tail();
  }
  else {
    /* Empty */
  }

}


void expo() 
{
/*
 * <expo>  ::= 
 *     <incr_decr> <incr_decr_tail> |
 */
 
    incr_decr(); incr_decr_tail();
}


void incr_decr_tail()
{
/*
 * <incr_decr_tail> := 
 *     ‘++’<incr_decr><incr_decr_tail>|
 *     ‘--’<incr_decr><incr_decr_tail>|
 */

    if (lookahead == INCREMENT_OP ) {
        eat(INCREMENT_OP); incr_decr(); incr_decr_tail();
        return;
    }

    if (lookahead == DECREMENT_OP ) {
        eat(DECREMENT_OP); incr_decr(); incr_decr_tail();
        return;
    }
  
}


void incr_decr()
{
/*
 * <incr_decr>    ::=    
 *       <id> | <lit> | (<expr>)
 */

    if (lookahead == OPEN_PARENTHESIS) {
        eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS);
    }
    else if (lookahead == ID ) {
        char* id_lexeme = yytext;
        eat(ID);
    }
    else if (lookahead == INT_NUMBER) {
        char* INT_NUMBER_value = yytext;
        eat(INT_NUMBER);
    }
    else if (lookahead == REAL_NUMBER) {
        char* REAL_NUMBER_value = yytext;
        eat(REAL_NUMBER);
    }
    else if (lookahead == COMPLEX_NUMBER) {
        char* COMPLEX_NUMBER_value = yytext;
        eat(COMPLEX_NUMBER);
    }
    else
        error("syntax error in factor");
}


void values() {

}

void eat(int t)
{

  emit(t, yytext);
  if (lookahead == t)
    lookahead = yylex();
  else {
    printf("\n---------------------\n");
    printf("RECEBIDO: %d  ESPERADO: %d\n", lookahead, t);
    error ("syntax error in match");
  }
}
