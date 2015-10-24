
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "format.y"

	#include <stdio.h>

	int yyerror (char *s);

	int yylex();



/* Line 189 of yacc.c  */
#line 83 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 11 "format.y"

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//



/* Line 214 of yacc.c  */
#line 285 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 297 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  225
/* YYNRULES -- Number of states.  */
#define YYNSTATES  372

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
     201,   202,   205,   206,   207,   211,   212,   216,   217,   218,
     223,   224,   226,   228,   229,   230,   242,   243,   244,   245,
     246,   261,   264,   265,   266,   271,   272,   275,   276,   278,
     280,   282,   284,   286,   288,   290,   293,   294,   299,   303,
     304,   308,   309,   313,   314,   318,   319,   323,   324,   328,
     329,   333,   334,   338,   339,   344,   345,   346,   347,   359,
     360,   365,   366,   367,   368,   369,   382,   383,   384,   385,
     398,   399,   400,   405,   406,   407,   408,   419,   420,   421,
     422,   423,   424,   438,   439,   440,   447,   449,   450,   453,
     454,   458,   459,   462,   463,   468,   469,   472,   473,   478,
     479,   482,   483,   488,   489,   494,   495,   498,   499,   504,
     505,   510,   511,   516,   517,   522,   523,   526,   527,   532,
     533,   538,   539,   542,   543,   548,   549,   554,   555,   560,
     561,   564,   565,   570,   571,   574,   575,   579,   580,   584,
     585,   587,   589,   591,   593,   595
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    82,    84,    -1,    83,    82,    -1,    -1,
      10,     5,    -1,    85,    91,    -1,    -1,    11,    47,    86,
      87,    -1,    -1,    -1,    89,    45,    88,    90,    -1,    95,
      -1,   105,    -1,    87,    -1,    -1,    -1,    12,    47,    92,
      93,    -1,    -1,   145,    94,    -1,    93,    -1,    -1,    -1,
     104,     4,    96,   102,    -1,    -1,    -1,    -1,    30,    97,
     104,     4,    98,    55,    99,   204,    -1,    -1,    -1,    31,
     100,   104,     4,   101,   102,    -1,    -1,    55,   103,   204,
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
     131,   132,    53,    -1,   204,   133,    -1,    -1,    46,   134,
     132,    -1,    -1,    -1,    -1,    46,   136,     4,   137,   135,
      -1,    -1,   139,   143,    -1,    -1,    -1,     8,   140,   141,
      -1,    -1,    54,   142,     8,    -1,    -1,    -1,    46,   144,
     139,   143,    -1,    -1,   146,    -1,   149,    -1,    -1,    -1,
      13,     4,    48,   147,   154,    49,    47,   148,   157,    15,
      45,    -1,    -1,    -1,    -1,    -1,    14,   150,   104,     4,
     151,    48,   152,   154,    49,    47,   153,   157,    16,    45,
      -1,    89,   155,    -1,    -1,    -1,    46,   156,    89,   155,
      -1,    -1,   158,   157,    -1,    -1,   161,    -1,   173,    -1,
     178,    -1,   188,    -1,   191,    -1,   197,    -1,   159,    -1,
      89,    45,    -1,    -1,    17,   160,   204,    45,    -1,   169,
     162,    45,    -1,    -1,    55,   163,   204,    -1,    -1,    56,
     164,   204,    -1,    -1,    57,   165,   204,    -1,    -1,    58,
     166,   204,    -1,    -1,    59,   167,   204,    -1,    -1,    60,
     168,   204,    -1,    -1,     4,   170,   171,    -1,    -1,    50,
     172,   138,    51,    -1,    -1,    -1,    -1,    32,    48,   174,
     204,    49,    47,   175,   157,   176,    41,    45,    -1,    -1,
      33,    47,   177,   157,    -1,    -1,    -1,    -1,    -1,    37,
      48,   179,     4,   180,    49,    47,   181,   182,   186,    44,
      45,    -1,    -1,    -1,    -1,    38,    48,   183,   204,    49,
      47,   184,   157,    39,    45,   185,   182,    -1,    -1,    -1,
      40,    47,   187,   157,    -1,    -1,    -1,    -1,    36,    48,
     189,   204,    49,    47,   190,   157,    43,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    34,   192,     4,   193,    35,   194,
       4,   195,    47,   196,   157,    42,    45,    -1,    -1,    -1,
       4,   198,    48,   199,   200,    49,    -1,   201,    -1,    -1,
     204,   202,    -1,    -1,    46,   203,   201,    -1,    -1,   207,
     205,    -1,    -1,    65,   206,   207,   205,    -1,    -1,   210,
     208,    -1,    -1,    64,   209,   210,   208,    -1,    -1,   214,
     211,    -1,    -1,    68,   212,   214,   211,    -1,    -1,    69,
     213,   214,   211,    -1,    -1,   220,   215,    -1,    -1,    66,
     216,   220,   215,    -1,    -1,    67,   217,   220,   215,    -1,
      -1,    75,   218,   220,   215,    -1,    -1,    76,   219,   220,
     215,    -1,    -1,   224,   221,    -1,    -1,    71,   222,   224,
     221,    -1,    -1,    70,   223,   224,   221,    -1,    -1,   229,
     225,    -1,    -1,    72,   226,   229,   225,    -1,    -1,    73,
     227,   229,   225,    -1,    -1,    74,   228,   229,   225,    -1,
      -1,   232,   230,    -1,    -1,    77,   231,   232,   230,    -1,
      -1,   236,   233,    -1,    -1,    63,   234,   236,    -1,    -1,
      70,   235,   236,    -1,    -1,     8,    -1,     9,    -1,     7,
      -1,     5,    -1,     4,    -1,   197,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   109,   110,   114,   118,   122,   122,   124,
     129,   129,   133,   134,   138,   139,   144,   144,   145,   149,
     153,   154,   160,   160,   161,   161,   161,   161,   162,   162,
     162,   166,   166,   167,   171,   172,   173,   174,   175,   176,
     180,   180,   180,   180,   180,   181,   181,   181,   182,   182,
     182,   182,   182,   183,   183,   183,   183,   187,   188,   193,
     193,   198,   198,   198,   202,   203,   208,   208,   213,   214,
     218,   218,   218,   223,   227,   227,   228,   232,   232,   232,
     233,   237,   238,   242,   242,   246,   246,   247,   251,   251,
     252,   256,   257,   261,   261,   261,   267,   267,   267,   267,
     267,   273,   274,   278,   278,   279,   283,   284,   288,   289,
     290,   291,   292,   293,   294,   295,   299,   299,   303,   307,
     307,   308,   308,   309,   309,   310,   310,   311,   311,   312,
     312,   316,   316,   321,   321,   322,   326,   326,   326,   333,
     333,   334,   338,   338,   338,   338,   345,   345,   347,   345,
     349,   353,   353,   354,   358,   358,   358,   364,   364,   364,
     364,   364,   364,   370,   370,   370,   374,   375,   379,   383,
     383,   384,   388,   392,   392,   393,   397,   401,   401,   402,
     406,   410,   410,   411,   411,   412,   416,   420,   420,   421,
     421,   422,   422,   423,   423,   424,   428,   432,   432,   433,
     433,   434,   438,   442,   442,   443,   443,   444,   444,   445,
     449,   453,   453,   454,   458,   462,   462,   463,   463,   464,
     468,   469,   470,   471,   472,   473
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
  "program_body", "variable_section", "$@1", "variable_declarations",
  "$@2", "variable_declaration", "variable_declarations_tail",
  "subprogram_section", "$@3", "subprogram_declarations",
  "subprogram_declarations_tail", "simple_variable_declaration", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "simple_variable_declaration_value",
  "$@10", "type", "compost_variable_declaration", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "matrix_assignment", "matrix_assignment_aux", "$@24",
  "matrix_assignment_aux_aux", "$@25", "$@26", "values_group_list",
  "values_group_list_aux", "$@27", "set_assignment", "set_assignment_aux",
  "$@28", "$@29", "set_assignment_aux_aux", "values_list", "$@30",
  "identifier_list", "$@31", "$@32", "dimensions", "range", "$@33",
  "range_tail", "$@34", "dimensions_tail", "$@35",
  "subprogram_declaration", "procedure_declaration", "$@36", "$@37",
  "function_declaration", "$@38", "$@39", "$@40", "$@41", "parameter_list",
  "parameter_list_tail", "$@42", "statement_list", "statement",
  "return_statement", "$@43", "assignment_statement",
  "assignment_statement_tail", "$@44", "$@45", "$@46", "$@47", "$@48",
  "$@49", "destination", "$@50", "identifier_tail", "$@51", "if_statement",
  "$@52", "$@53", "else_clausule", "$@54", "switch_statement", "$@55",
  "$@56", "$@57", "case_clasule", "$@58", "$@59", "$@60", "other_clasule",
  "$@61", "while_statement", "$@62", "$@63", "for_statement", "$@64",
  "$@65", "$@66", "$@67", "$@68", "subprogram_call", "$@69", "$@70",
  "argument_list", "argument_list_aux", "argument_list_tail", "$@71",
  "expression", "term_or_tail", "$@72", "term_or", "term_and_tail", "$@73",
  "term_and", "term_bool_comparison_tail", "$@74", "$@75",
  "term_bool_comparison", "term_arit_comparison_tail", "$@76", "$@77",
  "$@78", "$@79", "term_arit_comparison", "term_tail", "$@80", "$@81",
  "term", "factor_tail", "$@82", "$@83", "$@84", "factor", "expo_tail",
  "$@85", "expo", "negation_unsub_tail", "$@86", "$@87", "negation_unsub", 0
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
     135,   138,   138,   140,   139,   142,   141,   141,   144,   143,
     143,   145,   145,   147,   148,   146,   150,   151,   152,   153,
     149,   154,   154,   156,   155,   155,   157,   157,   158,   158,
     158,   158,   158,   158,   158,   158,   160,   159,   161,   163,
     162,   164,   162,   165,   162,   166,   162,   167,   162,   168,
     162,   170,   169,   172,   171,   171,   174,   175,   173,   177,
     176,   176,   179,   180,   181,   178,   183,   184,   185,   182,
     182,   187,   186,   186,   189,   190,   188,   192,   193,   194,
     195,   196,   191,   198,   199,   197,   200,   200,   201,   203,
     202,   202,   204,   206,   205,   205,   207,   209,   208,   208,
     210,   212,   211,   213,   211,   211,   214,   216,   215,   217,
     215,   218,   215,   219,   215,   215,   220,   222,   221,   223,
     221,   221,   224,   226,   225,   227,   225,   228,   225,   225,
     229,   231,   230,   230,   232,   234,   233,   235,   233,   233,
     236,   236,   236,   236,   236,   236
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
       0,     2,     0,     0,     3,     0,     3,     0,     0,     4,
       0,     1,     1,     0,     0,    11,     0,     0,     0,     0,
      14,     2,     0,     0,     4,     0,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     4,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     4,     0,     0,     0,    11,     0,
       4,     0,     0,     0,     0,    12,     0,     0,     0,    12,
       0,     0,     4,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    13,     0,     0,     6,     1,     0,     2,     0,
       3,     0,     2,     0,     4,     0,     2,     0,     4,     0,
       2,     0,     4,     0,     4,     0,     2,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     2,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     4,     0,
       2,     0,     4,     0,     2,     0,     3,     0,     3,     0,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     4,     5,     1,     0,     2,    18,
       3,     7,     0,     6,     0,    16,    39,    34,    36,    37,
       0,    38,    48,    53,    45,    40,    24,    28,     8,     0,
      12,     0,    13,     0,    35,     0,     0,     0,     0,     0,
       0,    10,    22,     0,    96,    17,    21,    91,    92,    49,
      54,     0,     0,     0,     0,    15,    33,     0,     0,    20,
      19,     0,     0,    46,    41,    25,    29,    14,    11,    31,
      23,    93,     0,    50,    55,    69,    82,     0,    33,     0,
     102,    97,     0,     0,    70,    47,    68,    83,     0,    90,
      26,    30,   224,   223,   222,   220,   221,   225,    32,   175,
     179,   185,   195,   201,   209,   213,   219,   105,     0,     0,
      51,     0,     0,    87,    42,    88,    81,     0,     0,   173,
     172,   177,   176,   181,   183,   180,   187,   189,   191,   193,
     186,   199,   197,   196,   203,   205,   207,   202,   211,   210,
     215,   217,   214,   103,   101,     0,    98,    80,    56,    71,
      85,    84,     0,     0,    27,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,   102,    77,     0,     0,     0,    43,
      90,   167,   175,   179,   185,   185,   195,   195,   195,   195,
     201,   201,   209,   209,   209,   213,   216,   218,   105,   107,
       0,     0,    52,     0,    76,    86,    58,    89,     0,   166,
     171,   174,   178,   182,   184,   188,   190,   192,   194,   200,
     198,   204,   206,   208,   212,   104,   131,   116,     0,   157,
       0,     0,     0,     0,   107,   114,   108,     0,   109,   110,
     111,   112,   113,     0,    78,    72,    74,    73,    59,    44,
      57,   165,   169,   168,   135,     0,   136,     0,   154,   142,
     115,     0,   106,   119,   121,   123,   125,   127,   129,     0,
      99,    80,     0,     0,     0,   133,   132,     0,     0,   158,
       0,     0,    95,     0,     0,     0,     0,     0,     0,   118,
     107,    79,    75,    61,    60,   170,    82,   117,     0,     0,
       0,   143,   120,   122,   124,   126,   128,   130,     0,     0,
       0,     0,   159,     0,     0,     0,     0,   134,   137,     0,
     155,     0,   100,    62,   107,   160,   107,   144,    65,   141,
       0,     0,   150,    66,    63,    64,     0,     0,   161,     0,
       0,   153,     0,   139,     0,   107,   156,   146,     0,     0,
      67,   107,   138,     0,     0,   151,     0,   140,     0,     0,
     107,   145,   162,     0,   152,   147,   107,     0,     0,   148,
     150,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    14,    28,    55,   232,
      68,    13,    33,    45,    60,    30,    56,    39,    77,   117,
      40,    78,    70,    79,    31,    32,    38,    76,   152,   206,
      37,    75,    35,    61,    82,   147,    36,    62,    83,   249,
     250,   273,   294,   309,   328,   334,   335,   342,    85,    86,
     112,   177,   203,   247,   272,   176,   201,   271,    88,    89,
     113,   151,   178,   116,   153,    46,    47,    80,   199,    48,
      58,   109,   174,   290,   108,   144,   172,   233,   234,   235,
     255,   236,   269,   283,   284,   285,   286,   287,   288,   237,
     254,   276,   296,   238,   278,   324,   337,   351,   239,   281,
     314,   332,   341,   354,   366,   370,   349,   360,   240,   280,
     326,   241,   257,   299,   319,   330,   345,    97,   118,   181,
     208,   209,   253,   274,   204,   120,   156,    99,   122,   157,
     100,   125,   158,   159,   101,   130,   160,   161,   162,   163,
     102,   133,   165,   164,   103,   137,   166,   167,   168,   104,
     139,   169,   105,   142,   170,   171,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -271
static const yytype_int16 yypact[] =
{
      12,    13,    30,    24,    12,  -271,  -271,   -10,  -271,    38,
    -271,  -271,    26,  -271,     1,  -271,  -271,  -271,  -271,  -271,
      34,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,    44,
    -271,    89,  -271,    54,  -271,    91,    97,    29,    29,    29,
      29,  -271,  -271,   103,  -271,  -271,    54,  -271,  -271,  -271,
    -271,   110,    69,   123,   125,     1,    76,    84,    29,  -271,
    -271,    87,    88,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   129,  -271,  -271,    82,   130,    85,    76,     8,
       1,  -271,   135,     1,  -271,  -271,  -271,  -271,    90,    96,
    -271,  -271,    95,  -271,  -271,  -271,  -271,  -271,  -271,    79,
      81,    15,   -21,     0,     2,    71,   -56,   100,   101,   104,
    -271,   121,    99,   102,  -271,  -271,  -271,     8,   106,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,   108,  -271,   111,  -271,  -271,
    -271,  -271,   154,   130,  -271,  -271,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     1,  -271,     1,  -271,   131,     8,   151,  -271,
      96,     8,    79,    81,    15,    15,   -21,   -21,   -21,   -21,
       0,     0,     2,     2,     2,    71,  -271,  -271,   100,    86,
     115,   161,  -271,   113,   124,  -271,   112,  -271,   120,  -271,
     126,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,    95,  -271,   127,  -271,
     132,   133,   128,   156,    86,  -271,  -271,     6,  -271,  -271,
    -271,  -271,  -271,   136,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,   134,     8,  -271,   170,  -271,  -271,
    -271,   137,  -271,  -271,  -271,  -271,  -271,  -271,  -271,   140,
    -271,   111,     8,   138,     8,  -271,  -271,   141,     8,  -271,
       8,   173,  -271,     8,     8,     8,     8,     8,     8,  -271,
      86,  -271,  -271,  -271,  -271,  -271,   130,  -271,   139,   143,
     142,  -271,  -271,  -271,  -271,  -271,  -271,  -271,   163,     8,
     145,   146,  -271,   147,   148,   144,   149,  -271,  -271,   183,
    -271,   153,  -271,  -271,    86,  -271,    86,  -271,   152,   159,
     164,   160,   172,  -271,  -271,  -271,   165,   174,  -271,   168,
     166,   176,   138,  -271,   175,    86,  -271,  -271,   171,   177,
    -271,    86,  -271,   180,     8,  -271,   178,  -271,   179,   181,
      86,  -271,  -271,   182,  -271,  -271,    86,   186,   187,  -271,
     172,  -271
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,   213,  -271,  -271,  -271,  -271,   -50,  -271,   -11,
    -271,  -271,  -271,   185,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   150,  -271,   -29,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -123,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -270,  -271,  -271,   -45,  -271,  -271,   -69,    80,
    -271,  -271,  -271,    55,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,    60,    39,  -271,  -230,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -134,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -198,  -271,  -271,
    -271,   -36,  -271,  -271,   -79,    57,  -271,    92,    58,  -271,
      83,   -99,  -271,  -271,   -71,  -146,  -271,  -271,  -271,  -271,
    -104,   -93,  -271,  -271,   -65,  -115,  -271,  -271,  -271,   -86,
      47,  -271,    74,  -271,  -271,  -271,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -164
static const yytype_int16 yytable[] =
{
      98,   242,   292,    29,   262,    67,    16,   140,    51,    52,
      53,    54,    92,    93,   141,    94,    95,    96,     5,    17,
      18,    19,     1,    20,    21,    22,    23,    24,    25,    72,
       6,    26,    27,   111,    16,     7,   242,    11,   154,   316,
     215,   216,   217,   218,    29,   126,   127,    17,    18,    19,
      12,    20,    21,    34,   128,   129,   186,   187,   188,   189,
     308,   263,   264,   265,   266,   267,   268,    43,    44,   107,
     131,   132,    29,    15,   134,   135,   136,   221,   222,   223,
     192,   193,   194,   123,   124,   213,   214,   184,   185,    41,
     226,    16,   242,    42,   329,    49,   331,   219,   220,   190,
     191,    50,   210,   227,    17,    18,    19,    57,    20,    21,
      22,    23,    24,    25,    63,   353,    26,    27,   228,    64,
     229,   357,   230,   231,   196,   197,   242,    65,   242,    66,
     364,    69,    71,    81,    73,    74,   367,    84,    87,   110,
      90,   114,   115,  -163,   119,   121,   143,   242,   138,   148,
     145,   149,   146,   242,   155,   173,   150,   175,   179,   205,
     202,   198,   242,   107,   243,   244,   245,   248,   242,   251,
     246,   261,   252,   260,   279,   256,   277,   301,   312,   315,
     258,   259,   282,   270,   275,   289,   297,   325,   311,   322,
     293,   313,   336,   318,   320,   210,   317,   321,   333,   298,
     327,   300,   323,   339,   302,   303,   304,   305,   306,   307,
     340,   338,   343,   346,   347,   344,   348,    10,   355,   350,
     352,   356,   358,   361,   362,   368,   291,   310,    91,   365,
     363,    59,   369,   180,   200,   207,   371,   225,   295,   211,
     183,   212,   224,   195,     0,     0,     0,     0,   182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   359
};

static const yytype_int16 yycheck[] =
{
      79,   199,   272,    14,   234,    55,     5,    63,    37,    38,
      39,    40,     4,     5,    70,     7,     8,     9,     5,    18,
      19,    20,    10,    22,    23,    24,    25,    26,    27,    58,
       0,    30,    31,    83,     5,    11,   234,    47,   117,   309,
     186,   187,   188,   189,    55,    66,    67,    18,    19,    20,
      12,    22,    23,    19,    75,    76,   160,   161,   162,   163,
     290,    55,    56,    57,    58,    59,    60,    13,    14,    80,
      70,    71,    83,    47,    72,    73,    74,   192,   193,   194,
     166,   167,   168,    68,    69,   184,   185,   158,   159,    45,
       4,     5,   290,     4,   324,     4,   326,   190,   191,   164,
     165,     4,   181,    17,    18,    19,    20,     4,    22,    23,
      24,    25,    26,    27,     4,   345,    30,    31,    32,    50,
      34,   351,    36,    37,   170,   171,   324,     4,   326,     4,
     360,    55,    48,     4,    47,    47,   366,    55,     8,     4,
      55,    51,    46,    48,    65,    64,    46,   345,    77,    28,
      49,    52,    48,   351,    48,    47,    54,    46,     4,     8,
      29,   172,   360,   174,    49,     4,    53,    55,   366,    49,
      46,    15,    46,    45,     4,    48,   255,     4,    35,    16,
      48,    48,    45,    47,    50,    45,    45,     4,    49,    45,
      52,    49,    33,    47,    47,   274,    51,    49,    46,   278,
      47,   280,    53,    43,   283,   284,   285,   286,   287,   288,
      38,    47,    47,    45,    48,    41,    40,     4,    47,   342,
      45,    44,    42,    45,    45,    39,   271,   296,    78,    47,
      49,    46,    45,   153,   174,   180,   370,   198,   274,   182,
     157,   183,   195,   169,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    81,    82,    83,     5,     0,    11,    84,    85,
      82,    47,    12,    91,    86,    47,     5,    18,    19,    20,
      22,    23,    24,    25,    26,    27,    30,    31,    87,    89,
      95,   104,   105,    92,    19,   112,   116,   110,   106,    97,
     100,    45,     4,    13,    14,    93,   145,   146,   149,     4,
       4,   104,   104,   104,   104,    88,    96,     4,   150,    93,
      94,   113,   117,     4,    50,     4,     4,    87,    90,    55,
     102,    48,   104,    47,    47,   111,   107,    98,   101,   103,
     147,     4,   114,   118,    55,   128,   129,     8,   138,   139,
      55,   102,     4,     5,     7,     8,     9,   197,   204,   207,
     210,   214,   220,   224,   229,   232,   236,    89,   154,   151,
       4,    87,   130,   140,    51,    46,   143,    99,   198,    65,
     205,    64,   208,    68,    69,   211,    66,    67,    75,    76,
     215,    70,    71,   221,    72,    73,    74,   225,    77,   230,
      63,    70,   233,    46,   155,    49,    48,   115,    28,    52,
      54,   141,   108,   144,   204,    48,   206,   209,   212,   213,
     216,   217,   218,   219,   223,   222,   226,   227,   228,   231,
     234,   235,   156,    47,   152,    46,   135,   131,   142,     4,
     139,   199,   207,   210,   214,   214,   220,   220,   220,   220,
     224,   224,   229,   229,   229,   232,   236,   236,    89,   148,
     154,   136,    29,   132,   204,     8,   109,   143,   200,   201,
     204,   205,   208,   211,   211,   215,   215,   215,   215,   221,
     221,   225,   225,   225,   230,   155,     4,    17,    32,    34,
      36,    37,    89,   157,   158,   159,   161,   169,   173,   178,
     188,   191,   197,    49,     4,    53,    46,   133,    55,   119,
     120,    49,    46,   202,   170,   160,    48,   192,    48,    48,
      45,    15,   157,    55,    56,    57,    58,    59,    60,   162,
      47,   137,   134,   121,   203,    50,   171,   204,   174,     4,
     189,   179,    45,   163,   164,   165,   166,   167,   168,    45,
     153,   135,   132,    52,   122,   201,   172,    45,   204,   193,
     204,     4,   204,   204,   204,   204,   204,   204,   157,   123,
     138,    49,    35,    49,   180,    16,   132,    51,    47,   194,
      47,    49,    45,    53,   175,     4,   190,    47,   124,   157,
     195,   157,   181,    46,   125,   126,    33,   176,    47,    43,
      38,   182,   127,    47,    41,   196,    45,    48,    40,   186,
     122,   177,    45,   157,   183,    47,    44,   157,    42,   204,
     187,    45,    45,    49,   157,    47,   184,   157,    39,    45,
     185,   182
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 114 "format.y"
    { printf("import %s\n", (yyvsp[(2) - (2)].sValue)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 122 "format.y"
    { printf("\n\nvariables:\n\t"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 129 "format.y"
    { printf(";\n\n\t"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 144 "format.y"
    { printf("\nsubprograms:\n"); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 160 "format.y"
    { printf("ID"); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 161 "format.y"
    { printf("const "); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 161 "format.y"
    { printf("ID"); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 161 "format.y"
    { printf(" = "); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 162 "format.y"
    { printf("ref "); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 162 "format.y"
    { printf("ID"); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 166 "format.y"
    { printf(" = "); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 171 "format.y"
    { printf("int "); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 172 "format.y"
    { printf("double real "); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 173 "format.y"
    { printf("real "); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 174 "format.y"
    { printf("complex "); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 175 "format.y"
    { printf("boolean "); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 176 "format.y"
    { printf("string "); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 180 "format.y"
    { printf("matrix_of "); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 180 "format.y"
    { printf("[ "); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 180 "format.y"
    { printf(" ] "); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 180 "format.y"
    { printf("ID"); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 181 "format.y"
    { printf("set_of "); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 181 "format.y"
    { printf("ID"); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 182 "format.y"
    { printf("enum "); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 182 "format.y"
    { printf("ID"); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 182 "format.y"
    { printf(" : "); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 182 "format.y"
    { printf("ID"); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 182 "format.y"
    { printf(" end_enum"); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 183 "format.y"
    { printf("struct "); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 183 "format.y"
    { printf("ID"); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 183 "format.y"
    { printf(" : \n\t"); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 183 "format.y"
    { printf("end_struct"); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 193 "format.y"
    { printf(" = "); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 198 "format.y"
    { printf("{ "); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 198 "format.y"
    { printf(" }"); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 208 "format.y"
    { printf(",\n"); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 218 "format.y"
    { printf(" = "); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 218 "format.y"
    { printf("{ "); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 218 "format.y"
    { printf(" }"); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 227 "format.y"
    { printf(", "); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 232 "format.y"
    { printf(", "); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 232 "format.y"
    { printf("ID"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 242 "format.y"
    {printf("%i", (yyvsp[(1) - (1)].iValue));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 246 "format.y"
    {printf("..");}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 246 "format.y"
    {printf("%i", (yyvsp[(3) - (3)].iValue));}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 251 "format.y"
    {printf(", ");}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 261 "format.y"
    { printf("procedure ID("); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 261 "format.y"
    { printf("):\n"); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 263 "format.y"
    { printf("\nend_procedure;\n"); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 267 "format.y"
    { printf("function "); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 267 "format.y"
    { printf("ID"); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 267 "format.y"
    { printf("("); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 267 "format.y"
    { printf("):\n"); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 269 "format.y"
    { printf("\nend_function;\n"); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 278 "format.y"
    { printf(", "); }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 295 "format.y"
    { printf(";\n" ); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 299 "format.y"
    { printf("return "); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 299 "format.y"
    { printf(";\n" ); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 303 "format.y"
    { printf(";\n" ); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 307 "format.y"
    { printf(" = "); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 308 "format.y"
    { printf(" += "); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 309 "format.y"
    { printf(" -= "); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 310 "format.y"
    { printf(" *= "); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 311 "format.y"
    { printf(" /= "); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 312 "format.y"
    { printf(" %%= "); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 316 "format.y"
    { printf("ID" ); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 321 "format.y"
    { printf(" [" ); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 321 "format.y"
    { printf("] " ); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 326 "format.y"
    { printf("if (" ); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 326 "format.y"
    { printf(") :\n" ); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 329 "format.y"
    { printf("end_if;" ); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 333 "format.y"
    { printf("else: \n" ); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 338 "format.y"
    { printf("switch (" ); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 338 "format.y"
    { printf("ID" ); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 338 "format.y"
    { printf(") :" ); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 341 "format.y"
    { printf("end_switch;" ); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 345 "format.y"
    { printf("case (" ); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 345 "format.y"
    { printf(") :" ); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 347 "format.y"
    { printf("break; (" ); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 353 "format.y"
    { printf("other :" ); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 358 "format.y"
    { printf("while (" ); }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 358 "format.y"
    { printf(") :\n" ); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 360 "format.y"
    { printf("end_while;" ); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 364 "format.y"
    { printf("for " ); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 364 "format.y"
    { printf("ID" ); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 364 "format.y"
    { printf(" in " ); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 364 "format.y"
    { printf("ID" ); }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 364 "format.y"
    { printf(":\n" ); }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 366 "format.y"
    { printf("end_for;" ); }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 370 "format.y"
    { printf("ID" ); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 370 "format.y"
    { printf("( " ); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 370 "format.y"
    { printf(" )" ); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 383 "format.y"
    { printf(", " ); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 392 "format.y"
    { printf(" || " ); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 401 "format.y"
    { printf(" && " ); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 410 "format.y"
    { printf(" == "); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 411 "format.y"
    { printf(" != "); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 420 "format.y"
    { printf(" <= "); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 421 "format.y"
    { printf(" >= "); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 422 "format.y"
    { printf(" < "); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 423 "format.y"
    { printf(" > "); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 432 "format.y"
    { printf(" + "); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 433 "format.y"
    { printf(" - "); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 442 "format.y"
    { printf(" * "); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 443 "format.y"
    { printf(" / "); }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 444 "format.y"
    { printf(" %% "); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 453 "format.y"
    { printf("^"); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 462 "format.y"
    { printf("!"); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 463 "format.y"
    { printf("-"); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 468 "format.y"
    { printf("%i", (yyvsp[(1) - (1)].iValue)); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 469 "format.y"
    { printf("%f", (yyvsp[(1) - (1)].dValue)); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 470 "format.y"
    { printf("%d", (yyvsp[(1) - (1)].iValue)); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 471 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 472 "format.y"
    { printf("ID"); }
    break;



/* Line 1455 of yacc.c  */
#line 2672 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 481 "format.y"

