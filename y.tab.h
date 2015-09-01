/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     PAREN_ID = 259,
     BRACKET_ID = 260
   };
#endif
/* Tokens.  */
#define INT 258 
#define REAL 259
#define COMPLEX 260
#define SINGLE_REAL 261
#define DOUBLE_REAL 262
#define STRING 263
#define ENUM 264
#define STRUCT 265
#define SET_OF 266
#define MATRIX_OF 266
#define END_STRUCT 267
#define CONST 268
#define REF 269
#define IF 270
#define ELSE 271
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


#define SEMICOLON 292           // ;
#define COMMA 293               // ,
#define COLON 294               // :
#define OPEN_PARENTHESES 295     // (
#define CLOSE_PARENTHESES 296    // )
#define OPEN_BRACKETS 297       // [
#define CLOSE_BRACKETS 298      // ]
#define RANGE 299               // ..

 NEQ GT GTE LT LTE

#define END_WHILE 280           // +=
#define END_SWITCH 281          // -=
#define FALSE 282               // *=
#define TRUE 283                // /=
#define PROCEDURE 284           // %=
#define FUNCTION 285            // ++
#define RETURN 286              // --
#define OP_EQ 280               // ==
#define OP_BOOL_SWITCH 281          // ||
#define OP_BOOL_ITCH 281          // ||
#define OP_BOOL_SWITCH 281          // ||
#define FALSE 282               // <-
#define DEC_OP_LTE 283          // <=
#define DEC_OP_GTE 284          // >=
#define DEC_OP_NEQ 285          // <>
#define RETURN 286              // -
#define END_WHILE 280           // +
#define END_SWITCH 281          // *
#define FALSE 282               // /
#define TRUE 283                // %
#define DEC_OP_LT 284           // <
#define DEC_OP_GT 285           // >
#define RETURN 286              // ^
#define END_WHILE 280           // .



#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 58 "sketch.y"
typedef union YYSTYPE {
  char *str;
  FLOAT flt;
  POINT_3D pt;
  VECTOR_3D vec;
  TRANSFORM xf;
  EXPR_VAL exv;
  SYMBOL_NAME name;
  SYMBOL_NAME_NODE *name_list;
  OBJECT *obj;
  OPTS *opts;
  int bool;
  int index;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 145 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



