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
	#include <stdlib.h>
	#include <string.h>

	int nivel=0;
	int indice=0;
	char *nome_provis; //para armazenar um nome de variável antes de inserir
	char *tipo_provis; //para armazenar um nome de tipo antes de inserir

	typedef struct tab {
		char *nome;
		char *tipo;
		int nivel;
		int deslocamento;
		struct tab *prox;
	} Tabela;

	Tabela tabela[999];

	void imprimir(int indice, Tabela p[999]) {
		printf("\n-------------\n");
		int i;
		for (i=0; i < indice; i++) {
			printf("%s | %s | %i\n", p[i].nome, p[i].tipo, p[i].nivel);
		}
		printf("-------------\n");
	}

	/*//função que insere elementos ao final da lista
	void insere_T(char *nome, char *tipo, int nivel, Tabela *p) {
		printf("\n--- %s | %s | %i ---\n", nome, tipo, nivel);

		//Tabela *nova = (Tabela *) malloc(sizeof (Tabela));
		//Tabela *ultimo;

		//for (ultimo = p; ultimo->prox != NULL; ultimo = ultimo->prox) //busca o último elemento p/ inserir o novo após ele
		//{ }

		//nova->nome = nome;
		//nova->tipo = tipo;
		//nova->nivel = nivel;

		//nova->prox = ultimo->prox;
		//ultimo->prox = nova;
	}

	função que procura elemento na lista e retorna 1 se achar, 0 c.c
	//int strcmp(str1, str2); 0 qdo igual, 1 c.c
	int busca_T(char *nome, int nivel, Tabela *p) {
		Tabela *nova = (Tabela *) malloc(sizeof (Tabela));
		Tabela *ultimo;

		for (ultimo = p; ultimo->prox != NULL; ultimo = ultimo->prox) {//percorre a lista
			if (strcmp(nome, ultimo->nome) == 0) {
				if ((ultimo->nivel == nivel) || (ultimo->nivel == 0)) {
					return(1);
				}
			}
		}
		return(0);
	}*/

	void yyerror (char *s);

	int yylex();



/* Line 268 of yacc.c  */
#line 141 "y.tab.c"

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
#line 71 "format.y"

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//



/* Line 293 of yacc.c  */
#line 341 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 353 "y.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  163
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNRULES -- Number of states.  */
#define YYNSTATES  389

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
       0,     0,     3,     6,     9,    10,    13,    16,    17,    22,
      23,    24,    29,    31,    33,    35,    36,    37,    42,    43,
      46,    48,    49,    50,    55,    56,    57,    58,    67,    68,
      69,    76,    77,    81,    82,    84,    87,    89,    91,    93,
      95,    96,    97,    98,    99,   111,   112,   113,   120,   121,
     122,   123,   124,   135,   136,   137,   138,   147,   149,   150,
     151,   156,   159,   160,   161,   169,   170,   171,   172,   181,
     182,   184,   185,   186,   187,   194,   197,   198,   202,   203,
     204,   205,   211,   212,   215,   216,   217,   221,   222,   226,
     227,   228,   233,   234,   236,   238,   239,   240,   252,   253,
     254,   255,   256,   271,   274,   275,   276,   281,   282,   285,
     286,   288,   290,   292,   294,   296,   298,   300,   303,   304,
     309,   313,   314,   318,   319,   323,   324,   328,   329,   333,
     334,   338,   339,   343,   344,   348,   349,   354,   355,   356,
     357,   369,   370,   375,   376,   377,   378,   379,   392,   393,
     394,   395,   408,   409,   410,   415,   416,   417,   418,   429,
     430,   431,   432,   433,   434,   448,   449,   450,   451,   460,
     462,   463,   466,   467,   471,   472,   475,   476,   481,   482,
     485,   486,   491,   492,   495,   496,   501,   502,   507,   508,
     511,   512,   517,   518,   523,   524,   529,   530,   535,   536,
     539,   540,   545,   546,   551,   552,   555,   556,   561,   562,
     567,   568,   573,   574,   577,   578,   583,   584,   587,   588,
     592,   593,   595,   597,   599,   601,   602,   606,   607,   608,
     614,   615,   620
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    81,    83,    -1,    82,    81,    -1,    -1,
       9,     4,    -1,    84,    90,    -1,    -1,    10,    46,    85,
      86,    -1,    -1,    -1,    88,    44,    87,    89,    -1,    94,
      -1,   104,    -1,    86,    -1,    -1,    -1,    11,    46,    91,
      92,    -1,    -1,   145,    93,    -1,    92,    -1,    -1,    -1,
     103,     3,    95,   101,    -1,    -1,    -1,    -1,    29,    96,
     103,     3,    97,    54,    98,   205,    -1,    -1,    -1,    30,
      99,   103,     3,   100,   101,    -1,    -1,    54,   102,   205,
      -1,    -1,    17,    -1,    21,    18,    -1,    18,    -1,    19,
      -1,    22,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
     105,   103,    49,   106,   138,    50,   107,     3,   108,   118,
      -1,    -1,    -1,    25,   109,   103,     3,   110,   128,    -1,
      -1,    -1,    -1,    -1,    23,   111,     3,   112,    46,   113,
       3,   114,   135,    28,    -1,    -1,    -1,    -1,    24,   115,
       3,   116,    46,   117,    86,    27,    -1,   119,    -1,    -1,
      -1,    54,   120,    51,   121,    -1,   132,    52,    -1,    -1,
      -1,    51,   122,   132,    52,   123,   124,    52,    -1,    -1,
      -1,    -1,    45,   125,    51,   126,   132,    52,   127,   124,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    54,   130,    51,
     131,   132,    52,    -1,   205,   133,    -1,    -1,    45,   134,
     132,    -1,    -1,    -1,    -1,    45,   136,     3,   137,   135,
      -1,    -1,   139,   143,    -1,    -1,    -1,     5,   140,   141,
      -1,    -1,    53,   142,     5,    -1,    -1,    -1,    45,   144,
     139,   143,    -1,    -1,   146,    -1,   149,    -1,    -1,    -1,
      12,     3,    47,   147,   154,    48,    46,   148,   157,    14,
      44,    -1,    -1,    -1,    -1,    -1,    13,   150,   103,     3,
     151,    47,   152,   154,    48,    46,   153,   157,    15,    44,
      -1,    88,   155,    -1,    -1,    -1,    45,   156,    88,   155,
      -1,    -1,   158,   157,    -1,    -1,   161,    -1,   173,    -1,
     178,    -1,   188,    -1,   191,    -1,   197,    -1,   159,    -1,
      88,    44,    -1,    -1,    16,   160,   205,    44,    -1,   169,
     162,    44,    -1,    -1,    54,   163,   205,    -1,    -1,    55,
     164,   205,    -1,    -1,    56,   165,   205,    -1,    -1,    57,
     166,   205,    -1,    -1,    58,   167,   205,    -1,    -1,    59,
     168,   205,    -1,    -1,     3,   170,   171,    -1,    -1,    49,
     172,   138,    50,    -1,    -1,    -1,    -1,    31,    47,   174,
     205,    48,    46,   175,   157,   176,    40,    44,    -1,    -1,
      32,    46,   177,   157,    -1,    -1,    -1,    -1,    -1,    36,
      47,   179,     3,   180,    48,    46,   181,   182,   186,    43,
      44,    -1,    -1,    -1,    -1,    37,    47,   183,   205,    48,
      46,   184,   157,    38,    44,   185,   182,    -1,    -1,    -1,
      39,    46,   187,   157,    -1,    -1,    -1,    -1,    35,    47,
     189,   205,    48,    46,   190,   157,    42,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    33,   192,     3,   193,    34,   194,
       3,   195,    46,   196,   157,    41,    44,    -1,    -1,    -1,
      -1,     3,   198,    47,   199,   201,    48,   200,    44,    -1,
     202,    -1,    -1,   205,   203,    -1,    -1,    45,   204,   202,
      -1,    -1,   208,   206,    -1,    -1,    64,   207,   208,   206,
      -1,    -1,   211,   209,    -1,    -1,    63,   210,   211,   209,
      -1,    -1,   215,   212,    -1,    -1,    67,   213,   215,   212,
      -1,    -1,    68,   214,   215,   212,    -1,    -1,   221,   216,
      -1,    -1,    65,   217,   221,   216,    -1,    -1,    66,   218,
     221,   216,    -1,    -1,    74,   219,   221,   216,    -1,    -1,
      75,   220,   221,   216,    -1,    -1,   225,   222,    -1,    -1,
      70,   223,   225,   222,    -1,    -1,    69,   224,   225,   222,
      -1,    -1,   230,   226,    -1,    -1,    71,   227,   230,   226,
      -1,    -1,    72,   228,   230,   226,    -1,    -1,    73,   229,
     230,   226,    -1,    -1,   233,   231,    -1,    -1,    76,   232,
     233,   231,    -1,    -1,   236,   234,    -1,    -1,    62,   235,
     236,    -1,    -1,     5,    -1,     6,    -1,     7,    -1,     4,
      -1,    -1,     3,   237,   238,    -1,    -1,    -1,    49,   239,
     205,   240,    50,    -1,    -1,    47,   241,   201,    48,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   165,   165,   169,   170,   174,   178,   182,   182,   184,
     189,   189,   193,   194,   198,   199,   204,   204,   205,   209,
     213,   214,   220,   220,   227,   227,   227,   227,   228,   228,
     228,   232,   232,   233,   237,   238,   239,   240,   241,   242,
     246,   246,   246,   246,   246,   247,   247,   247,   248,   248,
     248,   248,   248,   249,   249,   249,   249,   253,   254,   259,
     259,   263,   264,   264,   264,   269,   269,   269,   269,   270,
     275,   276,   280,   280,   280,   285,   289,   289,   290,   294,
     294,   294,   295,   299,   300,   304,   304,   308,   308,   309,
     313,   313,   314,   318,   319,   323,   323,   323,   329,   329,
     329,   329,   329,   335,   336,   340,   340,   341,   345,   346,
     350,   351,   352,   353,   354,   355,   356,   357,   361,   361,
     365,   369,   369,   370,   370,   371,   371,   372,   372,   373,
     373,   374,   374,   378,   378,   383,   383,   384,   388,   388,
     388,   395,   395,   396,   400,   400,   400,   400,   407,   407,
     409,   407,   411,   415,   415,   416,   420,   420,   420,   426,
     426,   426,   426,   426,   426,   432,   432,   432,   432,   436,
     437,   441,   445,   445,   446,   450,   454,   454,   455,   459,
     463,   463,   464,   468,   472,   472,   473,   473,   474,   478,
     482,   482,   483,   483,   484,   484,   485,   485,   486,   490,
     494,   494,   495,   495,   496,   500,   504,   504,   505,   505,
     506,   506,   507,   511,   515,   515,   516,   520,   524,   524,
     525,   529,   530,   531,   532,   533,   533,   537,   537,   537,
     538,   538,   539
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
  "EXPO_OP", "DOT_OP", "COMMENT", "$accept", "program", "program_header",
  "import", "program_body", "variable_section", "$@1",
  "variable_declarations", "$@2", "variable_declaration",
  "variable_declarations_tail", "subprogram_section", "$@3",
  "subprogram_declarations", "subprogram_declarations_tail",
  "simple_variable_declaration", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "simple_variable_declaration_value", "$@10", "type",
  "compost_variable_declaration", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23",
  "matrix_assignment", "matrix_assignment_aux", "$@24",
  "matrix_assignment_aux_aux", "$@25", "$@26",
  "matrix_assignment_aux_aux_aux", "$@27", "$@28", "$@29",
  "set_assignment", "set_assignment_aux", "$@30", "$@31",
  "set_assignment_aux_aux", "values_list", "$@32", "identifier_list",
  "$@33", "$@34", "dimensions", "range", "$@35", "range_tail", "$@36",
  "dimensions_tail", "$@37", "subprogram_declaration",
  "procedure_declaration", "$@38", "$@39", "function_declaration", "$@40",
  "$@41", "$@42", "$@43", "parameter_list", "parameter_list_tail", "$@44",
  "statement_list", "statement", "return_statement", "$@45",
  "assignment_statement", "assignment_statement_tail", "$@46", "$@47",
  "$@48", "$@49", "$@50", "$@51", "destination", "$@52", "identifier_tail",
  "$@53", "if_statement", "$@54", "$@55", "else_clausule", "$@56",
  "switch_statement", "$@57", "$@58", "$@59", "case_clasule", "$@60",
  "$@61", "$@62", "other_clasule", "$@63", "while_statement", "$@64",
  "$@65", "for_statement", "$@66", "$@67", "$@68", "$@69", "$@70",
  "subprogram_call", "$@71", "$@72", "$@73", "argument_list",
  "argument_list_aux", "argument_list_tail", "$@74", "expression",
  "term_or_tail", "$@75", "term_or", "term_and_tail", "$@76", "term_and",
  "term_bool_comparison_tail", "$@77", "$@78", "term_bool_comparison",
  "term_arit_comparison_tail", "$@79", "$@80", "$@81", "$@82",
  "term_arit_comparison", "term_tail", "$@83", "$@84", "term",
  "factor_tail", "$@85", "$@86", "$@87", "factor", "expo_tail", "$@88",
  "expo", "negation_unsub_tail", "$@89", "negation_unsub", "$@90",
  "negation_unsub_aux", "$@91", "$@92", "$@93", 0
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
       0,    79,    80,    81,    81,    82,    83,    85,    84,    84,
      87,    86,    88,    88,    89,    89,    91,    90,    90,    92,
      93,    93,    95,    94,    96,    97,    98,    94,    99,   100,
      94,   102,   101,   101,   103,   103,   103,   103,   103,   103,
     105,   106,   107,   108,   104,   109,   110,   104,   111,   112,
     113,   114,   104,   115,   116,   117,   104,   118,   118,   120,
     119,   121,   122,   123,   121,   125,   126,   127,   124,   124,
     128,   128,   130,   131,   129,   132,   134,   133,   133,   136,
     137,   135,   135,   138,   138,   140,   139,   142,   141,   141,
     144,   143,   143,   145,   145,   147,   148,   146,   150,   151,
     152,   153,   149,   154,   154,   156,   155,   155,   157,   157,
     158,   158,   158,   158,   158,   158,   158,   158,   160,   159,
     161,   163,   162,   164,   162,   165,   162,   166,   162,   167,
     162,   168,   162,   170,   169,   172,   171,   171,   174,   175,
     173,   177,   176,   176,   179,   180,   181,   178,   183,   184,
     185,   182,   182,   187,   186,   186,   189,   190,   188,   192,
     193,   194,   195,   196,   191,   198,   199,   200,   197,   201,
     201,   202,   204,   203,   203,   205,   207,   206,   206,   208,
     210,   209,   209,   211,   213,   212,   214,   212,   212,   215,
     217,   216,   218,   216,   219,   216,   220,   216,   216,   221,
     223,   222,   224,   222,   222,   225,   227,   226,   228,   226,
     229,   226,   226,   230,   232,   231,   231,   233,   235,   234,
     234,   236,   236,   236,   236,   237,   236,   239,   240,   238,
     241,   238,   238
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
       4,     2,     0,     0,     7,     0,     0,     0,     8,     0,
       1,     0,     0,     0,     6,     2,     0,     3,     0,     0,
       0,     5,     0,     2,     0,     0,     3,     0,     3,     0,
       0,     4,     0,     1,     1,     0,     0,    11,     0,     0,
       0,     0,    14,     2,     0,     0,     4,     0,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     4,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     4,     0,     0,     0,
      11,     0,     4,     0,     0,     0,     0,    12,     0,     0,
       0,    12,     0,     0,     4,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     8,     1,
       0,     2,     0,     3,     0,     2,     0,     4,     0,     2,
       0,     4,     0,     2,     0,     4,     0,     4,     0,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     2,
       0,     4,     0,     4,     0,     2,     0,     4,     0,     4,
       0,     4,     0,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     1,     1,     1,     0,     3,     0,     0,     5,
       0,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     4,     5,     1,     0,     2,    18,
       3,     7,     0,     6,     0,    16,    34,    36,    37,    39,
       0,    38,    48,    53,    45,    40,    24,    28,     8,     0,
      12,     0,    13,     0,    35,     0,     0,     0,     0,     0,
       0,    10,    22,     0,    98,    17,    21,    93,    94,    49,
      54,     0,     0,     0,     0,    15,    33,     0,     0,    20,
      19,     0,     0,    46,    41,    25,    29,    14,    11,    31,
      23,    95,     0,    50,    55,    71,    84,     0,    33,     0,
     104,    99,     0,     0,    72,    47,    70,    85,     0,    92,
      26,    30,   225,   224,   221,   222,   223,    32,   178,   182,
     188,   198,   204,   212,   216,   220,   107,     0,     0,    51,
       0,     0,    89,    42,    90,    83,     0,   232,   176,   175,
     180,   179,   184,   186,   183,   190,   192,   194,   196,   189,
     202,   200,   199,   206,   208,   210,   205,   214,   213,   218,
     217,   105,   103,     0,   100,    82,    56,    73,    87,    86,
       0,     0,    27,   230,   227,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,   104,    79,     0,     0,     0,    43,    92,
     170,     0,   178,   182,   188,   188,   198,   198,   198,   198,
     204,   204,   212,   212,   212,   216,   219,   107,   109,     0,
       0,    52,     0,    78,    88,    58,    91,     0,   169,   174,
     228,   177,   181,   185,   187,   191,   193,   195,   197,   203,
     201,   207,   209,   211,   215,   106,   133,   118,     0,   159,
       0,     0,     0,     0,   109,   116,   110,     0,   111,   112,
     113,   114,   115,     0,    80,    74,    76,    75,    59,    44,
      57,   231,   172,   171,     0,   137,     0,     0,   138,     0,
     156,   144,   117,     0,   108,   121,   123,   125,   127,   129,
     131,     0,   101,    82,     0,     0,     0,   229,   135,   134,
     166,     0,     0,   160,     0,     0,    97,     0,     0,     0,
       0,     0,     0,   120,   109,    81,    77,     0,   173,    84,
     170,   119,     0,     0,     0,   145,   122,   124,   126,   128,
     130,   132,     0,    62,    60,     0,     0,     0,     0,   161,
       0,     0,     0,     0,    61,   136,   167,   139,     0,   157,
       0,   102,     0,     0,   109,   162,   109,   146,    63,   168,
     143,     0,     0,   152,    69,     0,     0,   163,     0,     0,
     155,    65,     0,   141,     0,   109,   158,   148,     0,     0,
       0,    64,   109,   140,     0,     0,   153,     0,    66,   142,
       0,     0,   109,   147,     0,   164,     0,   154,     0,   149,
      67,   109,    69,     0,    68,     0,   150,   152,   151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    14,    28,    55,   232,
      68,    13,    33,    45,    60,    30,    56,    39,    77,   116,
      40,    78,    70,    79,    31,    32,    38,    76,   150,   205,
      37,    75,    35,    61,    82,   145,    36,    62,    83,   249,
     250,   275,   314,   323,   344,   352,   360,   374,   382,    85,
      86,   111,   176,   202,   247,   274,   175,   200,   273,    88,
      89,   112,   149,   177,   115,   151,    46,    47,    80,   198,
      48,    58,   108,   173,   294,   107,   142,   171,   233,   234,
     235,   257,   236,   271,   287,   288,   289,   290,   291,   292,
     237,   255,   279,   299,   238,   282,   334,   346,   362,   239,
     285,   321,   343,   350,   365,   381,   387,   359,   372,   240,
     284,   336,   241,   259,   303,   328,   341,   355,   242,   256,
     300,   333,   207,   208,   253,   276,   203,   119,   156,    98,
     121,   157,    99,   124,   158,   159,   100,   129,   160,   161,
     162,   163,   101,   132,   165,   164,   102,   136,   166,   167,
     168,   103,   138,   169,   104,   140,   170,   105,   117,   155,
     181,   254,   180
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -271
static const yytype_int16 yypact[] =
{
      17,    27,    36,    54,    17,  -271,  -271,    62,  -271,    89,
    -271,  -271,    66,  -271,    26,  -271,  -271,  -271,  -271,  -271,
      88,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,    77,
    -271,   119,  -271,    45,  -271,   120,   122,    59,    59,    59,
      59,  -271,  -271,   123,  -271,  -271,    45,  -271,  -271,  -271,
    -271,   124,    79,   126,   127,    26,    78,    86,    59,  -271,
    -271,    90,    91,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   131,  -271,  -271,    81,   133,    92,    78,    85,
      26,  -271,   136,    26,  -271,  -271,  -271,  -271,    93,    95,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,    80,    82,
      43,     0,    44,   -11,    71,    87,    97,   100,   104,  -271,
     125,   102,   101,  -271,  -271,  -271,    85,    60,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,   109,  -271,   111,  -271,  -271,  -271,  -271,
     154,   133,  -271,  -271,  -271,  -271,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    26,  -271,    26,  -271,   134,    85,   156,  -271,    95,
      85,    85,    80,    82,    43,    43,     0,     0,     0,     0,
      44,    44,   -11,   -11,   -11,    71,  -271,    97,    -1,   115,
     161,  -271,   107,   121,  -271,   113,  -271,   117,  -271,   128,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,   129,  -271,   130,  -271,
     132,   135,   137,   155,    -1,  -271,  -271,    28,  -271,  -271,
    -271,  -271,  -271,   138,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,   118,   139,   140,    85,  -271,   167,
    -271,  -271,  -271,   141,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,   142,  -271,   111,    85,   143,    85,  -271,  -271,  -271,
    -271,   145,    85,  -271,    85,   168,  -271,    85,    85,    85,
      85,    85,    85,  -271,    -1,  -271,  -271,     3,  -271,   133,
      85,  -271,   144,   146,   147,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   157,  -271,  -271,   148,   149,   150,   158,  -271,
     160,   153,   152,    85,  -271,  -271,  -271,  -271,   171,  -271,
     169,  -271,   162,   163,    -1,  -271,    -1,  -271,  -271,  -271,
     151,   170,   175,   165,   173,   174,   179,  -271,   178,   176,
     185,  -271,   177,  -271,   181,    -1,  -271,  -271,   180,   184,
     182,  -271,    -1,  -271,   187,    85,  -271,   186,  -271,  -271,
     188,   183,    -1,  -271,    85,  -271,   189,  -271,   190,  -271,
    -271,    -1,   173,   196,  -271,   192,  -271,   165,  -271
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,   233,  -271,  -271,  -271,  -271,   -50,  -271,   -13,
    -271,  -271,  -271,   193,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   112,  -271,     1,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -207,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -270,  -271,  -271,   -82,  -271,  -271,  -106,
      94,  -271,  -271,  -271,    61,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,    65,    46,  -271,  -231,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -146,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,   -56,   -30,  -271,  -271,   -79,    67,  -271,    96,
      64,  -271,    98,  -116,  -271,  -271,   -43,  -175,  -271,  -271,
    -271,  -271,   -67,   -73,  -271,  -271,   -45,  -121,  -271,  -271,
    -271,   -69,    53,  -271,    84,  -271,  -271,    99,  -271,  -271,
    -271,  -271,  -271
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -166
static const yytype_int16 yytable[] =
{
      97,    29,   226,   264,   296,    67,    92,    93,    94,    95,
      96,   215,   216,   217,   218,   227,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     1,   315,    26,    27,
     228,     5,   229,   110,   230,   231,     6,   152,    51,    52,
      53,    54,    29,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   332,   313,    26,    27,    43,    44,    72,
     133,   134,   135,   312,     7,   125,   126,   106,   213,   214,
      29,   221,   222,   223,   127,   128,    16,    17,    18,    19,
      20,    21,   265,   266,   267,   268,   269,   270,    92,    93,
      94,    95,    96,   186,   187,   188,   189,   192,   193,   194,
      12,   209,   210,   340,   378,   342,    34,   153,    11,   154,
     122,   123,    15,   130,   131,   184,   185,   219,   220,   190,
     191,    41,    42,    49,   364,    50,    57,    63,    64,    65,
      66,   369,    69,    71,    81,    84,    73,    74,    87,   109,
     114,   377,   141,   113,   118,   120,    90,   137,   143,   139,
     383,   144,   146,   147,   148,   172,   174,   178,   197,   245,
     106,   204,   201,   243,   244,   251,   246,   248,   277,   263,
     283,   305,   322,   252,   335,   384,  -165,   258,   281,   260,
     319,   262,   261,   345,   272,   286,   293,   280,   278,   301,
      91,   295,   318,   316,   297,   320,   331,   209,   326,   325,
     324,   330,   349,   302,   327,   304,   329,   339,   306,   307,
     308,   309,   310,   311,   338,   337,   347,   348,   351,   354,
     353,   209,   356,   357,   358,   363,   366,   367,   370,   361,
     373,   376,   375,   368,   385,   379,   386,    10,   199,    59,
     206,   388,   380,   225,   317,   179,   298,   212,   224,   211,
       0,     0,   182,   195,     0,   183,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-271))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      79,    14,     3,   234,   274,    55,     3,     4,     5,     6,
       7,   186,   187,   188,   189,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     9,   297,    29,    30,
      31,     4,    33,    83,    35,    36,     0,   116,    37,    38,
      39,    40,    55,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   323,    51,    29,    30,    12,    13,    58,
      71,    72,    73,   294,    10,    65,    66,    80,   184,   185,
      83,   192,   193,   194,    74,    75,    17,    18,    19,    20,
      21,    22,    54,    55,    56,    57,    58,    59,     3,     4,
       5,     6,     7,   160,   161,   162,   163,   166,   167,   168,
      11,   180,   181,   334,   374,   336,    18,    47,    46,    49,
      67,    68,    46,    69,    70,   158,   159,   190,   191,   164,
     165,    44,     3,     3,   355,     3,     3,     3,    49,     3,
       3,   362,    54,    47,     3,    54,    46,    46,     5,     3,
      45,   372,    45,    50,    64,    63,    54,    76,    48,    62,
     381,    47,    27,    51,    53,    46,    45,     3,   171,    52,
     173,     5,    28,    48,     3,    48,    45,    54,    50,    14,
       3,     3,    15,    45,     3,   382,    47,    47,   257,    47,
      34,    44,    47,    32,    46,    44,    44,    47,    49,    44,
      78,   273,    48,   299,    51,    48,    44,   276,    48,    50,
      52,    48,    37,   282,    46,   284,    46,    44,   287,   288,
     289,   290,   291,   292,    52,    46,    46,    42,    45,    40,
      46,   300,    44,    47,    39,    44,    46,    43,    41,    52,
      44,    48,    44,    51,    38,    46,    44,     4,   173,    46,
     179,   387,    52,   197,   300,   151,   276,   183,   195,   182,
      -1,    -1,   156,   169,    -1,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   365
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    80,    81,    82,     4,     0,    10,    83,    84,
      81,    46,    11,    90,    85,    46,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    29,    30,    86,    88,
      94,   103,   104,    91,    18,   111,   115,   109,   105,    96,
      99,    44,     3,    12,    13,    92,   145,   146,   149,     3,
       3,   103,   103,   103,   103,    87,    95,     3,   150,    92,
      93,   112,   116,     3,    49,     3,     3,    86,    89,    54,
     101,    47,   103,    46,    46,   110,   106,    97,   100,   102,
     147,     3,   113,   117,    54,   128,   129,     5,   138,   139,
      54,   101,     3,     4,     5,     6,     7,   205,   208,   211,
     215,   221,   225,   230,   233,   236,    88,   154,   151,     3,
      86,   130,   140,    50,    45,   143,    98,   237,    64,   206,
      63,   209,    67,    68,   212,    65,    66,    74,    75,   216,
      69,    70,   222,    71,    72,    73,   226,    76,   231,    62,
     234,    45,   155,    48,    47,   114,    27,    51,    53,   141,
     107,   144,   205,    47,    49,   238,   207,   210,   213,   214,
     217,   218,   219,   220,   224,   223,   227,   228,   229,   232,
     235,   156,    46,   152,    45,   135,   131,   142,     3,   139,
     241,   239,   208,   211,   215,   215,   221,   221,   221,   221,
     225,   225,   230,   230,   230,   233,   236,    88,   148,   154,
     136,    28,   132,   205,     5,   108,   143,   201,   202,   205,
     205,   206,   209,   212,   212,   216,   216,   216,   216,   222,
     222,   226,   226,   226,   231,   155,     3,    16,    31,    33,
      35,    36,    88,   157,   158,   159,   161,   169,   173,   178,
     188,   191,   197,    48,     3,    52,    45,   133,    54,   118,
     119,    48,    45,   203,   240,   170,   198,   160,    47,   192,
      47,    47,    44,    14,   157,    54,    55,    56,    57,    58,
      59,   162,    46,   137,   134,   120,   204,    50,    49,   171,
      47,   205,   174,     3,   189,   179,    44,   163,   164,   165,
     166,   167,   168,    44,   153,   135,   132,    51,   202,   172,
     199,    44,   205,   193,   205,     3,   205,   205,   205,   205,
     205,   205,   157,    51,   121,   132,   138,   201,    48,    34,
      48,   180,    15,   122,    52,    50,    48,    46,   194,    46,
      48,    44,   132,   200,   175,     3,   190,    46,    52,    44,
     157,   195,   157,   181,   123,    32,   176,    46,    42,    37,
     182,    45,   124,    46,    40,   196,    44,    47,    39,   186,
     125,    52,   177,    44,   157,   183,    46,    43,    51,   157,
      41,   205,   187,    44,   126,    44,    48,   157,   132,    46,
      52,   184,   127,   157,   124,    38,    44,   185,   182
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
#line 165 "format.y"
    { printf("\n"); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 174 "format.y"
    { printf("import %s\n", (yyvsp[(2) - (2)].sValue)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 182 "format.y"
    { printf("\n\nvariables:\n\t"); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 189 "format.y"
    { printf(";\n\n\t"); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 204 "format.y"
    { printf("\nsubprograms:\n"); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 220 "format.y"
    { printf("%s", (yyvsp[(2) - (2)].sValue));
						nome_provis = (yyvsp[(2) - (2)].sValue);
						tabela[indice].nome = nome_provis; /*insere_T(nome_provis, tipo_provis, nivel, tabela);*/
						tabela[indice].nivel = nivel;
						tabela[indice].tipo = tipo_provis;
						indice++;
					}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 227 "format.y"
    { printf("const "); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 227 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 227 "format.y"
    { printf(" = "); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 228 "format.y"
    { printf("ref "); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 228 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 232 "format.y"
    { printf(" = "); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 237 "format.y"
    { printf("int ");  tipo_provis = "int";}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 238 "format.y"
    { printf("double real "); tipo_provis = "double real";}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 239 "format.y"
    { printf("real "); tipo_provis = "real";}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 240 "format.y"
    { printf("complex "); tipo_provis = "complex";}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 241 "format.y"
    { printf("boolean "); tipo_provis = "boolean"; imprimir(indice, tabela);}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 242 "format.y"
    { printf("string "); tipo_provis = "string";}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 246 "format.y"
    { printf("matrix_of "); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 246 "format.y"
    { printf("[ "); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 246 "format.y"
    { printf(" ] "); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 246 "format.y"
    { printf("%s", (yyvsp[(9) - (9)].sValue)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 247 "format.y"
    { printf("set_of "); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 247 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 248 "format.y"
    { printf("enum "); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 248 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 248 "format.y"
    { printf(" : "); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 248 "format.y"
    { printf("%s", (yyvsp[(7) - (7)].sValue)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 248 "format.y"
    { printf(" end_enum"); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 249 "format.y"
    { printf("struct "); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 249 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 249 "format.y"
    { printf(" : \n\t"); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 249 "format.y"
    { printf("end_struct"); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 259 "format.y"
    { printf(" = { "); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 263 "format.y"
    { printf(" }"); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 264 "format.y"
    { printf("{ "); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 264 "format.y"
    { printf(" }"); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 264 "format.y"
    { printf(" }"); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 269 "format.y"
    { printf(", "); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 269 "format.y"
    { printf("{ "); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 269 "format.y"
    { printf(" }"); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 280 "format.y"
    { printf(" = "); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 280 "format.y"
    { printf("{ "); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 280 "format.y"
    { printf(" }"); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 289 "format.y"
    { printf(", "); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 294 "format.y"
    { printf(", "); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 294 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 304 "format.y"
    {printf("%i", (yyvsp[(1) - (1)].iValue));}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 308 "format.y"
    {printf("..");}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 308 "format.y"
    {printf("%i", (yyvsp[(3) - (3)].iValue));}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 313 "format.y"
    {printf(", ");}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 323 "format.y"
    { printf("procedure %s(", (yyvsp[(2) - (3)].sValue)); nivel++;}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 323 "format.y"
    { printf("):\n"); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 325 "format.y"
    { printf("\nend_procedure;\n"); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 329 "format.y"
    { printf("function "); nivel++;}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 329 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 329 "format.y"
    { printf("("); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 329 "format.y"
    { printf("):\n"); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 331 "format.y"
    { printf("\nend_function;\n"); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 340 "format.y"
    { printf(", "); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 357 "format.y"
    { printf(";\n" ); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 361 "format.y"
    { printf("return "); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 361 "format.y"
    { printf(";\n" ); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 365 "format.y"
    { printf(";\n" ); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 369 "format.y"
    { printf(" = "); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 370 "format.y"
    { printf(" += "); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 371 "format.y"
    { printf(" -= "); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 372 "format.y"
    { printf(" *= "); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 373 "format.y"
    { printf(" /= "); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 374 "format.y"
    { printf(" %%= "); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 378 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue) ); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 383 "format.y"
    { printf(" [" ); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 383 "format.y"
    { printf("] " ); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 388 "format.y"
    { printf("if (" ); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 388 "format.y"
    { printf(") :\n" ); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 391 "format.y"
    { printf("end_if;\n" ); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 395 "format.y"
    { printf("else: \n" ); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf("switch (" ); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf("%s", (yyvsp[(4) - (4)].sValue) ); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 400 "format.y"
    { printf(") :" ); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 403 "format.y"
    { printf("end_switch;" ); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 407 "format.y"
    { printf("case (" ); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 407 "format.y"
    { printf(") :" ); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 409 "format.y"
    { printf("break; (" ); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 415 "format.y"
    { printf("other :" ); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 420 "format.y"
    { printf("while (" ); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 420 "format.y"
    { printf(") :\n" ); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 422 "format.y"
    { printf("end_while;\n" ); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 426 "format.y"
    { printf("for " ); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 426 "format.y"
    { printf("%s", (yyvsp[(3) - (3)].sValue) ); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 426 "format.y"
    { printf(" in " ); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 426 "format.y"
    { printf("%s", (yyvsp[(7) - (7)].sValue) ); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 426 "format.y"
    { printf(":\n" ); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 428 "format.y"
    { printf("end_for;\n" ); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 432 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue) ); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 432 "format.y"
    { printf("( " ); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 432 "format.y"
    { printf(" )" ); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 432 "format.y"
    { printf(";\n" ); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 445 "format.y"
    { printf(", " ); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 454 "format.y"
    { printf(" || " ); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 463 "format.y"
    { printf(" && " ); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 472 "format.y"
    { printf(" == "); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 473 "format.y"
    { printf(" != "); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 482 "format.y"
    { printf(" <= "); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 483 "format.y"
    { printf(" >= "); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 484 "format.y"
    { printf(" < "); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 485 "format.y"
    { printf(" > "); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 494 "format.y"
    { printf(" + "); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 495 "format.y"
    { printf(" - "); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 504 "format.y"
    { printf(" * "); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 505 "format.y"
    { printf(" / "); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 506 "format.y"
    { printf(" %% "); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 515 "format.y"
    { printf("^"); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 524 "format.y"
    { printf("!"); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 529 "format.y"
    { printf("%i", (yyvsp[(1) - (1)].iValue)); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 530 "format.y"
    { printf("%f", (yyvsp[(1) - (1)].dValue)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 531 "format.y"
    { printf("%f", (yyvsp[(1) - (1)].dValue)); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 532 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 533 "format.y"
    { printf("%s", (yyvsp[(1) - (1)].sValue)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 537 "format.y"
    { printf("["); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 537 "format.y"
    { printf("]"); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 538 "format.y"
    { printf("( "); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 538 "format.y"
    { printf(" )"); }
    break;



/* Line 1806 of yacc.c  */
#line 2845 "y.tab.c"
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
#line 542 "format.y"


/*int main(int argc, char **argv){
        yyin = fopen( argv[1], "r" );
        yyparse();
        return 0;
}*/
void yyerror(char *msg){
        printf("\n%s\n", msg);
}

