/* global.h */

#include <stdio.h>  /* include declarations for i/o routines */
#include <ctype.h>  /* ... and for character test routines */
#include <stdlib.h> /* ... and for some standard routines, such as exit */
#include <string.h> /* ... and for string routines */

#define BSIZE  128  /* buffer size */
#define NONE   -1
#define EOS    '\0'

/* Tokens.  */
#define INT 258
#define REAL 259
#define COMPLEX 260
//#define SINGLE_REAL 261
#define DOUBLE 262
#define STRING 263
#define ENUM 264
#define STRUCT 265
#define SET_OF 266
#define MATRIX_OF 267
#define END_STRUCT 268
#define END_ENUM 269
#define CONST 270
#define REF 271
#define IF 272
#define ELSE 273
#define FOR 274
#define WHILE 275
#define SWITCH 276
#define CASE 277
#define BREAK 278
#define OTHER 279
#define END_IF 280
#define END_FOR 281
#define END_WHILE 282
#define END_SWITCH 283
#define FALSE 284
#define TRUE 285
#define PROCEDURE 286
#define END_PROCEDURE 287
#define FUNCTION 288
#define END_FUNCTION 289
#define MODULE 290
#define END_MODULE 291   
#define IMPORT 292
#define RETURN 293

#define DOUBLE_QUOTES 294       // "
#define SEMICOLON 295           // ;
#define COMMA 296               // ,
#define COLON 297               // :
#define OPEN_PARENTHESIS 298    // (
#define CLOSE_PARENTHESIS 299   // )
#define OPEN_BRACKETS 300       // [
#define CLOSE_BRACKETS 301      // ]
#define OPEN_BRACES 302       	// {
#define CLOSE_BRACES 303      	// }
#define RANGE 304               // ..

#define ADD_ASSIGN_OP 305
#define SUB_ASSIGN_OP 306
#define MULT_ASSIGN_OP 307
#define DIV_ASSIGN_OP 308
#define MOD_ASSIGN_OP 309
#define INCREMENT_OP 310
#define DECREMENT_OP 311
#define AND_OP 312
#define OR_OP 313
#define ASSIGN_OP 314
#define LEQ_OP 315
#define BEQ_OP 316
#define EQ_OP 317
#define NEQ_OP 318
#define SUB_OP 319
#define ADD_OP 320
#define MULT_OP 321
#define DIV_OP 322
#define MOD_OP 323
#define LT_OP 324
#define BT_OP 325
#define EXPO_OP 326
#define DOT_OP 327   
#define ID 328 
#define INT_NUMBER 329
#define COMPLEX_NUMBER 330
#define REAL_NUMBER 331

#define VARIABLES_SECTION 332
#define SUBPROGRAMS_SECTION 333
#define COMMENT 334

extern int yylineno;
extern char *yytext;
extern FILE *yyin;

extern void error(char* m);  /*  generates all error messages  */
extern int yylex();  /*  lexical analyzer  */
extern void parse();  /*  parses and translates expression list  */
extern void emit (int t, char* tval);  /*  generates output  */
