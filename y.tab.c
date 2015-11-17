/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "format.y"

	#include <stdio.h>
	#include "format.h"

	void yyerror (char *s);
	int yylex();


/* Line 268 of yacc.c  */
#line 80 "y.tab.c"

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
     IDENTIFIER = 258,
     STRING_LIT = 259,
     INT_NUMBER = 260,
     REAL_NUMBER = 261,
     IMAGINARY_PART = 262,
     NUMBER = 263,
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
#define IDENTIFIER 258
#define STRING_LIT 259
#define INT_NUMBER 260
#define REAL_NUMBER 261
#define IMAGINARY_PART 262
#define NUMBER 263
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 10 "format.y"

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//



/* Line 293 of yacc.c  */
#line 280 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 292 "y.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  233
/* YYNRULES -- Number of states.  */
#define YYNSTATES  390

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
       0,     0,     3,     4,     8,    11,    12,    15,    18,    19,
      24,    25,    26,    31,    33,    35,    37,    38,    39,    44,
      45,    48,    50,    51,    52,    57,    58,    59,    60,    69,
      70,    71,    78,    79,    83,    84,    86,    89,    91,    93,
      95,    97,    98,    99,   100,   101,   113,   114,   115,   122,
     123,   124,   125,   126,   137,   138,   139,   140,   149,   151,
     152,   153,   158,   161,   162,   163,   171,   172,   173,   174,
     183,   184,   186,   187,   188,   189,   196,   199,   200,   204,
     205,   206,   207,   213,   214,   217,   218,   219,   223,   224,
     228,   229,   230,   235,   236,   238,   240,   241,   242,   254,
     255,   256,   257,   258,   273,   276,   277,   278,   283,   284,
     287,   288,   290,   292,   294,   296,   298,   300,   302,   305,
     306,   311,   315,   316,   320,   321,   325,   326,   330,   331,
     335,   336,   340,   341,   345,   346,   350,   351,   356,   357,
     358,   359,   371,   372,   377,   378,   379,   380,   381,   394,
     395,   396,   397,   410,   411,   412,   417,   418,   419,   420,
     431,   432,   433,   434,   435,   436,   450,   451,   452,   453,
     462,   464,   465,   468,   469,   473,   474,   477,   478,   483,
     484,   487,   488,   493,   494,   497,   498,   503,   504,   509,
     510,   513,   514,   519,   520,   525,   526,   531,   532,   537,
     538,   541,   542,   547,   548,   553,   554,   557,   558,   563,
     564,   569,   570,   575,   576,   579,   580,   585,   586,   589,
     590,   594,   595,   597,   599,   601,   603,   604,   608,   609,
     610,   616,   617,   622
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    -1,    81,    82,    84,    -1,    83,    82,
      -1,    -1,     9,     4,    -1,    85,    91,    -1,    -1,    10,
      46,    86,    87,    -1,    -1,    -1,    89,    44,    88,    90,
      -1,    95,    -1,   105,    -1,    87,    -1,    -1,    -1,    11,
      46,    92,    93,    -1,    -1,   146,    94,    -1,    93,    -1,
      -1,    -1,   104,     3,    96,   102,    -1,    -1,    -1,    -1,
      29,    97,   104,     3,    98,    54,    99,   206,    -1,    -1,
      -1,    30,   100,   104,     3,   101,   102,    -1,    -1,    54,
     103,   206,    -1,    -1,    17,    -1,    21,    18,    -1,    18,
      -1,    19,    -1,    22,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,   106,   104,    49,   107,   139,    50,   108,     3,
     109,   119,    -1,    -1,    -1,    25,   110,   104,     3,   111,
     129,    -1,    -1,    -1,    -1,    -1,    23,   112,     3,   113,
      46,   114,     3,   115,   136,    28,    -1,    -1,    -1,    -1,
      24,   116,     3,   117,    46,   118,    87,    27,    -1,   120,
      -1,    -1,    -1,    54,   121,    51,   122,    -1,   133,    52,
      -1,    -1,    -1,    51,   123,   133,    52,   124,   125,    52,
      -1,    -1,    -1,    -1,    45,   126,    51,   127,   133,    52,
     128,   125,    -1,    -1,   130,    -1,    -1,    -1,    -1,    54,
     131,    51,   132,   133,    52,    -1,   206,   134,    -1,    -1,
      45,   135,   133,    -1,    -1,    -1,    -1,    45,   137,     3,
     138,   136,    -1,    -1,   140,   144,    -1,    -1,    -1,     5,
     141,   142,    -1,    -1,    53,   143,     5,    -1,    -1,    -1,
      45,   145,   140,   144,    -1,    -1,   147,    -1,   150,    -1,
      -1,    -1,    12,     3,    47,   148,   155,    48,    46,   149,
     158,    14,    44,    -1,    -1,    -1,    -1,    -1,    13,   151,
     104,     3,   152,    47,   153,   155,    48,    46,   154,   158,
      15,    44,    -1,    89,   156,    -1,    -1,    -1,    45,   157,
      89,   156,    -1,    -1,   159,   158,    -1,    -1,   162,    -1,
     174,    -1,   179,    -1,   189,    -1,   192,    -1,   198,    -1,
     160,    -1,    89,    44,    -1,    -1,    16,   161,   206,    44,
      -1,   170,   163,    44,    -1,    -1,    54,   164,   206,    -1,
      -1,    55,   165,   206,    -1,    -1,    56,   166,   206,    -1,
      -1,    57,   167,   206,    -1,    -1,    58,   168,   206,    -1,
      -1,    59,   169,   206,    -1,    -1,     3,   171,   172,    -1,
      -1,    49,   173,   139,    50,    -1,    -1,    -1,    -1,    31,
      47,   175,   206,    48,    46,   176,   158,   177,    40,    44,
      -1,    -1,    32,    46,   178,   158,    -1,    -1,    -1,    -1,
      -1,    36,    47,   180,     3,   181,    48,    46,   182,   183,
     187,    43,    44,    -1,    -1,    -1,    -1,    37,    47,   184,
     206,    48,    46,   185,   158,    38,    44,   186,   183,    -1,
      -1,    -1,    39,    46,   188,   158,    -1,    -1,    -1,    -1,
      35,    47,   190,   206,    48,    46,   191,   158,    42,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    33,   193,     3,   194,
      34,   195,     3,   196,    46,   197,   158,    41,    44,    -1,
      -1,    -1,    -1,     3,   199,    47,   200,   202,    48,   201,
      44,    -1,   203,    -1,    -1,   206,   204,    -1,    -1,    45,
     205,   203,    -1,    -1,   209,   207,    -1,    -1,    64,   208,
     209,   207,    -1,    -1,   212,   210,    -1,    -1,    63,   211,
     212,   210,    -1,    -1,   216,   213,    -1,    -1,    67,   214,
     216,   213,    -1,    -1,    68,   215,   216,   213,    -1,    -1,
     222,   217,    -1,    -1,    65,   218,   222,   217,    -1,    -1,
      66,   219,   222,   217,    -1,    -1,    74,   220,   222,   217,
      -1,    -1,    75,   221,   222,   217,    -1,    -1,   226,   223,
      -1,    -1,    70,   224,   226,   223,    -1,    -1,    69,   225,
     226,   223,    -1,    -1,   231,   227,    -1,    -1,    71,   228,
     231,   227,    -1,    -1,    72,   229,   231,   227,    -1,    -1,
      73,   230,   231,   227,    -1,    -1,   234,   232,    -1,    -1,
      76,   233,   234,   232,    -1,    -1,   237,   235,    -1,    -1,
      62,   236,   237,    -1,    -1,     5,    -1,     6,    -1,     7,
      -1,     4,    -1,    -1,     3,   238,   239,    -1,    -1,    -1,
      49,   240,   206,   241,    50,    -1,    -1,    47,   242,   202,
      48,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   104,   113,   114,   118,   122,   126,   126,
     128,   133,   133,   137,   138,   142,   143,   148,   148,   149,
     153,   157,   158,   165,   164,   183,   183,   183,   183,   184,
     184,   184,   188,   188,   189,   193,   194,   195,   196,   197,
     198,   202,   202,   202,   202,   202,   203,   203,   203,   204,
     204,   204,   204,   204,   205,   205,   205,   205,   209,   210,
     215,   215,   219,   220,   220,   220,   225,   225,   225,   225,
     226,   231,   232,   236,   236,   236,   241,   245,   245,   246,
     250,   250,   250,   251,   255,   256,   260,   260,   264,   264,
     265,   269,   269,   270,   274,   275,   279,   279,   279,   294,
     294,   294,   294,   294,   309,   310,   314,   314,   315,   319,
     320,   324,   325,   326,   327,   328,   329,   330,   331,   335,
     335,   339,   343,   343,   344,   344,   345,   345,   346,   346,
     347,   347,   348,   348,   352,   352,   357,   357,   358,   362,
     362,   362,   369,   369,   370,   374,   374,   374,   374,   381,
     381,   383,   381,   385,   389,   389,   390,   394,   394,   394,
     400,   400,   400,   400,   400,   400,   406,   406,   406,   406,
     410,   411,   415,   419,   419,   420,   424,   428,   428,   429,
     433,   437,   437,   438,   442,   446,   446,   447,   447,   448,
     452,   456,   456,   457,   457,   458,   458,   459,   459,   460,
     464,   468,   468,   469,   469,   470,   474,   478,   478,   479,
     479,   480,   480,   481,   485,   489,   489,   490,   494,   498,
     498,   499,   503,   504,   505,   506,   507,   507,   511,   511,
     511,   512,   512,   513
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LIT", "INT_NUMBER",
  "REAL_NUMBER", "IMAGINARY_PART", "NUMBER", "IMPORT", "VARIABLES_SECTION",
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
  "EXPO_OP", "DOT_OP", "COMMENT", "$accept", "program", "$@1",
  "program_header", "import", "program_body", "variable_section", "$@2",
  "variable_declarations", "$@3", "variable_declaration",
  "variable_declarations_tail", "subprogram_section", "$@4",
  "subprogram_declarations", "subprogram_declarations_tail",
  "simple_variable_declaration", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "simple_variable_declaration_value", "$@11", "type",
  "compost_variable_declaration", "$@12", "$@13", "$@14", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "matrix_assignment", "matrix_assignment_aux", "$@25",
  "matrix_assignment_aux_aux", "$@26", "$@27",
  "matrix_assignment_aux_aux_aux", "$@28", "$@29", "$@30",
  "set_assignment", "set_assignment_aux", "$@31", "$@32",
  "set_assignment_aux_aux", "values_list", "$@33", "identifier_list",
  "$@34", "$@35", "dimensions", "range", "$@36", "range_tail", "$@37",
  "dimensions_tail", "$@38", "subprogram_declaration",
  "procedure_declaration", "$@39", "$@40", "function_declaration", "$@41",
  "$@42", "$@43", "$@44", "parameter_list", "parameter_list_tail", "$@45",
  "statement_list", "statement", "return_statement", "$@46",
  "assignment_statement", "assignment_statement_tail", "$@47", "$@48",
  "$@49", "$@50", "$@51", "$@52", "destination", "$@53", "identifier_tail",
  "$@54", "if_statement", "$@55", "$@56", "else_clausule", "$@57",
  "switch_statement", "$@58", "$@59", "$@60", "case_clasule", "$@61",
  "$@62", "$@63", "other_clasule", "$@64", "while_statement", "$@65",
  "$@66", "for_statement", "$@67", "$@68", "$@69", "$@70", "$@71",
  "subprogram_call", "$@72", "$@73", "$@74", "argument_list",
  "argument_list_aux", "argument_list_tail", "$@75", "expression",
  "term_or_tail", "$@76", "term_or", "term_and_tail", "$@77", "term_and",
  "term_bool_comparison_tail", "$@78", "$@79", "term_bool_comparison",
  "term_arit_comparison_tail", "$@80", "$@81", "$@82", "$@83",
  "term_arit_comparison", "term_tail", "$@84", "$@85", "term",
  "factor_tail", "$@86", "$@87", "$@88", "factor", "expo_tail", "$@89",
  "expo", "negation_unsub_tail", "$@90", "negation_unsub", "$@91",
  "negation_unsub_aux", "$@92", "$@93", "$@94", 0
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
       0,    79,    81,    80,    82,    82,    83,    84,    86,    85,
      85,    88,    87,    89,    89,    90,    90,    92,    91,    91,
      93,    94,    94,    96,    95,    97,    98,    99,    95,   100,
     101,    95,   103,   102,   102,   104,   104,   104,   104,   104,
     104,   106,   107,   108,   109,   105,   110,   111,   105,   112,
     113,   114,   115,   105,   116,   117,   118,   105,   119,   119,
     121,   120,   122,   123,   124,   122,   126,   127,   128,   125,
     125,   129,   129,   131,   132,   130,   133,   135,   134,   134,
     137,   138,   136,   136,   139,   139,   141,   140,   143,   142,
     142,   145,   144,   144,   146,   146,   148,   149,   147,   151,
     152,   153,   154,   150,   155,   155,   157,   156,   156,   158,
     158,   159,   159,   159,   159,   159,   159,   159,   159,   161,
     160,   162,   164,   163,   165,   163,   166,   163,   167,   163,
     168,   163,   169,   163,   171,   170,   173,   172,   172,   175,
     176,   174,   178,   177,   177,   180,   181,   182,   179,   184,
     185,   186,   183,   183,   188,   187,   187,   190,   191,   189,
     193,   194,   195,   196,   197,   192,   199,   200,   201,   198,
     202,   202,   203,   205,   204,   204,   206,   208,   207,   207,
     209,   211,   210,   210,   212,   214,   213,   215,   213,   213,
     216,   218,   217,   219,   217,   220,   217,   221,   217,   217,
     222,   224,   223,   225,   223,   223,   226,   228,   227,   229,
     227,   230,   227,   227,   231,   233,   232,   232,   234,   236,
     235,   235,   237,   237,   237,   237,   238,   237,   240,   241,
     239,   242,   239,   239
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     0,     2,     2,     0,     4,
       0,     0,     4,     1,     1,     1,     0,     0,     4,     0,
       2,     1,     0,     0,     4,     0,     0,     0,     8,     0,
       0,     6,     0,     3,     0,     1,     2,     1,     1,     1,
       1,     0,     0,     0,     0,    11,     0,     0,     6,     0,
       0,     0,     0,    10,     0,     0,     0,     8,     1,     0,
       0,     4,     2,     0,     0,     7,     0,     0,     0,     8,
       0,     1,     0,     0,     0,     6,     2,     0,     3,     0,
       0,     0,     5,     0,     2,     0,     0,     3,     0,     3,
       0,     0,     4,     0,     1,     1,     0,     0,    11,     0,
       0,     0,     0,    14,     2,     0,     0,     4,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       4,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     4,     0,     0,
       0,    11,     0,     4,     0,     0,     0,     0,    12,     0,
       0,     0,    12,     0,     0,     4,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     8,
       1,     0,     2,     0,     3,     0,     2,     0,     4,     0,
       2,     0,     4,     0,     2,     0,     4,     0,     4,     0,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       2,     0,     4,     0,     4,     0,     2,     0,     4,     0,
       4,     0,     4,     0,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     1,     1,     1,     0,     3,     0,     0,
       5,     0,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,    10,     5,     6,     0,     3,
      19,     4,     8,     0,     7,     0,    17,    35,    37,    38,
      40,     0,    39,    49,    54,    46,    41,    25,    29,     9,
       0,    13,     0,    14,     0,    36,     0,     0,     0,     0,
       0,     0,    11,    23,     0,    99,    18,    22,    94,    95,
      50,    55,     0,     0,     0,     0,    16,    34,     0,     0,
      21,    20,     0,     0,    47,    42,    26,    30,    15,    12,
      32,    24,    96,     0,    51,    56,    72,    85,     0,    34,
       0,   105,   100,     0,     0,    73,    48,    71,    86,     0,
      93,    27,    31,   226,   225,   222,   223,   224,    33,   179,
     183,   189,   199,   205,   213,   217,   221,   108,     0,     0,
      52,     0,     0,    90,    43,    91,    84,     0,   233,   177,
     176,   181,   180,   185,   187,   184,   191,   193,   195,   197,
     190,   203,   201,   200,   207,   209,   211,   206,   215,   214,
     219,   218,   106,   104,     0,   101,    83,    57,    74,    88,
      87,     0,     0,    28,   231,   228,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,   105,    80,     0,     0,     0,    44,
      93,   171,     0,   179,   183,   189,   189,   199,   199,   199,
     199,   205,   205,   213,   213,   213,   217,   220,   108,   110,
       0,     0,    53,     0,    79,    89,    59,    92,     0,   170,
     175,   229,   178,   182,   186,   188,   192,   194,   196,   198,
     204,   202,   208,   210,   212,   216,   107,   134,   119,     0,
     160,     0,     0,     0,     0,   110,   117,   111,     0,   112,
     113,   114,   115,   116,     0,    81,    75,    77,    76,    60,
      45,    58,   232,   173,   172,     0,   138,     0,     0,   139,
       0,   157,   145,   118,     0,   109,   122,   124,   126,   128,
     130,   132,     0,   102,    83,     0,     0,     0,   230,   136,
     135,   167,     0,     0,   161,     0,     0,    98,     0,     0,
       0,     0,     0,     0,   121,   110,    82,    78,     0,   174,
      85,   171,   120,     0,     0,     0,   146,   123,   125,   127,
     129,   131,   133,     0,    63,    61,     0,     0,     0,     0,
     162,     0,     0,     0,     0,    62,   137,   168,   140,     0,
     158,     0,   103,     0,     0,   110,   163,   110,   147,    64,
     169,   144,     0,     0,   153,    70,     0,     0,   164,     0,
       0,   156,    66,     0,   142,     0,   110,   159,   149,     0,
       0,     0,    65,   110,   141,     0,     0,   154,     0,    67,
     143,     0,     0,   110,   148,     0,   165,     0,   155,     0,
     150,    68,   110,    70,     0,    69,     0,   151,   153,   152
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     9,    10,    15,    29,    56,
     233,    69,    14,    34,    46,    61,    31,    57,    40,    78,
     117,    41,    79,    71,    80,    32,    33,    39,    77,   151,
     206,    38,    76,    36,    62,    83,   146,    37,    63,    84,
     250,   251,   276,   315,   324,   345,   353,   361,   375,   383,
      86,    87,   112,   177,   203,   248,   275,   176,   201,   274,
      89,    90,   113,   150,   178,   116,   152,    47,    48,    81,
     199,    49,    59,   109,   174,   295,   108,   143,   172,   234,
     235,   236,   258,   237,   272,   288,   289,   290,   291,   292,
     293,   238,   256,   280,   300,   239,   283,   335,   347,   363,
     240,   286,   322,   344,   351,   366,   382,   388,   360,   373,
     241,   285,   337,   242,   260,   304,   329,   342,   356,   243,
     257,   301,   334,   208,   209,   254,   277,   204,   120,   157,
      99,   122,   158,   100,   125,   159,   160,   101,   130,   161,
     162,   163,   164,   102,   133,   166,   165,   103,   137,   167,
     168,   169,   104,   139,   170,   105,   141,   171,   106,   118,
     156,   182,   255,   181
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -272
static const yytype_int16 yypact[] =
{
    -272,    31,    17,  -272,    32,    69,    17,  -272,    54,  -272,
      96,  -272,  -272,    73,  -272,    26,  -272,  -272,  -272,  -272,
    -272,   102,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
      77,  -272,   119,  -272,    45,  -272,   120,   122,    56,    56,
      56,    56,  -272,  -272,   123,  -272,  -272,    45,  -272,  -272,
    -272,  -272,   124,    79,   126,   127,    26,    78,    86,    56,
    -272,  -272,    88,    89,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   133,  -272,  -272,    83,   134,    84,    78,
      85,    26,  -272,   137,    26,  -272,  -272,  -272,  -272,    92,
      98,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,    80,
      82,     1,     6,    40,   -11,    70,    87,   103,    99,   104,
    -272,   125,   105,   100,  -272,  -272,  -272,    85,    59,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,   108,  -272,   110,  -272,  -272,  -272,
    -272,   154,   134,  -272,  -272,  -272,  -272,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    26,  -272,    26,  -272,   131,    85,   156,  -272,
      98,    85,    85,    80,    82,     1,     1,     6,     6,     6,
       6,    40,    40,   -11,   -11,   -11,    70,  -272,   103,    -1,
     114,   160,  -272,   112,   121,  -272,   111,  -272,   128,  -272,
     129,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,   130,  -272,   132,
    -272,   135,   136,   140,   153,    -1,  -272,  -272,    28,  -272,
    -272,  -272,  -272,  -272,   139,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,   118,   138,   141,    85,  -272,
     166,  -272,  -272,  -272,   142,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,   145,  -272,   110,    85,   143,    85,  -272,  -272,
    -272,  -272,   146,    85,  -272,    85,   167,  -272,    85,    85,
      85,    85,    85,    85,  -272,    -1,  -272,  -272,     3,  -272,
     134,    85,  -272,   144,   147,   148,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   157,  -272,  -272,   149,   150,   151,   152,
    -272,   158,   159,   162,    85,  -272,  -272,  -272,  -272,   168,
    -272,   169,  -272,   164,   170,    -1,  -272,    -1,  -272,  -272,
    -272,   161,   171,   176,   165,   174,   177,   155,  -272,   178,
     173,   185,  -272,   175,  -272,   181,    -1,  -272,  -272,   180,
     186,   179,  -272,    -1,  -272,   187,    85,  -272,   188,  -272,
    -272,   189,   183,    -1,  -272,    85,  -272,   190,  -272,   182,
    -272,  -272,    -1,   174,   197,  -272,   193,  -272,   165,  -272
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,  -272,   232,  -272,  -272,  -272,  -272,   -51,  -272,
     -14,  -272,  -272,  -272,   192,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,    94,  -272,     0,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -208,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -271,  -272,  -272,   -94,  -272,  -272,
    -109,    90,  -272,  -272,  -272,    60,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,    67,    46,  -272,  -232,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -145,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   -56,   -31,  -272,  -272,   -80,    64,  -272,
      91,    65,  -272,    93,   -74,  -272,  -272,   -46,  -176,  -272,
    -272,  -272,  -272,   -68,   -76,  -272,  -272,   -48,  -129,  -272,
    -272,  -272,   -70,    57,  -272,    95,  -272,  -272,    81,  -272,
    -272,  -272,  -272,  -272
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -167
static const yytype_int16 yytable[] =
{
      98,    30,   227,   265,   297,    68,    93,    94,    95,    96,
      97,   216,   217,   218,   219,   228,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     4,   316,    27,    28,
     229,     3,   230,   111,   231,   232,     7,   153,    52,    53,
      54,    55,    30,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   333,   314,    27,    28,    44,    45,    73,
     134,   135,   136,   313,   222,   223,   224,   107,   123,   124,
      30,   126,   127,    17,    18,    19,    20,    21,    22,     8,
     128,   129,   266,   267,   268,   269,   270,   271,    93,    94,
      95,    96,    97,   187,   188,   189,   190,   193,   194,   195,
      12,   210,   211,   341,   379,   343,   154,    13,   155,   131,
     132,   214,   215,   185,   186,   220,   221,   191,   192,    16,
      35,    42,    43,    50,   365,    51,    58,    64,    65,    66,
      67,   370,    70,    72,    74,    75,    82,    85,    91,    88,
     110,   378,   114,   115,   119,   121,   138,   144,   142,   140,
     384,   145,   147,   149,   173,   175,   148,   179,   198,   202,
     107,   205,   244,   245,   246,   249,   247,   264,   278,   284,
     306,   336,   323,    92,   253,   385,   252,  -166,   282,   259,
     296,   320,   261,   262,   263,   273,   287,   279,   281,   294,
     302,   317,   319,   346,   298,   355,   321,   210,   328,   327,
     326,   325,   350,   303,   330,   305,   332,   331,   307,   308,
     309,   310,   311,   312,   340,   338,   339,   348,   349,   352,
     358,   210,   357,   354,   359,   364,   367,   362,   371,   368,
     369,   377,   374,   376,   381,   386,   380,   387,    11,    60,
     207,   200,   180,   389,   226,   318,   299,   212,   183,   213,
       0,   184,   197,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-272))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      80,    15,     3,   235,   275,    56,     3,     4,     5,     6,
       7,   187,   188,   189,   190,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     9,   298,    29,    30,
      31,     0,    33,    84,    35,    36,     4,   117,    38,    39,
      40,    41,    56,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   324,    51,    29,    30,    12,    13,    59,
      71,    72,    73,   295,   193,   194,   195,    81,    67,    68,
      84,    65,    66,    17,    18,    19,    20,    21,    22,    10,
      74,    75,    54,    55,    56,    57,    58,    59,     3,     4,
       5,     6,     7,   161,   162,   163,   164,   167,   168,   169,
      46,   181,   182,   335,   375,   337,    47,    11,    49,    69,
      70,   185,   186,   159,   160,   191,   192,   165,   166,    46,
      18,    44,     3,     3,   356,     3,     3,     3,    49,     3,
       3,   363,    54,    47,    46,    46,     3,    54,    54,     5,
       3,   373,    50,    45,    64,    63,    76,    48,    45,    62,
     382,    47,    27,    53,    46,    45,    51,     3,   172,    28,
     174,     5,    48,     3,    52,    54,    45,    14,    50,     3,
       3,     3,    15,    79,    45,   383,    48,    47,   258,    47,
     274,    34,    47,    47,    44,    46,    44,    49,    47,    44,
      44,   300,    48,    32,    51,    40,    48,   277,    46,    48,
      50,    52,    37,   283,    46,   285,    44,    48,   288,   289,
     290,   291,   292,   293,    44,    46,    52,    46,    42,    45,
      47,   301,    44,    46,    39,    44,    46,    52,    41,    43,
      51,    48,    44,    44,    52,    38,    46,    44,     6,    47,
     180,   174,   152,   388,   198,   301,   277,   183,   157,   184,
      -1,   158,   171,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   366
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,    81,     0,     9,    82,    83,     4,    10,    84,
      85,    82,    46,    11,    91,    86,    46,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    29,    30,    87,
      89,    95,   104,   105,    92,    18,   112,   116,   110,   106,
      97,   100,    44,     3,    12,    13,    93,   146,   147,   150,
       3,     3,   104,   104,   104,   104,    88,    96,     3,   151,
      93,    94,   113,   117,     3,    49,     3,     3,    87,    90,
      54,   102,    47,   104,    46,    46,   111,   107,    98,   101,
     103,   148,     3,   114,   118,    54,   129,   130,     5,   139,
     140,    54,   102,     3,     4,     5,     6,     7,   206,   209,
     212,   216,   222,   226,   231,   234,   237,    89,   155,   152,
       3,    87,   131,   141,    50,    45,   144,    99,   238,    64,
     207,    63,   210,    67,    68,   213,    65,    66,    74,    75,
     217,    69,    70,   223,    71,    72,    73,   227,    76,   232,
      62,   235,    45,   156,    48,    47,   115,    27,    51,    53,
     142,   108,   145,   206,    47,    49,   239,   208,   211,   214,
     215,   218,   219,   220,   221,   225,   224,   228,   229,   230,
     233,   236,   157,    46,   153,    45,   136,   132,   143,     3,
     140,   242,   240,   209,   212,   216,   216,   222,   222,   222,
     222,   226,   226,   231,   231,   231,   234,   237,    89,   149,
     155,   137,    28,   133,   206,     5,   109,   144,   202,   203,
     206,   206,   207,   210,   213,   213,   217,   217,   217,   217,
     223,   223,   227,   227,   227,   232,   156,     3,    16,    31,
      33,    35,    36,    89,   158,   159,   160,   162,   170,   174,
     179,   189,   192,   198,    48,     3,    52,    45,   134,    54,
     119,   120,    48,    45,   204,   241,   171,   199,   161,    47,
     193,    47,    47,    44,    14,   158,    54,    55,    56,    57,
      58,    59,   163,    46,   138,   135,   121,   205,    50,    49,
     172,    47,   206,   175,     3,   190,   180,    44,   164,   165,
     166,   167,   168,   169,    44,   154,   136,   133,    51,   203,
     173,   200,    44,   206,   194,   206,     3,   206,   206,   206,
     206,   206,   206,   158,    51,   122,   133,   139,   202,    48,
      34,    48,   181,    15,   123,    52,    50,    48,    46,   195,
      46,    48,    44,   133,   201,   176,     3,   191,    46,    52,
      44,   158,   196,   158,   182,   124,    32,   177,    46,    42,
      37,   183,    45,   125,    46,    40,   197,    44,    47,    39,
     187,   126,    52,   178,    44,   158,   184,    46,    43,    51,
     158,    41,   206,   188,    44,   127,    44,    48,   158,   133,
      46,    52,   185,   128,   158,   125,    38,    44,   186,   183
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
        case 2:

/* Line 1806 of yacc.c  */
#line 104 "format.y"
    {
		//declarando a tabela de símbolos no início do programa
		tabela = (Tabela *) malloc(sizeof (Tabela));
		tabela->prox = NULL;
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 109 "format.y"
    { printf("\n"); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 118 "format.y"
    { printf("import %s\n", (yyvsp[(2) - (2)].sValue)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 126 "format.y"
    { printf("\n\nvariables:\n\t"); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 133 "format.y"
    { printf(";\n\n\t"); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 148 "format.y"
    { printf("\nsubprograms:\n"); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 165 "format.y"
    {
		printf("%s", (yyvsp[(2) - (2)].sValue));
		nome_provis = (yyvsp[(2) - (2)].sValue);

		verRepeticao = findRepeatedSymbol(nome_provis, nivel, tabela);

		if (verRepeticao == 0) {
			if (op == 1) { //variável global ou subprograma
				push(nome_provis, tipo_provis, nivel, deslocamentoGlobal, tabela);
				deslocamentoGlobal++;
			} else { //variável local
				push(nome_provis, tipo_provis, nivel, deslocamentoLocal,  tabela);
				deslocamentoLocal++;
			}
		} else {
			printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", nome_provis);
		}
	}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 183 "format.y"
    { printf("const "); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 183 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 183 "format.y"
    { printf(" = "); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 184 "format.y"
    { printf("ref "); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 184 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 188 "format.y"
    { printf(" = "); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 193 "format.y"
    { printf("int ");  tipo_provis = "int";}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 194 "format.y"
    { printf("double real "); tipo_provis = "double real";}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 195 "format.y"
    { printf("real "); tipo_provis = "real";}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 196 "format.y"
    { printf("complex "); tipo_provis = "complex";}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 197 "format.y"
    { printf("boolean "); tipo_provis = "boolean";}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 198 "format.y"
    { printf("string "); tipo_provis = "string";}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 202 "format.y"
    { printf("matrix_of "); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 202 "format.y"
    { printf("[ "); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 202 "format.y"
    { printf(" ] "); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 202 "format.y"
    { printf("%s", (yyvsp[(9) - (9)].sValue)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 203 "format.y"
    { printf("set_of "); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 203 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 204 "format.y"
    { printf("enum "); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 204 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 204 "format.y"
    { printf(" : "); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 204 "format.y"
    { printf("%s", (yyvsp[(7) - (7)].sValue)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 204 "format.y"
    { printf(" end_enum"); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 205 "format.y"
    { printf("struct "); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 205 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 205 "format.y"
    { printf(" : \n\t"); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 205 "format.y"
    { printf("end_struct"); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 215 "format.y"
    { printf(" = { "); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 219 "format.y"
    { printf(" }"); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 220 "format.y"
    { printf("{ "); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 220 "format.y"
    { printf(" }"); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 220 "format.y"
    { printf(" }"); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 225 "format.y"
    { printf(", "); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 225 "format.y"
    { printf("{ "); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 225 "format.y"
    { printf(" }"); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 236 "format.y"
    { printf(" = "); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 236 "format.y"
    { printf("{ "); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 236 "format.y"
    { printf(" }"); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 245 "format.y"
    { printf(", "); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 250 "format.y"
    { printf(", "); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 250 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 260 "format.y"
    {printf("%i", (yyvsp[(1) - (1)].iValue));}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 264 "format.y"
    {printf("..");}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 264 "format.y"
    {printf("%i", (yyvsp[(3) - (3)].iValue));}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 269 "format.y"
    {printf(", ");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 279 "format.y"
    { printf("procedure %s(", (yyvsp[(2) - (3)].sValue)); nivel++; push((yyvsp[(2) - (3)].sValue), "procedure", 1, deslocamentoGlobal, tabela); deslocamentoGlobal++; op=2;}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 279 "format.y"
    { printf("):\n"); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 282 "format.y"
    {
		printf("\nend_procedure;\n");
		nivel--;
		op=1;
		for (i=1; i < deslocamentoLocal; i++) { //apaga as entradas do escopo local e zera o deslocamento
			pop(tabela);
		}
		deslocamentoLocal=1;
	}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 294 "format.y"
    { printf("function "); nivel++;}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 294 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); push((yyvsp[(4) - (4)].sValue), "function", 1, deslocamentoGlobal, tabela); deslocamentoGlobal++; op=2;}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 294 "format.y"
    { printf("("); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 294 "format.y"
    { printf("):\n"); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 297 "format.y"
    {
		printf("\nend_function;\n");
		nivel--;
		op=1;
		for (i=1; i < deslocamentoLocal; i++) { //apaga as entradas do escopo local e zera o deslocamento
			pop(tabela);
		}
		deslocamentoLocal=1;
	}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 314 "format.y"
    { printf(", "); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 331 "format.y"
    { printf(";\n" ); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 335 "format.y"
    { printf("return "); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 335 "format.y"
    { printf(";\n" ); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 339 "format.y"
    { printf(";\n" ); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 343 "format.y"
    { printf(" = "); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 344 "format.y"
    { printf(" += "); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 345 "format.y"
    { printf(" -= "); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 346 "format.y"
    { printf(" *= "); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 347 "format.y"
    { printf(" /= "); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 348 "format.y"
    { printf(" %%= "); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 352 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue) ); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 357 "format.y"
    { printf(" [" ); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 357 "format.y"
    { printf("] " ); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 362 "format.y"
    { printf("if (" ); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 362 "format.y"
    { printf(") :\n" ); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 365 "format.y"
    { printf("end_if;\n" ); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 369 "format.y"
    { printf("else: \n" ); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 374 "format.y"
    { printf("switch (" ); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 374 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue) ); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 374 "format.y"
    { printf(") :" ); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 377 "format.y"
    { printf("end_switch;" ); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 381 "format.y"
    { printf("case (" ); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 381 "format.y"
    { printf(") :" ); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 383 "format.y"
    { printf("break; (" ); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 389 "format.y"
    { printf("other :" ); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 394 "format.y"
    { printf("while (" ); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 394 "format.y"
    { printf(") :\n" ); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 396 "format.y"
    { printf("end_while;\n" ); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf("for " ); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue) ); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf(" in " ); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf("%s", (yyvsp[(7) - (7)].sValue) ); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf(":\n" ); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 402 "format.y"
    { printf("end_for;\n" ); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 406 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue) ); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 406 "format.y"
    { printf("( " ); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 406 "format.y"
    { printf(" )" ); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 406 "format.y"
    { printf(";\n" ); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 419 "format.y"
    { printf(", " ); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 428 "format.y"
    { printf(" || " ); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 437 "format.y"
    { printf(" && " ); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 446 "format.y"
    { printf(" == "); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 447 "format.y"
    { printf(" != "); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 456 "format.y"
    { printf(" <= "); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 457 "format.y"
    { printf(" >= "); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 458 "format.y"
    { printf(" < "); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 459 "format.y"
    { printf(" > "); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 468 "format.y"
    { printf(" + "); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 469 "format.y"
    { printf(" - "); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 478 "format.y"
    { printf(" * "); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 479 "format.y"
    { printf(" / "); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 480 "format.y"
    { printf(" %% "); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 489 "format.y"
    { printf("^"); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 498 "format.y"
    { printf("!"); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 503 "format.y"
    { printf("%i", (yyvsp[(1) - (1)].iValue)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 504 "format.y"
    { printf("%f", (yyvsp[(1) - (1)].dValue)); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 505 "format.y"
    { printf("%f", (yyvsp[(1) - (1)].dValue)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 506 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 507 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 511 "format.y"
    { printf("["); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 511 "format.y"
    { printf("]"); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 512 "format.y"
    { printf("( "); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 512 "format.y"
    { printf(" )"); }
    break;



/* Line 1806 of yacc.c  */
#line 2822 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 516 "format.y"


/*int main(int argc, char **argv){
        yyin = fopen( argv[1], "r" );
        yyparse();
        return 0;
}*/
void yyerror(char *msg){
        printf("\n%s\n", msg);
}

