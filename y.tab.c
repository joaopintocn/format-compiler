/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 2 "format.y"

	#include <stdio.h>

	int yyerror (char *s);

	int yylex();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "format.y"
{
	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//
}
/* Line 193 of yacc.c.  */
#line 269 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 282 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNRULES -- Number of states.  */
#define YYNSTATES  326

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    13,    16,    17,    22,
      23,    24,    29,    31,    33,    35,    36,    37,    42,    43,
      46,    48,    49,    50,    55,    56,    57,    58,    67,    68,
      69,    76,    77,    81,    82,    84,    87,    89,    91,    93,
      95,    96,    97,    98,    99,   111,   112,   113,   120,   121,
     122,   123,   124,   135,   136,   137,   138,   147,   149,   150,
     151,   155,   156,   157,   164,   166,   167,   168,   172,   174,
     175,   176,   177,   184,   187,   188,   192,   193,   194,   195,
     201,   202,   205,   206,   210,   211,   215,   216,   217,   222,
     223,   225,   227,   228,   239,   240,   252,   255,   256,   260,
     261,   264,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   285,   289,   290,   294,   295,   299,   300,   304,   305,
     309,   310,   314,   315,   319,   322,   326,   327,   337,   340,
     341,   351,   361,   362,   366,   367,   376,   385,   390,   392,
     393,   396,   399,   400,   403,   407,   408,   411,   415,   416,
     419,   423,   427,   428,   431,   435,   439,   443,   447,   448,
     451,   455,   459,   460,   463,   467,   471,   475,   476,   479,
     480,   485,   486,   489,   490,   495,   496,   498,   500,   502,
     504
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    82,    84,    -1,    83,    82,    -1,    -1,
      10,     5,    -1,    85,    91,    -1,    -1,    11,    47,    86,
      87,    -1,    -1,    -1,    89,    45,    88,    90,    -1,    95,
      -1,   105,    -1,    87,    -1,    -1,    -1,    12,    92,    47,
      93,    -1,    -1,   145,    94,    -1,    93,    -1,    -1,    -1,
     104,     4,    96,   102,    -1,    -1,    -1,    -1,    30,    97,
     104,     4,    98,    55,    99,   176,    -1,    -1,    -1,    31,
     100,   104,     4,   101,   102,    -1,    -1,    55,   103,   176,
      -1,    -1,    18,    -1,    22,    19,    -1,    19,    -1,    20,
      -1,    23,    -1,     5,    -1,    -1,    -1,    -1,    -1,    27,
     106,   104,    50,   107,   138,    51,   108,     4,   109,   119,
      -1,    -1,    -1,    26,   110,   104,     4,   111,   128,    -1,
      -1,    -1,    -1,    -1,    24,   112,     4,   113,    47,   114,
       4,   115,   135,    29,    -1,    -1,    -1,    -1,    25,   116,
       4,   117,    47,   118,    87,    28,    -1,   120,    -1,    -1,
      -1,    55,   121,   122,    -1,    -1,    -1,    52,   123,   132,
      53,   124,   125,    -1,   126,    -1,    -1,    -1,    46,   127,
     122,    -1,   129,    -1,    -1,    -1,    -1,    55,   130,    52,
     131,   132,    53,    -1,   176,   133,    -1,    -1,    46,   134,
     132,    -1,    -1,    -1,    -1,    46,   136,     4,   137,   135,
      -1,    -1,   139,   143,    -1,    -1,     8,   140,   141,    -1,
      -1,    54,   142,     8,    -1,    -1,    -1,    46,   144,   139,
     143,    -1,    -1,   146,    -1,   148,    -1,    -1,    13,     4,
      48,   150,    49,    47,   147,   152,    15,    45,    -1,    -1,
      14,   104,     4,    48,   150,    49,    47,   149,   152,    16,
      45,    -1,    89,   151,    -1,    -1,    46,    89,   151,    -1,
      -1,   153,   152,    -1,    -1,   155,    -1,   165,    -1,   167,
      -1,   170,    -1,   171,    -1,   172,    -1,   154,    -1,    89,
      -1,    17,   176,    45,    -1,   163,   156,    45,    -1,    -1,
      55,   157,   176,    -1,    -1,    56,   158,   176,    -1,    -1,
      57,   159,   176,    -1,    -1,    58,   160,   176,    -1,    -1,
      59,   161,   176,    -1,    -1,    60,   162,   176,    -1,     4,
     164,    -1,    50,   138,    51,    -1,    -1,    32,    48,   176,
      49,    47,   152,   166,    41,    45,    -1,    33,   152,    -1,
      -1,    37,    48,     4,    49,    47,   168,   169,    44,    45,
      -1,    38,    48,   176,    49,    47,   152,    39,    45,   168,
      -1,    -1,    40,    47,   152,    -1,    -1,    36,    48,   176,
      49,    47,   152,    43,    45,    -1,    34,     4,    35,     4,
      47,   152,    42,    45,    -1,     4,    48,   173,    49,    -1,
     174,    -1,    -1,   176,   175,    -1,    46,   174,    -1,    -1,
     178,   177,    -1,    65,   178,   177,    -1,    -1,   180,   179,
      -1,    64,   180,   179,    -1,    -1,   182,   181,    -1,    68,
     182,   181,    -1,    69,   182,   181,    -1,    -1,   184,   183,
      -1,    66,   184,   183,    -1,    67,   184,   183,    -1,    75,
     184,   183,    -1,    76,   184,   183,    -1,    -1,   186,   185,
      -1,    71,   186,   185,    -1,    70,   186,   185,    -1,    -1,
     188,   187,    -1,    72,   188,   187,    -1,    73,   188,   187,
      -1,    74,   188,   187,    -1,    -1,   191,   189,    -1,    -1,
      77,   190,   191,   189,    -1,    -1,   194,   192,    -1,    -1,
      63,   193,   194,   192,    -1,    -1,     8,    -1,     9,    -1,
       7,    -1,     5,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   110,   111,   115,   119,   123,   123,   125,
     130,   130,   134,   135,   139,   140,   145,   145,   146,   150,
     154,   155,   161,   161,   162,   162,   162,   162,   163,   163,
     163,   167,   167,   168,   172,   173,   174,   175,   176,   177,
     181,   181,   181,   181,   181,   182,   182,   182,   183,   183,
     183,   183,   183,   184,   184,   184,   184,   188,   189,   194,
     194,   199,   199,   199,   203,   204,   209,   209,   214,   215,
     219,   219,   219,   224,   228,   228,   229,   233,   233,   233,
     234,   238,   242,   242,   246,   246,   247,   251,   251,   252,
     256,   257,   261,   261,   267,   267,   274,   275,   279,   280,
     284,   285,   289,   290,   291,   292,   293,   294,   295,   296,
     300,   304,   308,   308,   309,   309,   310,   310,   311,   311,
     312,   312,   313,   313,   317,   322,   323,   327,   334,   335,
     339,   346,   350,   354,   355,   359,   365,   371,   375,   376,
     380,   384,   385,   389,   393,   394,   398,   402,   403,   407,
     411,   412,   413,   417,   421,   422,   423,   424,   425,   429,
     433,   434,   435,   439,   443,   444,   445,   446,   450,   454,
     454,   455,   459,   463,   463,   464,   468,   469,   470,   471,
     472
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "IDENTIFIER", "STRING", "NUMBER",
  "COMPLEX_NUMBER", "INT_NUMBER", "REAL_NUMBER", "IMPORT",
  "VARIABLES_SECTION", "SUBPROGRAMS_SECTION", "PROCEDURE", "FUNCTION",
  "END_PROCEDURE", "END_FUNCTION", "RETURN", "INT", "REAL", "COMPLEX",
  "STRING_TYPE", "DOUBLE", "BOOLEAN", "ENUM", "STRUCT", "SET_OF",
  "MATRIX_OF", "END_STRUCT", "END_ENUM", "CONST", "REF", "IF", "ELSE",
  "FOR", "IN", "WHILE", "SWITCH", "CASE", "BREAK", "OTHER", "END_IF",
  "END_FOR", "END_WHILE", "END_SWITCH", "SEMICOLON", "COMMA", "COLON",
  "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", "OPEN_BRACKETS",
  "CLOSE_BRACKETS", "OPEN_BRACES", "CLOSE_BRACES", "RANGE", "ASSIGN_OP",
  "ADD_ASSIGN_OP", "SUB_ASSIGN_OP", "MULT_ASSIGN_OP", "DIV_ASSIGN_OP",
  "MOD_ASSIGN_OP", "INCREMENT_OP", "DECREMENT_OP", "NEG_OP", "AND_OP",
  "OR_OP", "LEQ_OP", "BEQ_OP", "EQ_OP", "NEQ_OP", "SUB_OP", "ADD_OP",
  "MULT_OP", "DIV_OP", "MOD_OP", "LT_OP", "BT_OP", "EXPO_OP", "DOT_OP",
  "COMMENT", "$accept", "program", "program_header", "import",
  "program_body", "variable_section", "@1", "variable_declarations", "@2",
  "variable_declaration", "variable_declarations_tail",
  "subprogram_section", "@3", "subprogram_declarations",
  "subprogram_declarations_tail", "simple_variable_declaration", "@4",
  "@5", "@6", "@7", "@8", "@9", "simple_variable_declaration_value", "@10",
  "type", "compost_variable_declaration", "@11", "@12", "@13", "@14",
  "@15", "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23",
  "matrix_assignment", "matrix_assignment_aux", "@24",
  "matrix_assignment_aux_aux", "@25", "@26", "values_group_list",
  "values_group_list_aux", "@27", "set_assignment", "set_assignment_aux",
  "@28", "@29", "set_assignment_aux_aux", "values_list", "@30",
  "identifier_list", "@31", "@32", "dimensions", "range", "@33",
  "range_tail", "@34", "dimensions_tail", "@35", "subprogram_declaration",
  "procedure_declaration", "@36", "function_declaration", "@37",
  "parameter_list", "parameter_list_tail", "statement_list", "statement",
  "return_statement", "assignment_statement", "assignment_statement_tail",
  "@38", "@39", "@40", "@41", "@42", "@43", "destination",
  "identifier_tail", "if_statement", "else_clausule", "switch_statement",
  "case_clasule", "other_clasule", "while_statement", "for_statement",
  "subprogram_call", "argument_list", "argument_list_aux",
  "argument_list_tail", "expression", "term_or_tail", "term_or",
  "term_and_tail", "term_and", "term_bool_comparison_tail",
  "term_bool_comparison", "term_arit_comparison_tail",
  "term_arit_comparison", "term_tail", "term", "factor_tail", "factor",
  "expo_tail", "@44", "expo", "negation_tail", "@45", "negation", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    83,    84,    86,    85,    85,
      88,    87,    89,    89,    90,    90,    92,    91,    91,    93,
      94,    94,    96,    95,    97,    98,    99,    95,   100,   101,
      95,   103,   102,   102,   104,   104,   104,   104,   104,   104,
     106,   107,   108,   109,   105,   110,   111,   105,   112,   113,
     114,   115,   105,   116,   117,   118,   105,   119,   119,   121,
     120,   123,   124,   122,   125,   125,   127,   126,   128,   128,
     130,   131,   129,   132,   134,   133,   133,   136,   137,   135,
     135,   138,   140,   139,   142,   141,   141,   144,   143,   143,
     145,   145,   147,   146,   149,   148,   150,   150,   151,   151,
     152,   152,   153,   153,   153,   153,   153,   153,   153,   153,
     154,   155,   157,   156,   158,   156,   159,   156,   160,   156,
     161,   156,   162,   156,   163,   164,   164,   165,   166,   166,
     167,   168,   168,   169,   169,   170,   171,   172,   173,   173,
     174,   175,   175,   176,   177,   177,   178,   179,   179,   180,
     181,   181,   181,   182,   183,   183,   183,   183,   183,   184,
     185,   185,   185,   186,   187,   187,   187,   187,   188,   190,
     189,   189,   191,   193,   192,   192,   194,   194,   194,   194,
     194
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     2,     0,     4,     0,
       0,     4,     1,     1,     1,     0,     0,     4,     0,     2,
       1,     0,     0,     4,     0,     0,     0,     8,     0,     0,
       6,     0,     3,     0,     1,     2,     1,     1,     1,     1,
       0,     0,     0,     0,    11,     0,     0,     6,     0,     0,
       0,     0,    10,     0,     0,     0,     8,     1,     0,     0,
       3,     0,     0,     6,     1,     0,     0,     3,     1,     0,
       0,     0,     6,     2,     0,     3,     0,     0,     0,     5,
       0,     2,     0,     3,     0,     3,     0,     0,     4,     0,
       1,     1,     0,    10,     0,    11,     2,     0,     3,     0,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     2,     3,     0,     9,     2,     0,
       9,     9,     0,     3,     0,     8,     8,     4,     1,     0,
       2,     2,     0,     2,     3,     0,     2,     3,     0,     2,
       3,     3,     0,     2,     3,     3,     3,     3,     0,     2,
       3,     3,     0,     2,     3,     3,     3,     0,     2,     0,
       4,     0,     2,     0,     4,     0,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     4,     5,     1,     0,     2,    18,
       3,     7,    16,     6,     0,     0,    39,    34,    36,    37,
       0,    38,    48,    53,    45,    40,    24,    28,     8,     0,
      12,     0,    13,     0,    35,     0,     0,     0,     0,     0,
       0,    10,    22,     0,     0,    17,    21,    90,    91,    49,
      54,     0,     0,     0,     0,    15,    33,     0,     0,    20,
      19,     0,     0,    46,    41,    25,    29,    14,    11,    31,
      23,    97,     0,    50,    55,    69,     0,     0,    33,     0,
      99,     0,    97,     0,     0,    70,    47,    68,    82,     0,
      89,    26,    30,   180,   179,   178,   176,   177,    32,   145,
     148,   152,   158,   162,   167,   171,   175,     0,    96,     0,
       0,    51,     0,     0,    86,    42,    87,    81,     0,     0,
     143,     0,   146,     0,     0,   149,     0,     0,     0,     0,
     153,     0,     0,   159,     0,     0,     0,   163,   169,   168,
     173,   172,    99,    92,     0,    80,    56,    71,    84,    83,
       0,     0,    27,   145,   148,   152,   152,   158,   158,   158,
     158,   162,   162,   167,   167,   167,     0,     0,    98,   101,
      94,    77,     0,     0,     0,    43,    89,   144,   147,   150,
     151,   154,   155,   156,   157,   161,   160,   164,   165,   166,
     171,   175,   126,     0,     0,     0,     0,     0,   109,     0,
     101,   108,   102,     0,   103,   104,   105,   106,   107,   101,
       0,    52,     0,    76,    85,    58,    88,   170,   174,   139,
       0,   124,     0,     0,     0,     0,     0,     0,   100,   112,
     114,   116,   118,   120,   122,     0,     0,    78,    72,    74,
      73,    59,    44,    57,     0,   138,   142,     0,   110,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
     111,     0,    80,     0,     0,   137,     0,   140,   125,     0,
       0,     0,     0,   113,   115,   117,   119,   121,   123,    95,
      79,    75,    61,    60,   141,   101,   101,   101,   132,     0,
     129,     0,     0,     0,   134,     0,   101,     0,     0,     0,
       0,     0,     0,    62,   128,     0,   136,   135,     0,   101,
       0,    65,   127,     0,   133,   130,    66,    63,    64,   101,
       0,     0,    67,     0,   132,   131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    14,    28,    55,   198,
      68,    13,    15,    45,    60,    30,    56,    39,    77,   118,
      40,    78,    70,    79,    31,    32,    38,    76,   150,   215,
      37,    75,    35,    61,    83,   145,    36,    62,    84,   242,
     243,   264,   283,   289,   311,   317,   318,   320,    86,    87,
     113,   173,   212,   240,   263,   172,   210,   262,    89,    90,
     114,   149,   174,   117,   151,    46,    47,   169,    48,   209,
      81,   108,   199,   200,   201,   202,   235,   254,   255,   256,
     257,   258,   259,   203,   221,   204,   297,   205,   294,   302,
     206,   207,   208,   244,   245,   267,   213,   120,    99,   122,
     100,   125,   101,   130,   102,   133,   103,   137,   104,   139,
     166,   105,   141,   167,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -258
static const yytype_int16 yypact[] =
{
      -3,    15,    28,    40,    -3,  -258,  -258,    19,  -258,    50,
    -258,  -258,  -258,  -258,    22,    24,  -258,  -258,  -258,  -258,
      62,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,    51,
    -258,    65,  -258,     1,  -258,   115,   117,    45,    45,    45,
      45,  -258,  -258,   118,    45,  -258,     1,  -258,  -258,  -258,
    -258,   119,    74,   121,   122,    22,    72,    80,   125,  -258,
    -258,    83,    84,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,    22,    85,  -258,  -258,    77,   126,    81,    72,     4,
      89,    88,    22,   134,    22,  -258,  -258,  -258,  -258,    90,
      93,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,    78,
      86,   -31,     7,    14,    30,    68,    79,    22,  -258,   100,
      99,  -258,   123,    97,    98,  -258,  -258,  -258,     4,     4,
    -258,     4,  -258,     4,     4,  -258,     4,     4,     4,     4,
    -258,     4,     4,  -258,     4,     4,     4,  -258,  -258,  -258,
    -258,  -258,    89,  -258,   106,   108,  -258,  -258,  -258,  -258,
     151,   126,  -258,    78,    86,   -31,   -31,     7,     7,     7,
       7,    14,    14,    30,    30,    30,     4,     4,  -258,    -1,
    -258,  -258,   127,     4,   149,  -258,    93,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
      68,    79,    10,     4,   110,   155,   112,   113,  -258,   147,
      -1,  -258,  -258,    20,  -258,  -258,  -258,  -258,  -258,    -1,
     159,  -258,   111,   120,  -258,   114,  -258,  -258,  -258,     4,
     126,  -258,   128,     4,   130,     4,   163,   129,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,   136,   152,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,   133,  -258,   124,   132,  -258,   135,
     167,   137,   139,  -258,     4,     4,     4,     4,     4,     4,
    -258,   140,   108,     4,   138,  -258,     4,  -258,  -258,   142,
     144,   145,   146,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,    -1,    -1,    -1,   156,     4,
     162,   154,   157,   150,   161,   153,    -1,   131,   158,   160,
       4,   164,   165,  -258,  -258,   168,  -258,  -258,   148,    -1,
     169,   166,  -258,   170,  -258,  -258,  -258,  -258,  -258,    -1,
     138,   171,  -258,   173,   156,  -258
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,   195,  -258,  -258,  -258,  -258,   -50,  -258,   -12,
    -258,  -258,  -258,   174,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,   141,  -258,    17,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -118,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -257,  -258,  -258,   -55,  -258,  -258,   -16,    57,
    -258,  -258,  -258,    39,  -258,  -258,  -258,  -258,  -258,  -258,
     143,    82,  -199,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -108,  -258,
    -258,  -258,  -258,  -258,   -44,  -258,   -79,    70,   107,    73,
     109,   -62,   -15,   -68,   -28,   -46,   -14,   -58,   -23,    38,
    -258,    63,    41,  -258,    64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      98,   228,    29,   192,    16,    67,   281,     1,    93,    94,
     236,    95,    96,    97,    43,    44,   193,    17,    18,    19,
       5,    20,    21,    22,    23,    24,    25,    16,     6,    26,
      27,   194,   295,   195,   112,   196,   197,   123,   124,   152,
      17,    18,    19,    29,    20,    21,    22,    23,    24,    25,
      16,     7,    26,    27,    51,    52,    53,    54,   219,    80,
     220,    58,    12,    17,    18,    19,    11,    20,    21,    42,
      80,    33,    29,   126,   127,   229,   230,   231,   232,   233,
     234,    34,   128,   129,   131,   132,   290,   291,   292,   181,
     182,   183,   184,   179,   180,   142,    41,   304,   157,   158,
     159,   160,   134,   135,   136,   187,   188,   189,   155,   156,
     314,   163,   164,   165,   222,   185,   186,   161,   162,    49,
     321,    50,    57,    63,    64,    65,    66,    69,    71,    72,
      73,    74,    85,    82,    88,   107,    91,   109,   111,   116,
     246,   115,   140,   119,   249,   138,   251,   143,   144,   147,
     121,   146,   148,   170,   171,   175,   211,   214,   223,   224,
     225,   226,   227,   237,   238,   250,   239,   252,   261,   241,
     266,   270,   305,   248,   253,   273,   274,   275,   276,   277,
     278,   260,   265,   268,   269,   279,   271,   246,   272,   285,
     282,   286,   287,   288,   293,   296,   298,   313,   300,    10,
     299,   301,   322,   306,   247,   307,   303,   280,   176,   310,
     323,   309,   316,   312,   315,   216,   325,   319,   324,    92,
      59,   308,   284,   177,   168,   110,   153,   178,   217,   190,
     154,   191,   218
};

static const yytype_uint16 yycheck[] =
{
      79,   200,    14,     4,     5,    55,   263,    10,     4,     5,
     209,     7,     8,     9,    13,    14,    17,    18,    19,    20,
       5,    22,    23,    24,    25,    26,    27,     5,     0,    30,
      31,    32,   289,    34,    84,    36,    37,    68,    69,   118,
      18,    19,    20,    55,    22,    23,    24,    25,    26,    27,
       5,    11,    30,    31,    37,    38,    39,    40,    48,    71,
      50,    44,    12,    18,    19,    20,    47,    22,    23,     4,
      82,    47,    84,    66,    67,    55,    56,    57,    58,    59,
      60,    19,    75,    76,    70,    71,   285,   286,   287,   157,
     158,   159,   160,   155,   156,   107,    45,   296,   126,   127,
     128,   129,    72,    73,    74,   163,   164,   165,   123,   124,
     309,   134,   135,   136,   193,   161,   162,   131,   132,     4,
     319,     4,     4,     4,    50,     4,     4,    55,    48,     4,
      47,    47,    55,    48,     8,    46,    55,    49,     4,    46,
     219,    51,    63,    65,   223,    77,   225,    47,    49,    52,
      64,    28,    54,    47,    46,     4,    29,     8,    48,     4,
      48,    48,    15,     4,    53,    35,    46,     4,    16,    55,
      46,     4,    41,    45,    45,   254,   255,   256,   257,   258,
     259,    45,    49,    51,    49,    45,    49,   266,    49,    47,
      52,    47,    47,    47,    38,    33,    42,    49,    48,     4,
      43,    40,   320,    45,   220,    45,    53,   262,   151,    44,
      39,    47,    46,    45,    45,   176,   324,    47,    45,    78,
      46,   300,   266,   153,   142,    82,   119,   154,   190,   166,
     121,   167,   191
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    81,    82,    83,     5,     0,    11,    84,    85,
      82,    47,    12,    91,    86,    92,     5,    18,    19,    20,
      22,    23,    24,    25,    26,    27,    30,    31,    87,    89,
      95,   104,   105,    47,    19,   112,   116,   110,   106,    97,
     100,    45,     4,    13,    14,    93,   145,   146,   148,     4,
       4,   104,   104,   104,   104,    88,    96,     4,   104,    93,
      94,   113,   117,     4,    50,     4,     4,    87,    90,    55,
     102,    48,     4,    47,    47,   111,   107,    98,   101,   103,
      89,   150,    48,   114,   118,    55,   128,   129,     8,   138,
     139,    55,   102,     4,     5,     7,     8,     9,   176,   178,
     180,   182,   184,   186,   188,   191,   194,    46,   151,    49,
     150,     4,    87,   130,   140,    51,    46,   143,    99,    65,
     177,    64,   179,    68,    69,   181,    66,    67,    75,    76,
     183,    70,    71,   185,    72,    73,    74,   187,    77,   189,
      63,   192,    89,    47,    49,   115,    28,    52,    54,   141,
     108,   144,   176,   178,   180,   182,   182,   184,   184,   184,
     184,   186,   186,   188,   188,   188,   190,   193,   151,   147,
      47,    46,   135,   131,   142,     4,   139,   177,   179,   181,
     181,   183,   183,   183,   183,   185,   185,   187,   187,   187,
     191,   194,     4,    17,    32,    34,    36,    37,    89,   152,
     153,   154,   155,   163,   165,   167,   170,   171,   172,   149,
     136,    29,   132,   176,     8,   109,   143,   189,   192,    48,
      50,   164,   176,    48,     4,    48,    48,    15,   152,    55,
      56,    57,    58,    59,    60,   156,   152,     4,    53,    46,
     133,    55,   119,   120,   173,   174,   176,   138,    45,   176,
      35,   176,     4,    45,   157,   158,   159,   160,   161,   162,
      45,    16,   137,   134,   121,    49,    46,   175,    51,    49,
       4,    49,    49,   176,   176,   176,   176,   176,   176,    45,
     135,   132,    52,   122,   174,    47,    47,    47,    47,   123,
     152,   152,   152,    38,   168,   132,    33,   166,    42,    43,
      48,    40,   169,    53,   152,    41,    45,    45,   176,    47,
      44,   124,    45,    49,   152,    45,    46,   125,   126,    47,
     127,   152,   122,    39,    45,   168
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 115 "format.y"
    { printf("import %s\n", (yyvsp[(2) - (2)].sValue)); }
    break;

  case 7:
#line 123 "format.y"
    { printf("\n\nvariables:\n\t"); }
    break;

  case 10:
#line 130 "format.y"
    { printf(";\n\n\t"); }
    break;

  case 16:
#line 145 "format.y"
    { printf("\nsubprograms:\n"); }
    break;

  case 22:
#line 161 "format.y"
    { printf("%s", (yyvsp[(2) - (2)].sValue)); }
    break;

  case 24:
#line 162 "format.y"
    { printf("const "); }
    break;

  case 25:
#line 162 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 26:
#line 162 "format.y"
    { printf(" = "); }
    break;

  case 28:
#line 163 "format.y"
    { printf("ref "); }
    break;

  case 29:
#line 163 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 31:
#line 167 "format.y"
    { printf(" = "); }
    break;

  case 34:
#line 172 "format.y"
    { printf("int "); }
    break;

  case 35:
#line 173 "format.y"
    { printf("double real "); }
    break;

  case 36:
#line 174 "format.y"
    { printf("real "); }
    break;

  case 37:
#line 175 "format.y"
    { printf("complex "); }
    break;

  case 38:
#line 176 "format.y"
    { printf("boolean "); }
    break;

  case 39:
#line 177 "format.y"
    { printf("string "); }
    break;

  case 40:
#line 181 "format.y"
    { printf("matrix_of "); }
    break;

  case 41:
#line 181 "format.y"
    { printf("[ "); }
    break;

  case 42:
#line 181 "format.y"
    { printf(" ] "); }
    break;

  case 43:
#line 181 "format.y"
    { printf("%s", (yyvsp[(9) - (9)].sValue)); }
    break;

  case 45:
#line 182 "format.y"
    { printf("set_of "); }
    break;

  case 46:
#line 182 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 48:
#line 183 "format.y"
    { printf("enum "); }
    break;

  case 49:
#line 183 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 50:
#line 183 "format.y"
    { printf(" : "); }
    break;

  case 51:
#line 183 "format.y"
    { printf("%s", (yyvsp[(7) - (7)].sValue)); }
    break;

  case 52:
#line 183 "format.y"
    { printf(" end_enum"); }
    break;

  case 53:
#line 184 "format.y"
    { printf("struct "); }
    break;

  case 54:
#line 184 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 55:
#line 184 "format.y"
    { printf(" : \n\t"); }
    break;

  case 56:
#line 184 "format.y"
    { printf("end_struct"); }
    break;

  case 59:
#line 194 "format.y"
    { printf(" = "); }
    break;

  case 61:
#line 199 "format.y"
    { printf("{ "); }
    break;

  case 62:
#line 199 "format.y"
    { printf(" }"); }
    break;

  case 66:
#line 209 "format.y"
    { printf(",\n"); }
    break;

  case 70:
#line 219 "format.y"
    { printf(" = "); }
    break;

  case 71:
#line 219 "format.y"
    { printf("{ "); }
    break;

  case 72:
#line 219 "format.y"
    { printf(" }"); }
    break;

  case 74:
#line 228 "format.y"
    { printf(", "); }
    break;

  case 77:
#line 233 "format.y"
    { printf(", "); }
    break;

  case 78:
#line 233 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 82:
#line 242 "format.y"
    {printf("%i", (yyvsp[(1) - (1)].iValue));}
    break;

  case 84:
#line 246 "format.y"
    {printf("..");}
    break;

  case 85:
#line 246 "format.y"
    {printf("%i", (yyvsp[(3) - (3)].iValue));}
    break;

  case 87:
#line 251 "format.y"
    {printf(", ");}
    break;

  case 92:
#line 261 "format.y"
    { printf("\n\begin procedure %s:\n" , (yyvsp[(2) - (6)].sValue)); }
    break;

  case 93:
#line 263 "format.y"
    { printf("\nend_procedure;\n"); }
    break;

  case 94:
#line 267 "format.y"
    { printf("\n\begin function %s:\n" , (yyvsp[(3) - (7)].sValue)); }
    break;

  case 95:
#line 269 "format.y"
    { printf("\nend_function;\n"); }
    break;

  case 110:
#line 300 "format.y"
    { printf("\n\return \n" ); }
    break;

  case 111:
#line 304 "format.y"
    { printf("\n\assignment \n" ); }
    break;

  case 112:
#line 308 "format.y"
    { printf(" = "); }
    break;

  case 114:
#line 309 "format.y"
    { printf(" += "); }
    break;

  case 116:
#line 310 "format.y"
    { printf(" -= "); }
    break;

  case 118:
#line 311 "format.y"
    { printf(" *= "); }
    break;

  case 120:
#line 312 "format.y"
    { printf(" /= "); }
    break;

  case 122:
#line 313 "format.y"
    { printf(" %%= "); }
    break;

  case 169:
#line 454 "format.y"
    { printf("^"); }
    break;

  case 173:
#line 463 "format.y"
    { printf("!"); }
    break;

  case 176:
#line 468 "format.y"
    { printf("%i", (yyvsp[(1) - (1)].iValue)); }
    break;

  case 177:
#line 469 "format.y"
    { printf("%f", (yyvsp[(1) - (1)].dValue)); }
    break;

  case 178:
#line 470 "format.y"
    { printf("%d", (yyvsp[(1) - (1)].iValue)); }
    break;

  case 179:
#line 471 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;

  case 180:
#line 472 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;


/* Line 1267 of yacc.c.  */
#line 2125 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 480 "format.y"

