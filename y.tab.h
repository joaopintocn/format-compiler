/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    NUMBER = 259,
    IMPORT = 260,
    VARIABLES_SECTION = 261,
    SUBPROGRAMS_SECTION = 262,
    PROCEDURE = 263,
    FUNCTION = 264,
    END_PROCEDURE = 265,
    END_FUNCTION = 266,
    RETURN = 267,
    INT = 268,
    REAL = 269,
    COMPLEX = 270,
    STRING = 271,
    DOUBLE = 272,
    BOOLEAN = 273,
    ENUM = 274,
    STRUCT = 275,
    SET_OF = 276,
    MATRIX_OF = 277,
    END_STRUCT = 278,
    END_ENUM = 279,
    CONST = 280,
    REF = 281,
    IF = 282,
    ELSE = 283,
    FOR = 284,
    IN = 285,
    WHILE = 286,
    SWITCH = 287,
    CASE = 288,
    BREAK = 289,
    OTHER = 290,
    END_IF = 291,
    END_FOR = 292,
    END_WHILE = 293,
    END_SWITCH = 294,
    SEMICOLON = 295,
    COMMA = 296,
    COLON = 297,
    OPEN_PARENTHESIS = 298,
    CLOSE_PARENTHESIS = 299,
    OPEN_BRACKETS = 300,
    CLOSE_BRACKETS = 301,
    OPEN_BRACES = 302,
    CLOSE_BRACES = 303,
    RANGE = 304,
    ASSIGN_OP = 305,
    ADD_ASSIGN_OP = 306,
    SUB_ASSIGN_OP = 307,
    MULT_ASSIGN_OP = 308,
    DIV_ASSIGN_OP = 309,
    MOD_ASSIGN_OP = 310,
    INCREMENT_OP = 311,
    DECREMENT_OP = 312,
    NEG_OP = 313,
    AND_OP = 314,
    OR_OP = 315,
    LEQ_OP = 316,
    BEQ_OP = 317,
    EQ_OP = 318,
    NEQ_OP = 319,
    SUB_OP = 320,
    ADD_OP = 321,
    MULT_OP = 322,
    DIV_OP = 323,
    MOD_OP = 324,
    LT_OP = 325,
    BT_OP = 326,
    EXPO_OP = 327,
    DOT_OP = 328
  };
#endif
/* Tokens.  */
#define NAME 258
#define NUMBER 259
#define IMPORT 260
#define VARIABLES_SECTION 261
#define SUBPROGRAMS_SECTION 262
#define PROCEDURE 263
#define FUNCTION 264
#define END_PROCEDURE 265
#define END_FUNCTION 266
#define RETURN 267
#define INT 268
#define REAL 269
#define COMPLEX 270
#define STRING 271
#define DOUBLE 272
#define BOOLEAN 273
#define ENUM 274
#define STRUCT 275
#define SET_OF 276
#define MATRIX_OF 277
#define END_STRUCT 278
#define END_ENUM 279
#define CONST 280
#define REF 281
#define IF 282
#define ELSE 283
#define FOR 284
#define IN 285
#define WHILE 286
#define SWITCH 287
#define CASE 288
#define BREAK 289
#define OTHER 290
#define END_IF 291
#define END_FOR 292
#define END_WHILE 293
#define END_SWITCH 294
#define SEMICOLON 295
#define COMMA 296
#define COLON 297
#define OPEN_PARENTHESIS 298
#define CLOSE_PARENTHESIS 299
#define OPEN_BRACKETS 300
#define CLOSE_BRACKETS 301
#define OPEN_BRACES 302
#define CLOSE_BRACES 303
#define RANGE 304
#define ASSIGN_OP 305
#define ADD_ASSIGN_OP 306
#define SUB_ASSIGN_OP 307
#define MULT_ASSIGN_OP 308
#define DIV_ASSIGN_OP 309
#define MOD_ASSIGN_OP 310
#define INCREMENT_OP 311
#define DECREMENT_OP 312
#define NEG_OP 313
#define AND_OP 314
#define OR_OP 315
#define LEQ_OP 316
#define BEQ_OP 317
#define EQ_OP 318
#define NEQ_OP 319
#define SUB_OP 320
#define ADD_OP 321
#define MULT_OP 322
#define DIV_OP 323
#define MOD_OP 324
#define LT_OP 325
#define BT_OP 326
#define EXPO_OP 327
#define DOT_OP 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "format.y" /* yacc.c:1909  */

	int 	iValue; 	//
	char 	cValue;		//
	char * 	sValue;		//

#line 206 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
