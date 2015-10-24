
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     IDENTIFIER = 259,
     STRING = 260,
     NUMBER = 261,
     COMPLEX_NUMBER = 262,
     INT_NUMBER = 263,
     REAL_NUMBER = 264,
     IMPORT = 265,
     VARIABLES_SECTION = 266,
     SUBPROGRAMS_SECTION = 267,
     PROCEDURE = 268,
     FUNCTION = 269,
     END_PROCEDURE = 270,
     END_FUNCTION = 271,
     RETURN = 272,
     INT = 273,
     REAL = 274,
     COMPLEX = 275,
     STRING_TYPE = 276,
     DOUBLE = 277,
     BOOLEAN = 278,
     ENUM = 279,
     STRUCT = 280,
     SET_OF = 281,
     MATRIX_OF = 282,
     END_STRUCT = 283,
     END_ENUM = 284,
     CONST = 285,
     REF = 286,
     IF = 287,
     ELSE = 288,
     FOR = 289,
     IN = 290,
     WHILE = 291,
     SWITCH = 292,
     CASE = 293,
     BREAK = 294,
     OTHER = 295,
     END_IF = 296,
     END_FOR = 297,
     END_WHILE = 298,
     END_SWITCH = 299,
     SEMICOLON = 300,
     COMMA = 301,
     COLON = 302,
     OPEN_PARENTHESIS = 303,
     CLOSE_PARENTHESIS = 304,
     OPEN_BRACKETS = 305,
     CLOSE_BRACKETS = 306,
     OPEN_BRACES = 307,
     CLOSE_BRACES = 308,
     RANGE = 309,
     ASSIGN_OP = 310,
     ADD_ASSIGN_OP = 311,
     SUB_ASSIGN_OP = 312,
     MULT_ASSIGN_OP = 313,
     DIV_ASSIGN_OP = 314,
     MOD_ASSIGN_OP = 315,
     INCREMENT_OP = 316,
     DECREMENT_OP = 317,
     NEG_OP = 318,
     AND_OP = 319,
     OR_OP = 320,
     LEQ_OP = 321,
     BEQ_OP = 322,
     EQ_OP = 323,
     NEQ_OP = 324,
     SUB_OP = 325,
     ADD_OP = 326,
     MULT_OP = 327,
     DIV_OP = 328,
     MOD_OP = 329,
     LT_OP = 330,
     BT_OP = 331,
     EXPO_OP = 332,
     DOT_OP = 333,
     COMMENT = 334
   };
#endif
/* Tokens.  */
#define NAME 258
#define IDENTIFIER 259
#define STRING 260
#define NUMBER 261
#define COMPLEX_NUMBER 262
#define INT_NUMBER 263
#define REAL_NUMBER 264
#define IMPORT 265
#define VARIABLES_SECTION 266
#define SUBPROGRAMS_SECTION 267
#define PROCEDURE 268
#define FUNCTION 269
#define END_PROCEDURE 270
#define END_FUNCTION 271
#define RETURN 272
#define INT 273
#define REAL 274
#define COMPLEX 275
#define STRING_TYPE 276
#define DOUBLE 277
#define BOOLEAN 278
#define ENUM 279
#define STRUCT 280
#define SET_OF 281
#define MATRIX_OF 282
#define END_STRUCT 283
#define END_ENUM 284
#define CONST 285
#define REF 286
#define IF 287
#define ELSE 288
#define FOR 289
#define IN 290
#define WHILE 291
#define SWITCH 292
#define CASE 293
#define BREAK 294
#define OTHER 295
#define END_IF 296
#define END_FOR 297
#define END_WHILE 298
#define END_SWITCH 299
#define SEMICOLON 300
#define COMMA 301
#define COLON 302
#define OPEN_PARENTHESIS 303
#define CLOSE_PARENTHESIS 304
#define OPEN_BRACKETS 305
#define CLOSE_BRACKETS 306
#define OPEN_BRACES 307
#define CLOSE_BRACES 308
#define RANGE 309
#define ASSIGN_OP 310
#define ADD_ASSIGN_OP 311
#define SUB_ASSIGN_OP 312
#define MULT_ASSIGN_OP 313
#define DIV_ASSIGN_OP 314
#define MOD_ASSIGN_OP 315
#define INCREMENT_OP 316
#define DECREMENT_OP 317
#define NEG_OP 318
#define AND_OP 319
#define OR_OP 320
#define LEQ_OP 321
#define BEQ_OP 322
#define EQ_OP 323
#define NEQ_OP 324
#define SUB_OP 325
#define ADD_OP 326
#define MULT_OP 327
#define DIV_OP 328
#define MOD_OP 329
#define LT_OP 330
#define BT_OP 331
#define EXPO_OP 332
#define DOT_OP 333
#define COMMENT 334




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "format.y"

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//



/* Line 1676 of yacc.c  */
#line 218 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


