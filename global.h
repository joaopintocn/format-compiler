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
#define END_ENUM 268
#define CONST 269
#define REF 270
#define IF 271
#define ELSE 272
#define FOR 272
#define WHILE 273
#define SWITCH 274
#define CASE 275
#define BREAK 276
#define OTHER 277
#define END_IF 278
#define END_FOR 279
#define END_WHILE 280
#define END_SWITCH 281
#define FALSE 282
#define TRUE 283
#define PROCEDURE 284
#define END_PROCEDURE 285
#define FUNCTION 286
#define END_FUNCTION 287
#define MODULE 288
#define END_MODULE 289   
#define IMPORT 290
#define RETURN 291

#define DOUBLE_QUOTES 299       // "
#define SEMICOLON 292           // ;
#define COMMA 293               // ,
#define COLON 294               // :
#define OPEN_PARENTHESIS 295    // (
#define CLOSE_PARENTHESIS 296   // )
#define OPEN_BRACKETS 297       // [
#define CLOSE_BRACKETS 298      // ]
#define OPEN_BRACES 297       	// {
#define CLOSE_BRACES 298      	// }
#define RANGE 299               // ..

#define ADD_ASSIGN_OP 300
#define SUB_ASSIGN_OP 301
#define MULT_ASSIGN_OP 302
#define DIV_ASSIGN_OP 303
#define MOD_ASSIGN_OP 304
#define INCREMENT_OP 305
#define DECREMENT_OP 306
#define AND_OP 307
#define OR_OP 308
#define ASSIGN_OP 309
#define LEQ_OP 310
#define BEQ_OP 311
#define EQ_OP 312
#define NEQ_OP 313
#define SUB_OP 314
#define ADD_OP 315
#define MULT_OP 316
#define DIV_OP 317
#define MOD_OP 318
#define LT_OP 319
#define BT_OP 320
#define EXPO_OP 321
#define DOT_OP 322   
#define ID 323 
#define INT_NUMBER 324
#define COMPLEX_NUMBER 325
#define REAL_NUMBER 326

#define VARIABLES_SECTION 327
#define SUBPROGRAMS_SECTION 328
#define COMMENT 329

extern int yylineno;
extern char *yytext;
extern FILE *yyin;

extern void error(char* m);  /*  generates all error messages  */
extern int yylex();  /*  lexical analyzer  */
extern void parse();  /*  parses and translates expression list  */
extern void emit (int t, char* tval);  /*  generates output  */
