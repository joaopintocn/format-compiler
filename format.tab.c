
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
#line 2 "format.y"

	#include <stdio.h>

	int yyerror (char *s);

	int yylex();



/* Line 189 of yacc.c  */
#line 83 "format.tab.c"

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
     REAL_NUMBER = 263,
     INT_NUMBER = 264,
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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "format.y"

	int 	iValue; 	//
	char 	cValue;		//
	char * 	sValue;		//



/* Line 214 of yacc.c  */
#line 206 "format.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "format.tab.c"

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
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNRULES -- Number of states.  */
#define YYNSTATES  290

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
      23,    24,    29,    31,    32,    33,    38,    39,    42,    44,
      45,    47,    49,    53,    59,    64,    67,    68,    70,    73,
      75,    77,    79,    81,    89,    94,   101,   107,   109,   110,
     113,   118,   120,   121,   124,   126,   127,   132,   135,   138,
     139,   143,   144,   147,   150,   153,   154,   158,   159,   161,
     163,   164,   175,   176,   188,   191,   192,   196,   197,   200,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   221,
     225,   228,   231,   234,   237,   240,   243,   246,   250,   251,
     261,   264,   265,   275,   285,   286,   290,   291,   300,   309,
     314,   316,   317,   320,   323,   324,   327,   331,   332,   335,
     339,   340,   343,   347,   351,   352,   355,   359,   363,   367,
     371,   372,   375,   379,   383,   384,   387,   391,   395,   399,
     400,   403,   407,   408,   411,   415,   416,   418,   420,   422,
     426
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    82,    84,    -1,    83,    82,    -1,    -1,
      10,     5,    -1,    85,    90,    -1,    -1,    11,    86,    47,
      87,    -1,    -1,    -1,    94,    45,    88,    89,    -1,    87,
      -1,    -1,    -1,    12,    91,    47,    92,    -1,    -1,   113,
      93,    -1,    92,    -1,    -1,    95,    -1,    98,    -1,    97,
       4,    96,    -1,    30,    97,     4,    55,   138,    -1,    31,
      97,     4,    96,    -1,    55,   138,    -1,    -1,    18,    -1,
      22,    19,    -1,    19,    -1,    20,    -1,    23,    -1,     5,
      -1,    27,    97,    50,   109,    51,     4,    99,    -1,    26,
      97,     4,   104,    -1,    24,     4,    47,     4,   108,    29,
      -1,    25,     4,    47,    87,    28,    -1,   100,    -1,    -1,
      55,   101,    -1,    52,   138,    53,   102,    -1,   103,    -1,
      -1,    46,   101,    -1,   105,    -1,    -1,    55,    52,   106,
      53,    -1,   138,   107,    -1,    46,   106,    -1,    -1,    46,
       4,   108,    -1,    -1,   110,   112,    -1,     6,   111,    -1,
      54,     6,    -1,    -1,    46,   110,   112,    -1,    -1,   114,
      -1,   116,    -1,    -1,    13,     4,    48,   118,    49,    47,
     115,   120,    15,    45,    -1,    -1,    14,    97,     4,    48,
     118,    49,    47,   117,   120,    16,    45,    -1,    94,   119,
      -1,    -1,    46,    94,   119,    -1,    -1,   121,   120,    -1,
      -1,   123,    -1,   127,    -1,   129,    -1,   132,    -1,   133,
      -1,   134,    -1,   122,    -1,    94,    -1,    17,   138,    45,
      -1,   125,   124,    45,    -1,    55,   138,    -1,    56,   138,
      -1,    57,   138,    -1,    58,   138,    -1,    59,   138,    -1,
      60,   138,    -1,     4,   126,    -1,    50,   109,    51,    -1,
      -1,    32,    48,   138,    49,    47,   120,   128,    41,    45,
      -1,    33,   120,    -1,    -1,    37,    48,     4,    49,    47,
     130,   131,    44,    45,    -1,    38,    48,   138,    49,    47,
     120,    39,    45,   130,    -1,    -1,    40,    47,   120,    -1,
      -1,    36,    48,   138,    49,    47,   120,    43,    45,    -1,
      34,     4,    35,     4,    47,   120,    42,    45,    -1,     4,
      48,   135,    49,    -1,   136,    -1,    -1,   138,   137,    -1,
      46,   136,    -1,    -1,   140,   139,    -1,    65,   140,   139,
      -1,    -1,   142,   141,    -1,    64,   142,   141,    -1,    -1,
     144,   143,    -1,    68,   144,   143,    -1,    69,   144,   143,
      -1,    -1,   146,   145,    -1,    66,   146,   145,    -1,    67,
     146,   145,    -1,    75,   146,   145,    -1,    76,   146,   145,
      -1,    -1,   148,   147,    -1,    71,   148,   147,    -1,    70,
     148,   147,    -1,    -1,   150,   149,    -1,    72,   150,   149,
      -1,    73,   150,   149,    -1,    74,   150,   149,    -1,    -1,
     152,   151,    -1,    77,   152,   151,    -1,    -1,   154,   153,
      -1,    63,   154,   153,    -1,    -1,     4,    -1,     6,    -1,
     155,    -1,    48,   138,    49,    -1,     4,    48,   118,    49,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   109,   110,   114,   118,   122,   122,   124,
     128,   128,   132,   133,   137,   137,   138,   142,   146,   147,
     151,   152,   157,   158,   159,   163,   164,   168,   169,   170,
     171,   172,   173,   177,   178,   179,   180,   184,   185,   190,
     195,   199,   200,   205,   210,   211,   215,   220,   224,   225,
     229,   230,   234,   238,   242,   243,   247,   248,   252,   253,
     257,   257,   263,   263,   270,   271,   275,   276,   280,   281,
     285,   286,   287,   288,   289,   290,   291,   292,   296,   300,
     304,   305,   306,   307,   308,   309,   313,   318,   319,   323,
     330,   331,   335,   342,   346,   350,   351,   355,   361,   367,
     371,   372,   376,   380,   381,   385,   389,   390,   394,   398,
     399,   403,   407,   408,   409,   413,   417,   418,   419,   420,
     421,   425,   429,   430,   431,   435,   439,   440,   441,   442,
     446,   450,   451,   455,   459,   460,   464,   465,   466,   467,
     471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "IDENTIFIER", "STRING", "NUMBER",
  "COMPLEX_NUMBER", "REAL_NUMBER", "INT_NUMBER", "IMPORT",
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
  "$@2", "variable_declarations_tail", "subprogram_section", "$@3",
  "subprogram_declarations", "subprogram_declarations_tail",
  "variable_declaration", "simple_variable_declaration",
  "simple_variable_declaration_value", "type",
  "compost_variable_declaration", "matrix_assignment",
  "matrix_assignment_aux", "matrix_assignment_aux_aux",
  "values_group_list", "values_group_list_aux", "set_assignment",
  "set_assignment_aux", "set_assignment_aux_aux", "values_list",
  "identifier_list", "dimensions", "range", "range_tail",
  "dimensions_tail", "subprogram_declaration", "procedure_declaration",
  "$@4", "function_declaration", "$@5", "parameter_list",
  "parameter_list_tail", "statement_list", "statement", "return_statement",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    83,    84,    86,    85,    85,
      88,    87,    89,    89,    91,    90,    90,    92,    93,    93,
      94,    94,    95,    95,    95,    96,    96,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    99,    99,   100,
     101,   102,   102,   103,   104,   104,   105,   106,   107,   107,
     108,   108,   109,   110,   111,   111,   112,   112,   113,   113,
     115,   114,   117,   116,   118,   118,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   122,   123,
     124,   124,   124,   124,   124,   124,   125,   126,   126,   127,
     128,   128,   129,   130,   130,   131,   131,   132,   133,   134,
     135,   135,   136,   137,   137,   138,   139,   139,   140,   141,
     141,   142,   143,   143,   143,   144,   145,   145,   145,   145,
     145,   146,   147,   147,   147,   148,   149,   149,   149,   149,
     150,   151,   151,   152,   153,   153,   154,   154,   154,   154,
     155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     2,     0,     4,     0,
       0,     4,     1,     0,     0,     4,     0,     2,     1,     0,
       1,     1,     3,     5,     4,     2,     0,     1,     2,     1,
       1,     1,     1,     7,     4,     6,     5,     1,     0,     2,
       4,     1,     0,     2,     1,     0,     4,     2,     2,     0,
       3,     0,     2,     2,     2,     0,     3,     0,     1,     1,
       0,    10,     0,    11,     2,     0,     3,     0,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     3,     0,     9,
       2,     0,     9,     9,     0,     3,     0,     8,     8,     4,
       1,     0,     2,     2,     0,     2,     3,     0,     2,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     0,
       2,     3,     0,     2,     3,     0,     1,     1,     1,     3,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     4,     5,     1,     7,     2,    16,
       3,     0,    14,     6,     0,     0,    32,    27,    29,    30,
       0,    31,     0,     0,     0,     0,     0,     0,     8,     0,
      20,     0,    21,     0,    28,     0,     0,     0,     0,     0,
       0,    10,    26,     0,     0,    15,    19,    58,    59,     0,
       0,    45,     0,     0,    26,    13,     0,    22,     0,     0,
      18,    17,    51,     0,     0,    34,    44,    55,     0,    57,
       0,    24,    12,    11,   136,   137,     0,    25,   107,   110,
     114,   120,   124,   129,   132,   135,   138,    65,     0,     0,
       0,    36,     0,     0,    53,     0,     0,    52,    23,    65,
       0,     0,   105,     0,   108,     0,     0,   111,     0,     0,
       0,     0,   115,     0,     0,   121,     0,     0,     0,   125,
       0,   130,     0,   133,    67,     0,    65,    51,    35,     0,
      49,    54,    38,    57,     0,   139,   107,   110,   114,   114,
     120,   120,   120,   120,   124,   124,   129,   129,   129,   132,
     135,     0,    64,     0,     0,    50,    46,     0,    47,     0,
      33,    37,    56,   140,   106,   109,   112,   113,   116,   117,
     118,   119,   123,   122,   126,   127,   128,   131,   134,    67,
      60,     0,    48,     0,    39,    66,    69,    62,     0,    88,
       0,     0,     0,     0,     0,    77,     0,    69,    76,    70,
       0,    71,    72,    73,    74,    75,    69,    42,   101,     0,
      86,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
     100,   104,     0,    78,     0,     0,     0,     0,    61,    80,
      81,    82,    83,    84,    85,    79,     0,    43,    99,     0,
     102,    87,     0,     0,     0,     0,    63,   103,    69,    69,
      69,    94,    91,     0,     0,     0,    96,    69,     0,     0,
       0,     0,     0,     0,    90,     0,    98,    97,     0,    69,
       0,    89,     0,    95,    92,    69,     0,     0,    94,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    11,    28,    55,    73,
      13,    15,    45,    61,   195,    30,    57,    31,    32,   160,
     161,   184,   227,   228,    65,    66,   129,   158,    90,    68,
      69,    94,    97,    46,    47,   186,    48,   206,   125,   152,
     196,   197,   198,   199,   224,   200,   210,   201,   268,   202,
     266,   273,   203,   204,   205,   229,   230,   250,   130,   102,
      78,   104,    79,   107,    80,   112,    81,   115,    82,   119,
      83,   121,    84,   123,    85,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -196
static const yytype_int16 yypact[] =
{
       0,     8,    19,    -7,     0,  -196,  -196,  -196,  -196,    13,
    -196,   -15,  -196,  -196,    73,    15,  -196,  -196,  -196,  -196,
      36,  -196,    81,    90,    34,    34,    34,    34,  -196,    71,
    -196,   113,  -196,    45,  -196,    74,    75,   116,    76,   119,
     120,  -196,    70,   124,    34,  -196,    45,  -196,  -196,   125,
      73,    77,   127,    80,    70,    73,    -1,  -196,    82,   132,
    -196,  -196,    85,   109,    87,  -196,  -196,    86,    91,    95,
      -1,  -196,  -196,  -196,    96,  -196,    -1,  -196,    78,    83,
      -2,    -6,    12,     3,    68,    88,  -196,    73,    98,   144,
     121,  -196,    -1,   143,  -196,   149,   127,  -196,  -196,    73,
     105,    -1,  -196,    -1,  -196,    -1,    -1,  -196,    -1,    -1,
      -1,    -1,  -196,    -1,    -1,  -196,    -1,    -1,    -1,  -196,
      -1,  -196,    -1,  -196,   111,   106,    73,    85,  -196,   107,
     115,  -196,   104,    95,   122,  -196,    78,    83,    -2,    -2,
      -6,    -6,    -6,    -6,    12,    12,     3,     3,     3,    68,
      88,    73,  -196,   123,   126,  -196,  -196,    -1,  -196,   117,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,   111,
    -196,   129,  -196,    -1,  -196,  -196,     4,  -196,   128,    23,
      -1,   130,   164,   131,   134,  -196,   157,     4,  -196,  -196,
      50,  -196,  -196,  -196,  -196,  -196,     4,   137,    -1,   127,
    -196,   135,    -1,   138,    -1,   170,   139,  -196,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   161,   117,  -196,  -196,   141,
    -196,   142,   136,  -196,   145,   182,   146,   147,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,   152,  -196,  -196,    -1,
    -196,  -196,   151,   153,   154,   155,  -196,  -196,     4,     4,
       4,   165,   156,   150,   148,   158,   159,     4,   163,   160,
     162,    -1,   166,   167,  -196,   169,  -196,  -196,   168,     4,
     171,  -196,   172,  -196,  -196,     4,   173,   175,   165,  -196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,   204,  -196,  -196,  -196,  -196,   -43,  -196,  -196,
    -196,  -196,   176,  -196,   -13,  -196,   174,    24,  -196,  -196,
    -196,   -17,  -196,  -196,  -196,  -196,    53,  -196,    94,     9,
     133,  -196,    92,  -196,  -196,  -196,  -196,  -196,   -93,    44,
    -195,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
     -64,  -196,  -196,  -196,  -196,  -196,   -23,  -196,   -56,    97,
     177,    93,   178,   -37,     6,  -125,   -65,   -30,     5,   -67,
     -29,    89,   112,    84,   114,  -196
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      77,    29,   217,    74,     7,    75,   134,    63,   189,    16,
       1,   225,    72,     5,    98,   168,   169,   170,   171,     6,
     100,   190,    17,    18,    19,    12,    20,    21,    22,    23,
      24,    25,    14,   154,    26,    27,   191,    29,   192,    16,
     193,   194,    29,   140,   141,   142,   143,    76,    37,    38,
      39,    40,    17,    18,    19,    34,    20,    21,    43,    44,
     108,   109,    33,   262,   263,   264,   105,   106,    59,   110,
     111,   208,   274,   209,   124,   116,   117,   118,    16,   174,
     175,   176,   113,   114,   283,    35,   124,   146,   147,   148,
     286,    17,    18,    19,    36,    20,    21,    22,    23,    24,
      25,   166,   167,    26,    27,   218,   219,   220,   221,   222,
     223,   138,   139,   124,   172,   173,    41,    42,   144,   145,
      51,    49,    50,    53,    54,    56,    52,   188,    58,    62,
      87,    89,    64,    67,   211,    70,    88,    91,   179,    92,
      93,    96,    95,   101,    99,   120,   126,   103,   127,   131,
     128,   122,   231,   132,   135,   153,   234,   151,   236,   159,
     156,   157,   239,   240,   241,   242,   243,   244,   213,   183,
     180,   163,   216,   235,   237,   181,   187,   246,   212,   214,
     233,   207,   215,   226,   238,   245,   253,   251,   249,   267,
     248,   270,   269,   231,   252,   254,   255,   256,   258,   272,
     259,   260,   261,   265,   275,   276,   271,   277,    10,   247,
     182,   280,   287,   279,   281,   278,   284,   282,   232,   285,
     288,   155,    60,   185,   289,   162,   257,     0,    71,   133,
     165,     0,   149,   164,   178,     0,   150,     0,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,   137
};

static const yytype_int16 yycheck[] =
{
      56,    14,   197,     4,    11,     6,    99,    50,     4,     5,
      10,   206,    55,     5,    70,   140,   141,   142,   143,     0,
      76,    17,    18,    19,    20,    12,    22,    23,    24,    25,
      26,    27,    47,   126,    30,    31,    32,    50,    34,     5,
      36,    37,    55,   108,   109,   110,   111,    48,    24,    25,
      26,    27,    18,    19,    20,    19,    22,    23,    13,    14,
      66,    67,    47,   258,   259,   260,    68,    69,    44,    75,
      76,    48,   267,    50,    87,    72,    73,    74,     5,   146,
     147,   148,    70,    71,   279,     4,    99,   116,   117,   118,
     285,    18,    19,    20,     4,    22,    23,    24,    25,    26,
      27,   138,   139,    30,    31,    55,    56,    57,    58,    59,
      60,   105,   106,   126,   144,   145,    45,     4,   113,   114,
       4,    47,    47,     4,     4,    55,    50,   183,     4,     4,
      48,    46,    55,     6,   190,    55,     4,    28,   151,    52,
      54,    46,    51,    65,    48,    77,    48,    64,     4,     6,
      29,    63,   208,     4,    49,    49,   212,    46,   214,    55,
      53,    46,   218,   219,   220,   221,   222,   223,     4,    52,
      47,    49,    15,    35,     4,    49,    47,    16,    48,    48,
      45,    53,    48,    46,    45,    45,     4,    51,    46,    33,
      49,    43,    42,   249,    49,    49,    49,    45,    47,    40,
      47,    47,    47,    38,    41,    45,    48,    45,     4,   226,
     157,    44,    39,    47,    45,   271,    45,    49,   209,    47,
      45,   127,    46,   179,   288,   133,   249,    -1,    54,    96,
     137,    -1,   120,   136,   150,    -1,   122,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   103
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    81,    82,    83,     5,     0,    11,    84,    85,
      82,    86,    12,    90,    47,    91,     5,    18,    19,    20,
      22,    23,    24,    25,    26,    27,    30,    31,    87,    94,
      95,    97,    98,    47,    19,     4,     4,    97,    97,    97,
      97,    45,     4,    13,    14,    92,   113,   114,   116,    47,
      47,     4,    50,     4,     4,    88,    55,    96,     4,    97,
      92,    93,     4,    87,    55,   104,   105,     6,   109,   110,
      55,    96,    87,    89,     4,     6,    48,   138,   140,   142,
     144,   146,   148,   150,   152,   154,   155,    48,     4,    46,
     108,    28,    52,    54,   111,    51,    46,   112,   138,    48,
     138,    65,   139,    64,   141,    68,    69,   143,    66,    67,
      75,    76,   145,    70,    71,   147,    72,    73,    74,   149,
      77,   151,    63,   153,    94,   118,    48,     4,    29,   106,
     138,     6,     4,   110,   118,    49,   140,   142,   144,   144,
     146,   146,   146,   146,   148,   148,   150,   150,   150,   152,
     154,    46,   119,    49,   118,   108,    53,    46,   107,    55,
      99,   100,   112,    49,   139,   141,   143,   143,   145,   145,
     145,   145,   147,   147,   149,   149,   149,   151,   153,    94,
      47,    49,   106,    52,   101,   119,   115,    47,   138,     4,
      17,    32,    34,    36,    37,    94,   120,   121,   122,   123,
     125,   127,   129,   132,   133,   134,   117,    53,    48,    50,
     126,   138,    48,     4,    48,    48,    15,   120,    55,    56,
      57,    58,    59,    60,   124,   120,    46,   102,   103,   135,
     136,   138,   109,    45,   138,    35,   138,     4,    45,   138,
     138,   138,   138,   138,   138,    45,    16,   101,    49,    46,
     137,    51,    49,     4,    49,    49,    45,   136,    47,    47,
      47,    47,   120,   120,   120,    38,   130,    33,   128,    42,
      43,    48,    40,   131,   120,    41,    45,    45,   138,    47,
      44,    45,    49,   120,    45,    47,   120,    39,    45,   130
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
    { printf("import %s\n", (yyvsp[(2) - (2)].sValue)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 122 "format.y"
    { printf("\n\nvariables:\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 128 "format.y"
    { printf("\n\variable declaration:\n"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 137 "format.y"
    { printf("\n\subprograms:\n"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 257 "format.y"
    { printf("\n\begin procedure %s:\n" , (yyvsp[(2) - (6)].sValue)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 259 "format.y"
    { printf("\n\end procedure \n" ,); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 263 "format.y"
    { printf("\n\begin function %s:\n" , (yyvsp[(3) - (7)].sValue)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 265 "format.y"
    { printf("\n\end function \n" ,); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 296 "format.y"
    { printf("\n\return \n" ); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 300 "format.y"
    { printf("\n\assignment \n" ); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1768 "format.tab.c"
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
#line 475 "format.y"


