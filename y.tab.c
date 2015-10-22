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
     NUMBER = 260,
     COMPLEX_NUMBER = 261,
     REAL_NUMBER = 262,
     INT_NUMBER = 263,
     IMPORT = 264,
     VARIABLES_SECTION = 265,
     SUBPROGRAMS_SECTION = 266,
     PROCEDURE = 267,
     FUNCTION = 268,
     END_PROCEDURE = 269,
     END_FUNCTION = 270,
     RETURN = 271,
     INT = 272,
     REAL = 273,
     COMPLEX = 274,
     STRING = 275,
     DOUBLE = 276,
     BOOLEAN = 277,
     ENUM = 278,
     STRUCT = 279,
     SET_OF = 280,
     MATRIX_OF = 281,
     END_STRUCT = 282,
     END_ENUM = 283,
     CONST = 284,
     REF = 285,
     IF = 286,
     ELSE = 287,
     FOR = 288,
     IN = 289,
     WHILE = 290,
     SWITCH = 291,
     CASE = 292,
     BREAK = 293,
     OTHER = 294,
     END_IF = 295,
     END_FOR = 296,
     END_WHILE = 297,
     END_SWITCH = 298,
     SEMICOLON = 299,
     COMMA = 300,
     COLON = 301,
     OPEN_PARENTHESIS = 302,
     CLOSE_PARENTHESIS = 303,
     OPEN_BRACKETS = 304,
     CLOSE_BRACKETS = 305,
     OPEN_BRACES = 306,
     CLOSE_BRACES = 307,
     RANGE = 308,
     ASSIGN_OP = 309,
     ADD_ASSIGN_OP = 310,
     SUB_ASSIGN_OP = 311,
     MULT_ASSIGN_OP = 312,
     DIV_ASSIGN_OP = 313,
     MOD_ASSIGN_OP = 314,
     INCREMENT_OP = 315,
     DECREMENT_OP = 316,
     NEG_OP = 317,
     AND_OP = 318,
     OR_OP = 319,
     LEQ_OP = 320,
     BEQ_OP = 321,
     EQ_OP = 322,
     NEQ_OP = 323,
     SUB_OP = 324,
     ADD_OP = 325,
     MULT_OP = 326,
     DIV_OP = 327,
     MOD_OP = 328,
     LT_OP = 329,
     BT_OP = 330,
     EXPO_OP = 331,
     DOT_OP = 332,
     COMMENT = 333
   };
#endif
/* Tokens.  */
#define NAME 258
#define IDENTIFIER 259
#define NUMBER 260
#define COMPLEX_NUMBER 261
#define REAL_NUMBER 262
#define INT_NUMBER 263
#define IMPORT 264
#define VARIABLES_SECTION 265
#define SUBPROGRAMS_SECTION 266
#define PROCEDURE 267
#define FUNCTION 268
#define END_PROCEDURE 269
#define END_FUNCTION 270
#define RETURN 271
#define INT 272
#define REAL 273
#define COMPLEX 274
#define STRING 275
#define DOUBLE 276
#define BOOLEAN 277
#define ENUM 278
#define STRUCT 279
#define SET_OF 280
#define MATRIX_OF 281
#define END_STRUCT 282
#define END_ENUM 283
#define CONST 284
#define REF 285
#define IF 286
#define ELSE 287
#define FOR 288
#define IN 289
#define WHILE 290
#define SWITCH 291
#define CASE 292
#define BREAK 293
#define OTHER 294
#define END_IF 295
#define END_FOR 296
#define END_WHILE 297
#define END_SWITCH 298
#define SEMICOLON 299
#define COMMA 300
#define COLON 301
#define OPEN_PARENTHESIS 302
#define CLOSE_PARENTHESIS 303
#define OPEN_BRACKETS 304
#define CLOSE_BRACKETS 305
#define OPEN_BRACES 306
#define CLOSE_BRACES 307
#define RANGE 308
#define ASSIGN_OP 309
#define ADD_ASSIGN_OP 310
#define SUB_ASSIGN_OP 311
#define MULT_ASSIGN_OP 312
#define DIV_ASSIGN_OP 313
#define MOD_ASSIGN_OP 314
#define INCREMENT_OP 315
#define DECREMENT_OP 316
#define NEG_OP 317
#define AND_OP 318
#define OR_OP 319
#define LEQ_OP 320
#define BEQ_OP 321
#define EQ_OP 322
#define NEQ_OP 323
#define SUB_OP 324
#define ADD_OP 325
#define MULT_OP 326
#define DIV_OP 327
#define MOD_OP 328
#define LT_OP 329
#define BT_OP 330
#define EXPO_OP 331
#define DOT_OP 332
#define COMMENT 333




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
	int 	iValue; 	//
	char 	cValue;		//
	char * 	sValue;		//
}
/* Line 193 of yacc.c.  */
#line 267 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 280 "y.tab.c"

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
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    13,    16,    20,    21,
      25,    27,    28,    32,    33,    36,    38,    39,    41,    43,
      47,    53,    58,    61,    62,    64,    67,    69,    71,    73,
      75,    83,    88,    95,   101,   103,   104,   107,   112,   114,
     115,   118,   120,   121,   126,   129,   132,   133,   137,   138,
     141,   144,   147,   148,   152,   153,   155,   157,   167,   178,
     181,   182,   186,   187,   190,   191,   193,   195,   197,   199,
     201,   203,   205,   207,   211,   215,   218,   221,   224,   227,
     230,   233,   236,   240,   241,   251,   254,   255,   265,   275,
     276,   280,   281,   290,   299,   304,   306,   307,   310,   313,
     314,   317,   321,   322,   325,   329,   330,   333,   337,   341,
     342,   345,   349,   353,   357,   361,   362,   365,   369,   373,
     374,   377,   381,   385,   389,   390,   393,   397,   398,   401,
     405,   406,   408,   410,   412,   416
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    81,    83,    -1,    82,    81,    -1,    -1,
       9,     3,    -1,    84,    87,    -1,    10,    46,    85,    -1,
      -1,    90,    44,    86,    -1,    85,    -1,    -1,    11,    46,
      88,    -1,    -1,   109,    89,    -1,    88,    -1,    -1,    91,
      -1,    94,    -1,    93,     4,    92,    -1,    29,    93,     4,
      54,   132,    -1,    30,    93,     4,    92,    -1,    54,   132,
      -1,    -1,    17,    -1,    21,    18,    -1,    18,    -1,    19,
      -1,    22,    -1,    20,    -1,    26,    93,    49,   105,    50,
       4,    95,    -1,    25,    93,     4,   100,    -1,    23,     4,
      46,     4,   104,    28,    -1,    24,     4,    46,    85,    27,
      -1,    96,    -1,    -1,    54,    97,    -1,    51,   132,    52,
      98,    -1,    99,    -1,    -1,    45,    97,    -1,   101,    -1,
      -1,    54,    51,   102,    52,    -1,   132,   103,    -1,    45,
     102,    -1,    -1,    45,     4,   104,    -1,    -1,   106,   108,
      -1,     5,   107,    -1,    53,     5,    -1,    -1,    45,   106,
     108,    -1,    -1,   110,    -1,   111,    -1,    12,     4,    47,
     112,    48,    46,   114,    14,    44,    -1,    13,    93,     4,
      47,   112,    48,    46,   114,    15,    44,    -1,    90,   113,
      -1,    -1,    45,    90,   113,    -1,    -1,   115,   114,    -1,
      -1,   117,    -1,   121,    -1,   123,    -1,   126,    -1,   127,
      -1,   128,    -1,   116,    -1,    90,    -1,    16,   132,    44,
      -1,   119,   118,    44,    -1,    54,   132,    -1,    55,   132,
      -1,    56,   132,    -1,    57,   132,    -1,    58,   132,    -1,
      59,   132,    -1,     4,   120,    -1,    49,   105,    50,    -1,
      -1,    31,    47,   132,    48,    46,   114,   122,    40,    44,
      -1,    32,   114,    -1,    -1,    36,    47,     4,    48,    46,
     124,   125,    43,    44,    -1,    37,    47,   132,    48,    46,
     114,    38,    44,   124,    -1,    -1,    39,    46,   114,    -1,
      -1,    35,    47,   132,    48,    46,   114,    42,    44,    -1,
      33,     4,    34,     4,    46,   114,    41,    44,    -1,     4,
      47,   129,    48,    -1,   130,    -1,    -1,   132,   131,    -1,
      45,   130,    -1,    -1,   134,   133,    -1,    64,   134,   133,
      -1,    -1,   136,   135,    -1,    63,   136,   135,    -1,    -1,
     138,   137,    -1,    67,   138,   137,    -1,    68,   138,   137,
      -1,    -1,   140,   139,    -1,    65,   140,   139,    -1,    66,
     140,   139,    -1,    74,   140,   139,    -1,    75,   140,   139,
      -1,    -1,   142,   141,    -1,    70,   142,   141,    -1,    69,
     142,   141,    -1,    -1,   144,   143,    -1,    71,   144,   143,
      -1,    72,   144,   143,    -1,    73,   144,   143,    -1,    -1,
     146,   145,    -1,    76,   146,   145,    -1,    -1,   148,   147,
      -1,    62,   148,   147,    -1,    -1,     4,    -1,     5,    -1,
     149,    -1,    47,   132,    48,    -1,     4,    47,   112,    48,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   109,   110,   114,   118,   122,   123,   127,
     131,   132,   136,   137,   141,   145,   146,   150,   151,   156,
     157,   158,   162,   163,   167,   168,   169,   170,   171,   172,
     176,   177,   178,   179,   183,   184,   189,   194,   198,   199,
     204,   209,   210,   214,   219,   223,   224,   228,   229,   233,
     237,   241,   242,   246,   247,   251,   252,   256,   262,   268,
     269,   273,   274,   278,   279,   283,   284,   285,   286,   287,
     288,   289,   290,   294,   298,   302,   303,   304,   305,   306,
     307,   311,   316,   317,   321,   328,   329,   333,   340,   344,
     348,   349,   353,   359,   365,   369,   370,   374,   378,   379,
     383,   387,   388,   392,   396,   397,   401,   405,   406,   407,
     411,   415,   416,   417,   418,   419,   423,   427,   428,   429,
     433,   437,   438,   439,   440,   444,   448,   449,   453,   457,
     458,   462,   463,   464,   465,   469
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "IDENTIFIER", "NUMBER",
  "COMPLEX_NUMBER", "REAL_NUMBER", "INT_NUMBER", "IMPORT",
  "VARIABLES_SECTION", "SUBPROGRAMS_SECTION", "PROCEDURE", "FUNCTION",
  "END_PROCEDURE", "END_FUNCTION", "RETURN", "INT", "REAL", "COMPLEX",
  "STRING", "DOUBLE", "BOOLEAN", "ENUM", "STRUCT", "SET_OF", "MATRIX_OF",
  "END_STRUCT", "END_ENUM", "CONST", "REF", "IF", "ELSE", "FOR", "IN",
  "WHILE", "SWITCH", "CASE", "BREAK", "OTHER", "END_IF", "END_FOR",
  "END_WHILE", "END_SWITCH", "SEMICOLON", "COMMA", "COLON",
  "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", "OPEN_BRACKETS",
  "CLOSE_BRACKETS", "OPEN_BRACES", "CLOSE_BRACES", "RANGE", "ASSIGN_OP",
  "ADD_ASSIGN_OP", "SUB_ASSIGN_OP", "MULT_ASSIGN_OP", "DIV_ASSIGN_OP",
  "MOD_ASSIGN_OP", "INCREMENT_OP", "DECREMENT_OP", "NEG_OP", "AND_OP",
  "OR_OP", "LEQ_OP", "BEQ_OP", "EQ_OP", "NEQ_OP", "SUB_OP", "ADD_OP",
  "MULT_OP", "DIV_OP", "MOD_OP", "LT_OP", "BT_OP", "EXPO_OP", "DOT_OP",
  "COMMENT", "$accept", "program", "program_header", "import",
  "program_body", "variable_section", "variable_declarations",
  "variable_declarations_tail", "subprogram_section",
  "subprogram_declarations", "subprogram_declarations_tail",
  "variable_declaration", "simple_variable_declaration",
  "simple_variable_declaration_value", "type",
  "compost_variable_declaration", "matrix_assignment",
  "matrix_assignment_aux", "matrix_assignment_aux_aux",
  "values_group_list", "values_group_list_aux", "set_assignment",
  "set_assignment_aux", "set_assignment_aux_aux", "values_list",
  "identifier_list", "dimensions", "range", "range_tail",
  "dimensions_tail", "subprogram_declaration", "procedure_declaration",
  "function_declaration", "parameter_list", "parameter_list_tail",
  "statement_list", "statement", "return_statement",
  "assignment_statement", "assignment_statement_tail", "destination",
  "identifier_tail", "if_statement", "else_clausule", "switch_statement",
  "case_clasule", "other_clasule", "while_statement", "for_statement",
  "subprogram_call", "argument_list", "argument_list_aux",
  "argument_list_tail", "expression", "term_or_tail", "term_or",
  "term_and_tail", "term_and", "term_bool_comparison_tail",
  "term_bool_comparison", "term_arit_comparison_tail",
  "term_arit_comparison", "term_tail", "term", "factor_tail", "factor",
  "expo_tail", "expo", "negation_tail", "negation", "function_call", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    83,    84,    84,    85,
      86,    86,    87,    87,    88,    89,    89,    90,    90,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    95,    95,    96,    97,    98,    98,
      99,   100,   100,   101,   102,   103,   103,   104,   104,   105,
     106,   107,   107,   108,   108,   109,   109,   110,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   117,   118,   118,   118,   118,   118,
     118,   119,   120,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   128,   129,   129,   130,   131,   131,
     132,   133,   133,   134,   135,   135,   136,   137,   137,   137,
     138,   139,   139,   139,   139,   139,   140,   141,   141,   141,
     142,   143,   143,   143,   143,   144,   145,   145,   146,   147,
     147,   148,   148,   148,   148,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     2,     3,     0,     3,
       1,     0,     3,     0,     2,     1,     0,     1,     1,     3,
       5,     4,     2,     0,     1,     2,     1,     1,     1,     1,
       7,     4,     6,     5,     1,     0,     2,     4,     1,     0,
       2,     1,     0,     4,     2,     2,     0,     3,     0,     2,
       2,     2,     0,     3,     0,     1,     1,     9,    10,     2,
       0,     3,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     3,     0,     9,     2,     0,     9,     9,     0,
       3,     0,     8,     8,     4,     1,     0,     2,     2,     0,
       2,     3,     0,     2,     3,     0,     2,     3,     3,     0,
       2,     3,     3,     3,     3,     0,     2,     3,     3,     0,
       2,     3,     3,     3,     0,     2,     3,     0,     2,     3,
       0,     1,     1,     1,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     8,     4,     5,     1,     0,     2,    13,
       3,     0,     0,     6,    24,    26,    27,    29,     0,    28,
       0,     0,     0,     0,     0,     0,     7,     0,    17,     0,
      18,     0,    25,     0,     0,     0,     0,     0,     0,    11,
      23,     0,     0,    12,    16,    55,    56,     0,     0,    42,
       0,     0,    23,    10,     9,     0,    19,     0,     0,    15,
      14,    48,     0,     0,    31,    41,    52,     0,    54,     0,
      21,   131,   132,     0,    22,   102,   105,   109,   115,   119,
     124,   127,   130,   133,    60,     0,     0,     0,    33,     0,
       0,    50,     0,     0,    49,    20,    60,     0,     0,   100,
       0,   103,     0,     0,   106,     0,     0,     0,     0,   110,
       0,     0,   116,     0,     0,     0,   120,     0,   125,     0,
     128,    62,     0,    60,    48,    32,     0,    46,    51,    35,
      54,     0,   134,   102,   105,   109,   109,   115,   115,   115,
     115,   119,   119,   124,   124,   124,   127,   130,     0,    59,
       0,     0,    47,    43,     0,    44,     0,    30,    34,    53,
     135,   101,   104,   107,   108,   111,   112,   113,   114,   118,
     117,   121,   122,   123,   126,   129,    62,    64,     0,    45,
       0,    36,    61,    83,     0,     0,     0,     0,     0,    72,
       0,    64,    71,    65,     0,    66,    67,    68,    69,    70,
      64,     0,    96,     0,    81,     0,     0,     0,     0,     0,
       0,    63,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,    95,    99,     0,    73,     0,     0,     0,     0,
      57,    75,    76,    77,    78,    79,    80,    74,     0,     0,
      37,    38,    94,     0,    97,    82,     0,     0,     0,     0,
      58,    40,    98,    64,    64,    64,    89,    86,     0,     0,
       0,    91,    64,     0,     0,     0,     0,     0,     0,    85,
       0,    93,    92,     0,    64,     0,    84,     0,    90,    87,
      64,     0,     0,    89,    88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    26,    54,    13,    43,
      60,   189,    28,    56,    29,    30,   157,   158,   181,   240,
     241,    64,    65,   126,   155,    87,    67,    68,    91,    94,
      44,    45,    46,   122,   149,   190,   191,   192,   193,   218,
     194,   204,   195,   263,   196,   261,   268,   197,   198,   199,
     221,   222,   244,   127,    99,    75,   101,    76,   104,    77,
     109,    78,   112,    79,   116,    80,   118,    81,   120,    82,
      83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -190
static const yytype_int16 yypact[] =
{
      11,    24,    31,    27,    11,  -190,  -190,    33,  -190,    34,
    -190,    30,    62,  -190,  -190,  -190,  -190,  -190,    92,  -190,
     112,   113,    22,    22,    22,    22,  -190,    74,  -190,   115,
    -190,    45,  -190,    75,    77,   116,    73,   120,   122,    30,
      78,   123,    22,  -190,    45,  -190,  -190,   124,    30,    79,
     125,    80,    78,  -190,  -190,    -1,  -190,    84,   131,  -190,
    -190,    91,   110,    88,  -190,  -190,    87,    93,    96,    -1,
    -190,    95,  -190,    -1,  -190,    81,    83,    14,   -53,    18,
     -56,    68,    86,  -190,    30,   102,   146,   126,  -190,    -1,
     147,  -190,   151,   125,  -190,  -190,    30,   108,    -1,  -190,
      -1,  -190,    -1,    -1,  -190,    -1,    -1,    -1,    -1,  -190,
      -1,    -1,  -190,    -1,    -1,    -1,  -190,    -1,  -190,    -1,
    -190,   118,   117,    30,    91,  -190,   114,   119,  -190,   121,
      96,   128,  -190,    81,    83,    14,    14,   -53,   -53,   -53,
     -53,    18,    18,   -56,   -56,   -56,    68,    86,    30,  -190,
     127,   129,  -190,  -190,    -1,  -190,   130,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,   118,    76,   132,  -190,
      -1,  -190,  -190,   -19,    -1,   133,   163,   135,   136,  -190,
     154,    76,  -190,  -190,    13,  -190,  -190,  -190,  -190,  -190,
      76,   134,    -1,   125,  -190,   140,    -1,   137,    -1,   165,
     141,  -190,    -1,    -1,    -1,    -1,    -1,    -1,   143,   155,
     144,   142,  -190,   148,   145,  -190,   149,   168,   150,   152,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   157,   130,
    -190,  -190,  -190,    -1,  -190,  -190,   153,   156,   158,   159,
    -190,  -190,  -190,    76,    76,    76,   166,   160,   138,   164,
     161,   170,    76,   167,   169,   171,    -1,   172,   173,  -190,
     175,  -190,  -190,   162,    76,   176,  -190,   177,  -190,  -190,
      76,   174,   178,   166,  -190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,   187,  -190,  -190,  -190,   -29,  -190,  -190,   180,
    -190,   -10,  -190,   179,   -16,  -190,  -190,  -190,   -65,  -190,
    -190,  -190,  -190,    40,  -190,    72,    23,   139,  -190,    97,
    -190,  -190,  -190,   -91,    38,  -189,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,   -66,  -190,  -190,  -190,  -190,
    -190,   -22,  -190,   -55,   100,   181,    94,   182,   -46,     1,
    -104,   -30,   -58,     4,  -120,   -52,    89,   183,    82,   106,
    -190
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      74,    27,   211,    71,    72,   131,    35,    36,    37,    38,
      53,   219,   105,   106,    95,   113,   114,   115,    97,    62,
       1,   107,   108,   171,   172,   173,    58,     5,   202,    27,
     203,     6,   151,   165,   166,   167,   168,     7,    27,    14,
      15,    16,    17,    18,    19,    12,    73,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    41,    42,    24,
      25,   143,   144,   145,   257,   258,   259,   212,   213,   214,
     215,   216,   217,   269,   121,   137,   138,   139,   140,    11,
     183,   102,   103,   169,   170,   278,   121,   110,   111,   163,
     164,   281,   184,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   135,   136,    24,    25,   185,    31,   186,
      32,   187,   188,   121,   141,   142,    33,    34,    39,    40,
      49,    47,    50,    48,    51,   201,    52,    57,    61,   205,
      66,    84,    55,    63,    69,    85,    86,    88,   176,    89,
      90,    93,    96,    92,   117,    98,   100,   223,   119,   123,
     124,   226,   128,   228,   125,   129,   132,   231,   232,   233,
     234,   235,   236,   148,   154,   150,   153,   207,   210,   229,
     238,   227,   247,   177,   251,   156,   160,   178,   200,   264,
     206,   180,   208,   209,   225,   230,   220,   237,   223,   239,
     242,    10,   262,   243,   179,   245,   152,   246,   248,   253,
     249,   250,   254,   260,   255,   256,   265,   270,   266,   267,
     277,   273,   282,   271,   182,   272,   275,   284,   274,   276,
     279,   252,   283,   280,    59,   147,   224,   159,   162,   175,
       0,    70,   130,   161,     0,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146
};

static const yytype_int16 yycheck[] =
{
      55,    11,   191,     4,     5,    96,    22,    23,    24,    25,
      39,   200,    65,    66,    69,    71,    72,    73,    73,    48,
       9,    74,    75,   143,   144,   145,    42,     3,    47,    39,
      49,     0,   123,   137,   138,   139,   140,    10,    48,    17,
      18,    19,    20,    21,    22,    11,    47,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    12,    13,    29,
      30,   113,   114,   115,   253,   254,   255,    54,    55,    56,
      57,    58,    59,   262,    84,   105,   106,   107,   108,    46,
       4,    67,    68,   141,   142,   274,    96,    69,    70,   135,
     136,   280,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   102,   103,    29,    30,    31,    46,    33,
      18,    35,    36,   123,   110,   111,     4,     4,    44,     4,
       4,    46,    49,    46,     4,   180,     4,     4,     4,   184,
       5,    47,    54,    54,    54,     4,    45,    27,   148,    51,
      53,    45,    47,    50,    76,    64,    63,   202,    62,    47,
       4,   206,     5,   208,    28,     4,    48,   212,   213,   214,
     215,   216,   217,    45,    45,    48,    52,     4,    14,     4,
      15,    34,     4,    46,   239,    54,    48,    48,    46,    41,
      47,    51,    47,    47,    44,    44,    52,    44,   243,    45,
      48,     4,    32,    45,   154,    50,   124,    48,    48,    46,
      48,    44,    46,    37,    46,    46,    42,    40,    47,    39,
      48,   266,    38,    44,   176,    44,    43,   283,    46,    44,
      44,   243,    44,    46,    44,   119,   203,   130,   134,   147,
      -1,    52,    93,   133,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    80,    81,    82,     3,     0,    10,    83,    84,
      81,    46,    11,    87,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    29,    30,    85,    90,    91,    93,
      94,    46,    18,     4,     4,    93,    93,    93,    93,    44,
       4,    12,    13,    88,   109,   110,   111,    46,    46,     4,
      49,     4,     4,    85,    86,    54,    92,     4,    93,    88,
      89,     4,    85,    54,   100,   101,     5,   105,   106,    54,
      92,     4,     5,    47,   132,   134,   136,   138,   140,   142,
     144,   146,   148,   149,    47,     4,    45,   104,    27,    51,
      53,   107,    50,    45,   108,   132,    47,   132,    64,   133,
      63,   135,    67,    68,   137,    65,    66,    74,    75,   139,
      69,    70,   141,    71,    72,    73,   143,    76,   145,    62,
     147,    90,   112,    47,     4,    28,   102,   132,     5,     4,
     106,   112,    48,   134,   136,   138,   138,   140,   140,   140,
     140,   142,   142,   144,   144,   144,   146,   148,    45,   113,
      48,   112,   104,    52,    45,   103,    54,    95,    96,   108,
      48,   133,   135,   137,   137,   139,   139,   139,   139,   141,
     141,   143,   143,   143,   145,   147,    90,    46,    48,   102,
      51,    97,   113,     4,    16,    31,    33,    35,    36,    90,
     114,   115,   116,   117,   119,   121,   123,   126,   127,   128,
      46,   132,    47,    49,   120,   132,    47,     4,    47,    47,
      14,   114,    54,    55,    56,    57,    58,    59,   118,   114,
      52,   129,   130,   132,   105,    44,   132,    34,   132,     4,
      44,   132,   132,   132,   132,   132,   132,    44,    15,    45,
      98,    99,    48,    45,   131,    50,    48,     4,    48,    48,
      44,    97,   130,    46,    46,    46,    46,   114,   114,   114,
      37,   124,    32,   122,    41,    42,    47,    39,   125,   114,
      40,    44,    44,   132,    46,    43,    44,    48,   114,    44,
      46,   114,    38,    44,   124
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
      
/* Line 1267 of yacc.c.  */
#line 1761 "y.tab.c"
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


#line 473 "format.y"


