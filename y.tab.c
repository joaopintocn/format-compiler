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
     ID = 259,
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
#define ID 259
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
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

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
      75,    83,    88,    95,   101,   103,   104,   107,   112,   115,
     116,   122,   123,   126,   129,   130,   134,   135,   138,   141,
     144,   145,   149,   150,   152,   154,   164,   175,   178,   179,
     183,   184,   187,   188,   190,   192,   194,   196,   198,   200,
     202,   204,   208,   212,   215,   218,   221,   224,   227,   230,
     233,   237,   238,   248,   251,   252,   262,   272,   273,   277,
     278,   287,   296,   301,   303,   304,   307,   310,   311,   314,
     318,   319,   322,   326,   327,   330,   334,   338,   339,   342,
     346,   350,   354,   358,   359,   362,   366,   370,   371,   374,
     378,   382,   386,   387,   390,   394,   395,   398,   401,   404,
     405,   407,   409,   411,   415,   420,   423,   426,   429
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    81,    83,    -1,    82,    81,    -1,    -1,
       9,     3,    -1,    84,    87,    -1,    10,    46,    85,    -1,
      -1,    90,    44,    86,    -1,    85,    -1,    -1,    11,    46,
      88,    -1,    -1,   107,    89,    -1,    88,    -1,    -1,    91,
      -1,    94,    -1,    93,   150,    92,    -1,    29,    93,   150,
      54,   130,    -1,    30,    93,   150,    92,    -1,    54,   130,
      -1,    -1,    17,    -1,    21,    18,    -1,    18,    -1,    19,
      -1,    22,    -1,    20,    -1,    26,    93,    49,   103,    50,
     150,    95,    -1,    25,    93,   150,    99,    -1,    23,   150,
      46,   150,   102,    28,    -1,    24,   150,    46,    85,    27,
      -1,    96,    -1,    -1,    54,    97,    -1,    51,   100,    52,
      98,    -1,    45,    97,    -1,    -1,    54,    51,   100,   101,
      52,    -1,    -1,   130,   101,    -1,    45,   100,    -1,    -1,
      45,   150,   102,    -1,    -1,   104,   106,    -1,     5,   105,
      -1,    53,     5,    -1,    -1,    45,   104,   106,    -1,    -1,
     108,    -1,   109,    -1,    12,   150,    47,   110,    48,    46,
     112,    14,    44,    -1,    13,    93,   150,    47,   110,    48,
      46,   112,    15,    44,    -1,    90,   111,    -1,    -1,    45,
      90,   111,    -1,    -1,   113,   112,    -1,    -1,   115,    -1,
     119,    -1,   121,    -1,   124,    -1,   125,    -1,   126,    -1,
     114,    -1,    90,    -1,    16,   130,    44,    -1,   117,   116,
      44,    -1,    54,   130,    -1,    55,   130,    -1,    56,   130,
      -1,    57,   130,    -1,    58,   130,    -1,    59,   130,    -1,
     150,   118,    -1,    49,   103,    50,    -1,    -1,    31,    47,
     130,    48,    46,   112,   120,    40,    44,    -1,    32,   112,
      -1,    -1,    36,    47,   150,    48,    46,   122,   123,    43,
      44,    -1,    37,    47,   130,    48,    46,   112,    38,    44,
     122,    -1,    -1,    39,    46,   112,    -1,    -1,    35,    47,
     130,    48,    46,   112,    42,    44,    -1,    33,   150,    34,
     150,    46,   112,    41,    44,    -1,   150,    47,   127,    48,
      -1,   128,    -1,    -1,   130,   129,    -1,    45,   128,    -1,
      -1,   132,   131,    -1,    64,   132,   131,    -1,    -1,   134,
     133,    -1,    63,   134,   133,    -1,    -1,   136,   135,    -1,
      67,   148,   149,    -1,    68,   148,   149,    -1,    -1,   138,
     137,    -1,    65,   148,   149,    -1,    66,   148,   149,    -1,
      74,   148,   149,    -1,    75,   148,   149,    -1,    -1,   140,
     139,    -1,    70,   140,   139,    -1,    69,   140,   139,    -1,
      -1,   142,   141,    -1,    71,   142,   141,    -1,    72,   142,
     141,    -1,    73,   142,   141,    -1,    -1,   144,   143,    -1,
      76,   145,   147,    -1,    -1,    60,   145,    -1,    61,   145,
      -1,    62,   145,    -1,    -1,   150,    -1,     5,    -1,   146,
      -1,    47,   130,    48,    -1,   150,    47,   110,    48,    -1,
      20,     5,    -1,     5,    20,    -1,    45,    20,    -1,    20,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   109,   110,   114,   118,   122,   123,   127,
     131,   132,   136,   137,   141,   145,   146,   150,   151,   156,
     157,   158,   162,   163,   167,   168,   169,   170,   171,   172,
     176,   177,   178,   179,   183,   184,   189,   194,   198,   199,
     203,   204,   208,   212,   213,   217,   218,   222,   226,   230,
     231,   235,   236,   240,   241,   245,   251,   257,   258,   262,
     263,   267,   268,   272,   273,   274,   275,   276,   277,   278,
     279,   283,   287,   291,   292,   293,   294,   295,   296,   300,
     305,   306,   310,   317,   318,   322,   329,   333,   337,   338,
     342,   348,   354,   358,   359,   363,   367,   368,   372,   376,
     377,   381,   385,   386,   390,   394,   395,   396,   400,   404,
     405,   406,   407,   408,   412,   416,   417,   418,   422,   426,
     427,   428,   429,   433,   437,   438,   442,   443,   444,   445,
     449,   450,   451,   452,   456,   467,   470,   473,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "ID", "NUMBER", "COMPLEX_NUMBER",
  "REAL_NUMBER", "INT_NUMBER", "IMPORT", "VARIABLES_SECTION",
  "SUBPROGRAMS_SECTION", "PROCEDURE", "FUNCTION", "END_PROCEDURE",
  "END_FUNCTION", "RETURN", "INT", "REAL", "COMPLEX", "STRING", "DOUBLE",
  "BOOLEAN", "ENUM", "STRUCT", "SET_OF", "MATRIX_OF", "END_STRUCT",
  "END_ENUM", "CONST", "REF", "IF", "ELSE", "FOR", "IN", "WHILE", "SWITCH",
  "CASE", "BREAK", "OTHER", "END_IF", "END_FOR", "END_WHILE", "END_SWITCH",
  "SEMICOLON", "COMMA", "COLON", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS",
  "OPEN_BRACKETS", "CLOSE_BRACKETS", "OPEN_BRACES", "CLOSE_BRACES",
  "RANGE", "ASSIGN_OP", "ADD_ASSIGN_OP", "SUB_ASSIGN_OP", "MULT_ASSIGN_OP",
  "DIV_ASSIGN_OP", "MOD_ASSIGN_OP", "INCREMENT_OP", "DECREMENT_OP",
  "NEG_OP", "AND_OP", "OR_OP", "LEQ_OP", "BEQ_OP", "EQ_OP", "NEQ_OP",
  "SUB_OP", "ADD_OP", "MULT_OP", "DIV_OP", "MOD_OP", "LT_OP", "BT_OP",
  "EXPO_OP", "DOT_OP", "COMMENT", "$accept", "program", "program_header",
  "import", "program_body", "variable_section", "variable_declarations",
  "variable_declarations_tail", "subprogram_section",
  "subprogram_declarations", "subprogram_declarations_tail",
  "variable_declaration", "simple_variable_declaration",
  "simple_variable_declaration_value", "type",
  "compost_variable_declaration", "matrix_assignment",
  "matrix_assignment_aux", "matrix_assignment_aux_aux",
  "values_group_list", "set_assignment", "values", "values_list",
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
  "expo_tail", "expo", "incr_decr", "function_call", "incr_decr_tail",
  "term_comparison", "term_comparison_tail", "identifier", 0
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
      99,    99,   100,   101,   101,   102,   102,   103,   104,   105,
     105,   106,   106,   107,   107,   108,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   115,   116,   116,   116,   116,   116,   116,   117,
     118,   118,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   125,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   132,   133,   133,   134,   135,   135,   135,   136,   137,
     137,   137,   137,   137,   138,   139,   139,   139,   140,   141,
     141,   141,   141,   142,   143,   143,   144,   144,   144,   144,
     145,   145,   145,   145,   146,   147,   148,   149,   150
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     2,     3,     0,     3,
       1,     0,     3,     0,     2,     1,     0,     1,     1,     3,
       5,     4,     2,     0,     1,     2,     1,     1,     1,     1,
       7,     4,     6,     5,     1,     0,     2,     4,     2,     0,
       5,     0,     2,     2,     0,     3,     0,     2,     2,     2,
       0,     3,     0,     1,     1,     9,    10,     2,     0,     3,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       3,     0,     9,     2,     0,     9,     9,     0,     3,     0,
       8,     8,     4,     1,     0,     2,     2,     0,     2,     3,
       0,     2,     3,     0,     2,     3,     3,     0,     2,     3,
       3,     3,     3,     0,     2,     3,     3,     0,     2,     3,
       3,     3,     0,     2,     3,     0,     2,     2,     2,     0,
       1,     1,     1,     3,     4,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     8,     4,     5,     1,     0,     2,    13,
       3,     0,     0,     6,    24,    26,    27,    29,     0,    28,
       0,     0,     0,     0,     0,     0,     7,     0,    17,     0,
      18,     0,    25,   138,     0,     0,     0,     0,     0,     0,
      11,    23,     0,     0,    12,    16,    53,    54,     0,     0,
      41,     0,     0,    23,    10,     9,   129,    19,     0,     0,
      15,    14,    46,     0,     0,    31,    50,     0,    52,   129,
      21,     0,     0,     0,    22,   100,   103,   107,   113,   117,
     122,   125,    58,     0,     0,     0,    33,   129,     0,    48,
       0,     0,    47,    20,   131,   129,   126,   132,   130,   127,
     128,   129,    98,   129,   101,     0,     0,   104,     0,     0,
       0,     0,   108,   129,   129,   114,   129,   129,   129,   118,
       0,   123,    60,     0,    58,    46,    32,    44,    44,    49,
      35,    52,     0,    58,   100,   103,     0,     0,     0,     0,
       0,     0,     0,   117,   117,   122,   122,   122,     0,     0,
      57,     0,     0,    45,   129,     0,    42,     0,    30,    34,
      51,   133,     0,    99,   102,   136,     0,   105,   106,   109,
     110,   111,   112,   116,   115,   119,   120,   121,     0,   124,
      60,    62,     0,    43,    40,   129,    36,   134,   137,   135,
      59,   129,   138,     0,     0,     0,     0,    70,     0,    62,
      69,    63,     0,    64,    65,    66,    67,    68,    81,    62,
       0,     0,   129,     0,   129,     0,     0,    61,   129,   129,
     129,   129,   129,   129,     0,   129,     0,    79,     0,    39,
      71,     0,     0,     0,     0,    55,    73,    74,    75,    76,
      77,    78,    72,     0,    93,    97,     0,     0,     0,    37,
       0,     0,     0,     0,    92,   129,    95,    80,    56,    38,
      62,    62,    62,    87,    96,    84,     0,     0,     0,    89,
      62,     0,     0,     0,   129,     0,     0,    83,     0,    91,
      90,     0,    62,     0,    82,     0,    88,    85,    62,     0,
       0,    87,    86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    26,    55,    13,    44,
      61,   197,    28,    57,    29,    30,   158,   159,   186,   249,
      65,   127,   155,    85,    67,    68,    89,    92,    45,    46,
      47,   123,   150,   198,   199,   200,   201,   224,   202,   227,
     203,   271,   204,   269,   276,   205,   206,   207,   243,   244,
     256,   128,   102,    75,   104,    76,   107,    77,   112,    78,
     115,    79,   119,    80,   121,    81,    96,    97,   179,   137,
     167,   208
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -195
static const yytype_int16 yypact[] =
{
       7,     8,    28,    26,     7,  -195,  -195,    69,  -195,    64,
    -195,    60,    74,  -195,  -195,  -195,  -195,  -195,   104,  -195,
      67,    67,    39,    39,    39,    39,  -195,    83,  -195,    67,
    -195,    21,  -195,  -195,    98,    99,    67,    97,    67,    67,
      60,    93,    67,    39,  -195,    21,  -195,  -195,    67,    60,
      94,   144,    96,    93,  -195,  -195,   -11,  -195,   105,    67,
    -195,  -195,   106,   126,   103,  -195,   102,   107,   114,   -11,
    -195,     1,     1,     1,  -195,   108,   110,     5,   -28,     0,
      -9,    84,    60,   121,    67,   133,  -195,   -11,   165,  -195,
      67,   144,  -195,  -195,  -195,   -11,  -195,  -195,   124,  -195,
    -195,   -11,  -195,   -11,  -195,   169,   169,  -195,   169,   169,
     169,   169,  -195,   -11,   -11,  -195,   -11,   -11,   -11,  -195,
       1,  -195,   131,   129,    60,   106,  -195,   134,   134,  -195,
     127,   114,   130,    60,   108,   110,   160,   137,   137,   137,
     137,   137,   137,     0,     0,    -9,    -9,    -9,   163,    60,
    -195,   138,   139,  -195,   -11,   136,  -195,   135,  -195,  -195,
    -195,  -195,   141,  -195,  -195,  -195,   170,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,   180,  -195,
     131,    88,   145,  -195,  -195,   -11,  -195,  -195,  -195,  -195,
    -195,   -11,   172,   146,    67,   147,   148,  -195,   183,    88,
    -195,  -195,    41,  -195,  -195,  -195,  -195,  -195,   -35,    88,
     149,   154,   -11,   166,   -11,    67,   158,  -195,   -11,   -11,
     -11,   -11,   -11,   -11,   159,   -18,   144,  -195,   189,   161,
    -195,   157,    67,   162,   164,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,   167,  -195,   171,   173,   175,   135,  -195,
     168,   174,   176,   178,  -195,   -11,  -195,  -195,  -195,  -195,
      88,    88,    88,   184,  -195,   177,   185,   186,   182,   188,
      88,   190,   181,   187,   -11,   191,   192,  -195,   194,  -195,
    -195,   193,    88,   195,  -195,   196,  -195,  -195,    88,   179,
     199,   184,  -195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,   203,  -195,  -195,  -195,   -31,  -195,  -195,   200,
    -195,    -8,  -195,   155,     2,  -195,  -195,  -195,   -37,  -195,
    -195,  -150,   112,   109,     6,   142,  -195,   113,  -195,  -195,
    -195,  -102,    56,  -194,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,   -45,  -195,  -195,  -195,  -195,  -195,    -7,
    -195,   -56,   115,   150,   117,   151,  -195,  -195,  -195,  -195,
     -41,    29,   -54,    16,  -195,  -195,   -65,  -195,  -195,    20,
      -2,   -19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -95
static const yytype_int16 yytable[] =
{
      74,    34,    35,    27,   183,   217,    94,    99,   100,    54,
      41,     5,   225,    93,   226,   228,     1,    50,    63,    52,
      53,    33,   152,    58,    36,    37,    38,    39,     6,    62,
     -94,   162,    27,    42,    43,   210,     7,   108,   109,   132,
      83,    27,    71,    72,    73,    59,   110,   111,    95,    71,
      72,    73,    98,    98,    98,   148,    14,    15,    16,    17,
      18,    19,   116,   117,   118,   125,   265,   266,   267,   113,
     114,   130,   105,   106,   122,    12,   277,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    33,   286,    24,
      25,   175,   176,   177,   289,   218,   219,   220,   221,   222,
     223,    98,   173,   174,   191,    14,    15,    16,   192,    18,
      19,    20,    21,    22,    23,    11,   122,    24,    25,   193,
      31,   194,    32,   195,   196,   122,   138,    40,   139,   140,
     141,   142,   145,   146,   147,   211,   168,   169,   170,   171,
     172,   180,   143,   144,    48,    49,    51,    56,    64,    66,
      69,    84,    82,    86,    87,    88,   231,    90,   233,    91,
     120,   126,   236,   237,   238,   239,   240,   241,   124,   245,
     129,   133,   101,   103,   136,   213,   149,   151,   161,   154,
     165,   157,   166,   178,   181,   189,   185,   182,   184,   187,
     188,   209,   -29,   212,   214,   215,   234,   216,   230,   245,
     232,   229,   235,   242,   247,   250,   248,    10,    70,   270,
     252,   259,   253,   251,   260,   254,   255,   290,   281,   258,
     261,   268,   262,   257,   263,   279,   272,   275,   273,   274,
     278,   280,   246,   131,   153,   283,   190,   282,   284,   287,
     156,   285,   288,   291,   160,    60,   292,     0,   264,   163,
       0,   134,   164,     0,   135
};

static const yytype_int16 yycheck[] =
{
      56,    20,    21,    11,   154,   199,     5,    72,    73,    40,
      29,     3,    47,    69,    49,   209,     9,    36,    49,    38,
      39,    20,   124,    42,    22,    23,    24,    25,     0,    48,
      48,   133,    40,    12,    13,   185,    10,    65,    66,    95,
      59,    49,    60,    61,    62,    43,    74,    75,    47,    60,
      61,    62,    71,    72,    73,   120,    17,    18,    19,    20,
      21,    22,    71,    72,    73,    84,   260,   261,   262,    69,
      70,    90,    67,    68,    82,    11,   270,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    20,   282,    29,
      30,   145,   146,   147,   288,    54,    55,    56,    57,    58,
      59,   120,   143,   144,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    46,   124,    29,    30,    31,
      46,    33,    18,    35,    36,   133,   106,    44,   108,   109,
     110,   111,   116,   117,   118,   191,   138,   139,   140,   141,
     142,   149,   113,   114,    46,    46,    49,    54,    54,     5,
      54,    45,    47,    27,    51,    53,   212,    50,   214,    45,
      76,    28,   218,   219,   220,   221,   222,   223,    47,   225,
       5,    47,    64,    63,     5,   194,    45,    48,    48,    45,
      20,    54,    45,    20,    46,     5,    51,    48,    52,    48,
      20,    46,    20,    47,    47,    47,   215,    14,    44,   255,
      34,    52,    44,    44,    15,    48,    45,     4,    53,    32,
      48,   248,    48,   232,    46,    48,    45,    38,   274,    44,
      46,    37,    46,    50,    46,    44,    41,    39,    42,    47,
      40,    44,   226,    91,   125,    43,   180,    46,    44,    44,
     128,    48,    46,    44,   131,    45,   291,    -1,   255,   134,
      -1,   101,   135,    -1,   103
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    80,    81,    82,     3,     0,    10,    83,    84,
      81,    46,    11,    87,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    29,    30,    85,    90,    91,    93,
      94,    46,    18,    20,   150,   150,    93,    93,    93,    93,
      44,   150,    12,    13,    88,   107,   108,   109,    46,    46,
     150,    49,   150,   150,    85,    86,    54,    92,   150,    93,
      88,    89,   150,    85,    54,    99,     5,   103,   104,    54,
      92,    60,    61,    62,   130,   132,   134,   136,   138,   140,
     142,   144,    47,   150,    45,   102,    27,    51,    53,   105,
      50,    45,   106,   130,     5,    47,   145,   146,   150,   145,
     145,    64,   131,    63,   133,    67,    68,   135,    65,    66,
      74,    75,   137,    69,    70,   139,    71,    72,    73,   141,
      76,   143,    90,   110,    47,   150,    28,   100,   130,     5,
     150,   104,   130,    47,   132,   134,     5,   148,   148,   148,
     148,   148,   148,   140,   140,   142,   142,   142,   145,    45,
     111,    48,   110,   102,    45,   101,   101,    54,    95,    96,
     106,    48,   110,   131,   133,    20,    45,   149,   149,   149,
     149,   149,   149,   139,   139,   141,   141,   141,    20,   147,
      90,    46,    48,   100,    52,    51,    97,    48,    20,     5,
     111,    16,    20,    31,    33,    35,    36,    90,   112,   113,
     114,   115,   117,   119,   121,   124,   125,   126,   150,    46,
     100,   130,    47,   150,    47,    47,    14,   112,    54,    55,
      56,    57,    58,    59,   116,    47,    49,   118,   112,    52,
      44,   130,    34,   130,   150,    44,   130,   130,   130,   130,
     130,   130,    44,   127,   128,   130,   103,    15,    45,    98,
      48,   150,    48,    48,    48,    45,   129,    50,    44,    97,
      46,    46,    46,    46,   128,   112,   112,   112,    37,   122,
      32,   120,    41,    42,    47,    39,   123,   112,    40,    44,
      44,   130,    46,    43,    44,    48,   112,    44,    46,   112,
      38,    44,   122
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
#line 1754 "y.tab.c"
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


#line 478 "format.y"


