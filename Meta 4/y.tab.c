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
     CHAR = 258,
     ELSE = 259,
     WHILE = 260,
     IF = 261,
     SHORT = 262,
     INT = 263,
     DOUBLE = 264,
     RETURN = 265,
     VOID = 266,
     BITWISEOR = 267,
     BITWISEAND = 268,
     BITWISEXOR = 269,
     AND = 270,
     ASSIGN = 271,
     MUL = 272,
     COMMA = 273,
     DIV = 274,
     EQ = 275,
     GE = 276,
     GT = 277,
     LBRACE = 278,
     LE = 279,
     LPAR = 280,
     LT = 281,
     MINUS = 282,
     MOD = 283,
     NE = 284,
     NOT = 285,
     xOR = 286,
     PLUS = 287,
     RBRACE = 288,
     RPAR = 289,
     SEMI = 290,
     RESERVED = 291,
     REALLIT = 292,
     CHRLIT = 293,
     INTLIT = 294,
     ID = 295,
     OR = 296,
     SIGNAL = 297,
     ELSE_PRIORITY = 298
   };
#endif
/* Tokens.  */
#define CHAR 258
#define ELSE 259
#define WHILE 260
#define IF 261
#define SHORT 262
#define INT 263
#define DOUBLE 264
#define RETURN 265
#define VOID 266
#define BITWISEOR 267
#define BITWISEAND 268
#define BITWISEXOR 269
#define AND 270
#define ASSIGN 271
#define MUL 272
#define COMMA 273
#define DIV 274
#define EQ 275
#define GE 276
#define GT 277
#define LBRACE 278
#define LE 279
#define LPAR 280
#define LT 281
#define MINUS 282
#define MOD 283
#define NE 284
#define NOT 285
#define xOR 286
#define PLUS 287
#define RBRACE 288
#define RPAR 289
#define SEMI 290
#define RESERVED 291
#define REALLIT 292
#define CHRLIT 293
#define INTLIT 294
#define ID 295
#define OR 296
#define SIGNAL 297
#define ELSE_PRIORITY 298




/* Copy the first part of user declarations.  */
#line 1 "uccompiler.y"

	/*
		João Pedro Costa Ferreiro 2014197760
		Guilherme Cardoso Gomes da Silva 2014226354
	*/
	#include "headers.h"

	AST_struct root = NULL, aux = NULL, aux2 = NULL;
	int flag = 0, print_flag = 0;
	char* type_spec;


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
#line 13 "uccompiler.y"
{
	char* string;
	struct AST* ast;
}
/* Line 193 of yacc.c.  */
#line 199 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 212 "y.tab.c"

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   837

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    16,    18,    20,
      24,    27,    31,    34,    37,    39,    41,    45,    50,    53,
      54,    58,    60,    63,    68,    71,    72,    76,    78,    80,
      82,    84,    86,    88,    92,    94,    97,    99,   102,   104,
     107,   110,   114,   120,   128,   134,   138,   141,   145,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   209,   213,   217,   220,   223,   226,
     230,   235,   237,   239,   241,   243,   247,   252,   256,   260,
     264,   268,   272,   276,   280,   284,   288,   292,   296,   300,
     304,   308,   312,   316,   320,   324,   328,   331,   334,   337,
     341,   346,   348,   350,   352,   354,   358,   363
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    46,    47,    -1,    46,    50,
      -1,    46,    55,    -1,    47,    -1,    50,    -1,    55,    -1,
      57,    51,    48,    -1,    23,    33,    -1,    23,    49,    33,
      -1,    49,    61,    -1,    49,    55,    -1,    61,    -1,    55,
      -1,    57,    51,    35,    -1,    40,    25,    52,    34,    -1,
      54,    53,    -1,    -1,    18,    54,    53,    -1,    57,    -1,
      57,    40,    -1,    57,    58,    56,    35,    -1,     1,    35,
      -1,    -1,    18,    58,    56,    -1,     3,    -1,     8,    -1,
      11,    -1,     7,    -1,     9,    -1,    40,    -1,    40,    16,
      62,    -1,    60,    -1,    60,    59,    -1,    61,    -1,     1,
      35,    -1,    35,    -1,    62,    35,    -1,    23,    33,    -1,
      23,    59,    33,    -1,     6,    25,    62,    34,    60,    -1,
       6,    25,    62,    34,    60,     4,    60,    -1,     5,    25,
      62,    34,    60,    -1,    10,    62,    35,    -1,    10,    35,
      -1,    23,     1,    33,    -1,    62,    16,    62,    -1,    62,
      18,    62,    -1,    62,    20,    62,    -1,    62,    29,    62,
      -1,    62,    24,    62,    -1,    62,    21,    62,    -1,    62,
      26,    62,    -1,    62,    22,    62,    -1,    62,    32,    62,
      -1,    62,    27,    62,    -1,    62,    17,    62,    -1,    62,
      19,    62,    -1,    62,    28,    62,    -1,    62,    41,    62,
      -1,    62,    15,    62,    -1,    62,    13,    62,    -1,    62,
      12,    62,    -1,    62,    14,    62,    -1,    32,    62,    -1,
      27,    62,    -1,    30,    62,    -1,    40,    25,    34,    -1,
      40,    25,    63,    34,    -1,    40,    -1,    39,    -1,    38,
      -1,    37,    -1,    25,    62,    34,    -1,    40,    25,     1,
      34,    -1,    25,     1,    34,    -1,    63,    16,    63,    -1,
      63,    18,    62,    -1,    63,    20,    63,    -1,    63,    29,
      63,    -1,    63,    24,    63,    -1,    63,    21,    63,    -1,
      63,    26,    63,    -1,    63,    22,    63,    -1,    63,    32,
      63,    -1,    63,    27,    63,    -1,    63,    17,    63,    -1,
      63,    19,    63,    -1,    63,    28,    63,    -1,    63,    41,
      63,    -1,    63,    15,    63,    -1,    63,    13,    63,    -1,
      63,    12,    63,    -1,    63,    14,    63,    -1,    32,    63,
      -1,    27,    63,    -1,    30,    63,    -1,    40,    25,    34,
      -1,    40,    25,    63,    34,    -1,    40,    -1,    39,    -1,
      38,    -1,    37,    -1,    25,    62,    34,    -1,    40,    25,
       1,    34,    -1,    25,     1,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    51,    55,    59,    63,    66,    69,    75,
      84,    87,    94,    98,   102,   105,   111,   119,   126,   134,
     137,   144,   148,   158,   164,   171,   174,   184,   188,   192,
     196,   200,   207,   210,   216,   219,   229,   232,   239,   242,
     245,   248,   259,   273,   292,   304,   308,   313,   320,   325,
     330,   335,   340,   345,   350,   355,   360,   365,   370,   375,
     380,   385,   390,   395,   400,   405,   410,   414,   418,   422,
     427,   434,   437,   440,   443,   446,   450,   454,   461,   466,
     470,   475,   480,   485,   490,   495,   500,   505,   510,   515,
     520,   525,   530,   535,   540,   545,   551,   555,   559,   563,
     568,   574,   577,   580,   583,   586,   589,   593
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "ELSE", "WHILE", "IF", "SHORT",
  "INT", "DOUBLE", "RETURN", "VOID", "BITWISEOR", "BITWISEAND",
  "BITWISEXOR", "AND", "ASSIGN", "MUL", "COMMA", "DIV", "EQ", "GE", "GT",
  "LBRACE", "LE", "LPAR", "LT", "MINUS", "MOD", "NE", "NOT", "xOR", "PLUS",
  "RBRACE", "RPAR", "SEMI", "RESERVED", "REALLIT", "CHRLIT", "INTLIT",
  "ID", "OR", "SIGNAL", "ELSE_PRIORITY", "$accept", "Program",
  "FunctionsAndDeclarations", "FunctionDefinition", "FunctionBody",
  "DeclarationAndStatements", "FunctionDeclaration", "FunctionDeclarator",
  "ParameterList", "ParameterListAux", "ParameterDeclaration",
  "Declaration", "DeclarationAux", "TypeSpec", "Declarator",
  "StatementAux", "StatementError", "Statement", "Expr", "Expr2", 0
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    46,    46,    47,
      48,    48,    49,    49,    49,    49,    50,    51,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     3,     4,     2,     0,
       3,     1,     2,     4,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     1,     2,     1,     2,
       2,     3,     5,     7,     5,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     3,
       4,     1,     1,     1,     1,     3,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     3,
       4,     1,     1,     1,     1,     3,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    27,    30,    28,    31,    29,     0,     0,     6,
       7,     8,     0,    24,     1,     3,     4,     5,    32,     0,
      25,     0,     0,     0,    16,     9,     0,     0,     0,     0,
       0,     0,    74,    73,    72,    71,    33,     0,    19,    21,
       0,     0,     0,     0,    10,    38,     0,    15,     0,    14,
       0,    32,    25,    23,     0,     0,    67,    68,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
      18,    22,     0,     0,    46,     0,     0,    40,     0,     0,
      36,    11,    13,    12,    39,    26,    77,    75,     0,     0,
       0,     0,     0,    69,   104,   103,   102,   101,     0,    64,
      63,    65,    62,    48,    58,    49,    59,    50,    53,    55,
      52,    54,    57,    60,    51,    56,    61,    19,     0,     0,
      45,    47,    37,    41,     0,    35,    76,     0,     0,    97,
      98,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,    20,     0,     0,   107,   105,     0,    99,     0,
      94,    93,    95,    92,    78,    88,    79,    89,    80,    83,
      85,    82,    84,    87,    90,    81,    86,    91,    44,    42,
     106,   100,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    25,    46,    10,    19,    37,    80,
      38,    11,    27,    12,    20,    88,    89,    90,    50,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -160
static const yytype_int16 yypact[] =
{
     826,   -24,  -160,  -160,  -160,  -160,  -160,    13,   145,  -160,
    -160,  -160,   -12,  -160,  -160,  -160,  -160,  -160,     0,   -17,
       2,   782,   356,    92,  -160,  -160,    -8,     1,   229,   782,
     782,   782,  -160,  -160,  -160,    10,   531,     3,    20,    23,
      39,    40,   742,   172,  -160,  -160,   132,  -160,    -8,  -160,
     298,    50,     2,  -160,    33,   328,  -160,  -160,  -160,   149,
     782,   782,   782,   782,   782,   782,   782,   782,   782,   782,
     782,   782,   782,   782,   782,   782,   782,   782,  -160,   356,
    -160,  -160,   782,   782,  -160,   358,   -18,  -160,    35,   212,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,    36,   269,
     786,   786,   786,  -160,  -160,  -160,  -160,    64,   388,   657,
     722,   691,   619,   531,  -160,   531,  -160,   766,    -5,    -5,
      -5,    -5,    41,  -160,   766,    41,   577,    20,   418,   448,
    -160,  -160,  -160,  -160,    56,  -160,  -160,    58,   478,  -160,
    -160,  -160,   189,   786,   786,   786,   786,   786,   786,   782,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   786,
    -160,   786,  -160,   252,   252,  -160,  -160,    72,  -160,   508,
     674,   736,   708,   640,   554,  -160,   531,  -160,   778,    77,
      77,    77,    77,    93,  -160,   778,    93,   598,  -160,   103,
    -160,  -160,   252,  -160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,   100,  -160,  -160,   105,  -160,  -160,   -16,
      37,    11,    62,   -20,    94,    29,  -159,   -22,   -21,   -71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int16 yytable[] =
{
      36,    49,    39,    48,   188,   189,    23,    55,    56,    57,
      58,    13,    65,    14,    67,   131,    21,   132,    24,    17,
      26,    85,    73,    74,    93,    22,    48,    76,    18,   139,
     140,   141,    51,   193,    47,    59,    53,    78,    79,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    92,    65,    39,
      67,   128,   129,    81,    82,    83,    21,    96,   133,    74,
     136,   169,   170,   171,   172,   173,   174,   175,   138,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   142,
     187,   132,   165,     1,   148,     2,   150,    40,    41,     3,
       4,     5,    42,     6,   156,   157,   190,   192,    15,   159,
     148,   162,   150,    16,    95,    43,   127,    28,   135,    29,
      52,   157,    30,     0,    31,    44,     0,    45,   176,    32,
      33,    34,    35,     1,     0,     2,     0,    40,    41,     3,
       4,     5,    42,     6,     0,    -2,     1,     0,     2,     0,
      98,     0,     3,     4,     5,    43,     6,    28,     0,    29,
       0,     0,    30,     0,    31,    91,     0,    45,     0,    32,
      33,    34,    35,    86,    99,     0,   100,    40,    41,   101,
       0,   102,    42,   103,     0,     0,   104,   105,   106,   107,
     167,     0,     0,     0,     0,    43,     0,    28,     0,    29,
       0,     0,    30,     0,    31,    87,     0,    45,     0,    32,
      33,    34,    35,   134,    99,     0,   100,    40,    41,   101,
       0,   102,    42,   168,     0,     0,   104,   105,   106,   107,
      54,     0,     0,     0,     0,    43,     0,    28,     0,    29,
       0,     0,    30,     0,    31,   -34,     0,    45,     0,    32,
      33,    34,    35,   134,    28,     0,    29,    40,    41,    30,
       0,    31,    42,     0,     0,     0,    32,    33,    34,    35,
     137,     0,     0,     0,     0,    43,     0,    28,     0,    29,
       0,     0,    30,     0,    31,     0,     0,    45,     0,    32,
      33,    34,    35,     0,    28,     0,    29,     0,     0,    30,
       0,    31,     0,     0,     0,     0,    32,    33,    34,    35,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,     0,     0,
      76,     0,     0,    94,     0,     0,     0,     0,     0,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,     0,     2,
      76,     0,    97,     3,     4,     5,     0,     6,     0,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,     0,     0,
      76,     0,     0,   130,     0,     0,     0,     0,     0,    77,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   154,     0,   155,   156,   157,   158,     0,     0,
     159,     0,   160,     0,     0,     0,     0,     0,     0,   161,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,     0,     0,
      76,     0,   163,     0,     0,     0,     0,     0,     0,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,     0,     0,
      76,     0,   164,     0,     0,     0,     0,     0,     0,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,     0,     0,
      76,     0,   166,     0,     0,     0,     0,     0,     0,    77,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   154,     0,   155,   156,   157,   158,     0,     0,
     159,     0,   191,    60,    61,    62,    63,    64,    65,   161,
      67,    68,    69,    70,     0,    71,     0,    72,    73,    74,
      75,     0,     0,    76,     0,     0,   143,   144,   145,   146,
     147,   148,    77,   150,   151,   152,   153,     0,   154,     0,
     155,   156,   157,   158,     0,     0,   159,     0,     0,    60,
      61,    62,    63,     0,    65,   161,    67,    68,    69,    70,
       0,    71,     0,    72,    73,    74,    75,     0,     0,    76,
     143,   144,   145,   146,     0,   148,     0,   150,   151,   152,
     153,     0,   154,     0,   155,   156,   157,   158,     0,     0,
     159,    60,    61,    62,     0,     0,    65,     0,    67,    68,
      69,    70,     0,    71,     0,    72,    73,    74,    75,     0,
       0,    76,   143,   144,   145,     0,     0,   148,     0,   150,
     151,   152,   153,     0,   154,     0,   155,   156,   157,   158,
      61,    62,   159,     0,    65,     0,    67,    68,    69,    70,
       0,    71,     0,    72,    73,    74,    75,   144,   145,    76,
       0,   148,     0,   150,   151,   152,   153,     0,   154,     0,
     155,   156,   157,   158,    61,     0,   159,     0,    65,     0,
      67,    68,    69,    70,     0,    71,     0,    72,    73,    74,
      75,   144,     0,    76,     0,   148,     0,   150,   151,   152,
     153,     0,   154,     0,   155,   156,   157,   158,     0,    65,
     159,    67,    68,    69,    70,     0,    71,     0,    72,    73,
      74,    75,     0,   148,    76,   150,   151,   152,   153,     0,
     154,     0,   155,   156,   157,   158,     0,    28,   159,    29,
       0,     0,    30,     0,    31,     0,     0,    84,     0,    32,
      33,    34,    35,    65,     0,    67,     0,    69,    70,     0,
      71,     0,    72,    73,    74,   148,     0,   150,    76,   152,
     153,     0,   154,     0,   155,   156,   157,    28,     0,    29,
     159,    99,    30,   100,    31,     0,   101,     0,   102,    32,
      33,    34,    35,   104,   105,   106,   107,     1,     0,     2,
       0,     0,     0,     3,     4,     5,     0,     6
};

static const yytype_int16 yycheck[] =
{
      21,    23,    22,    23,   163,   164,    23,    28,    29,    30,
      31,    35,    17,     0,    19,    33,    16,    35,    35,     8,
      18,    42,    27,    28,    46,    25,    46,    32,    40,   100,
     101,   102,    40,   192,    23,    25,    35,    34,    18,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    46,    17,    79,
      19,    82,    83,    40,    25,    25,    16,    34,    33,    28,
      34,   142,   143,   144,   145,   146,   147,   148,    99,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    25,
     161,    35,    34,     1,    17,     3,    19,     5,     6,     7,
       8,     9,    10,    11,    27,    28,    34,     4,     8,    32,
      17,   127,    19,     8,    52,    23,    79,    25,    89,    27,
      26,    28,    30,    -1,    32,    33,    -1,    35,   149,    37,
      38,    39,    40,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    -1,     0,     1,    -1,     3,    -1,
       1,    -1,     7,     8,     9,    23,    11,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,     1,    25,    -1,    27,     5,     6,    30,
      -1,    32,    10,    34,    -1,    -1,    37,    38,    39,    40,
       1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,     1,    25,    -1,    27,     5,     6,    30,
      -1,    32,    10,    34,    -1,    -1,    37,    38,    39,    40,
       1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,     1,    25,    -1,    27,     5,     6,    30,
      -1,    32,    10,    -1,    -1,    -1,    37,    38,    39,    40,
       1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    40,    -1,    25,    -1,    27,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,     3,
      32,    -1,    34,     7,     8,     9,    -1,    11,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    34,    12,    13,    14,    15,    16,    17,    41,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    12,    13,    14,    15,
      16,    17,    41,    19,    20,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    41,    19,    20,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,    32,
      12,    13,    14,    15,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    12,    13,    14,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    32,    12,    13,    14,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      13,    14,    32,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    13,    14,    32,
      -1,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    13,    -1,    32,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    13,    -1,    32,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    17,
      32,    19,    20,    21,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    17,    32,    19,    20,    21,    22,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    25,    32,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    40,    17,    -1,    19,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    17,    -1,    19,    32,    21,
      22,    -1,    24,    -1,    26,    27,    28,    25,    -1,    27,
      32,    25,    30,    27,    32,    -1,    30,    -1,    32,    37,
      38,    39,    40,    37,    38,    39,    40,     1,    -1,     3,
      -1,    -1,    -1,     7,     8,     9,    -1,    11
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     7,     8,     9,    11,    45,    46,    47,
      50,    55,    57,    35,     0,    47,    50,    55,    40,    51,
      58,    16,    25,    23,    35,    48,    18,    56,    25,    27,
      30,    32,    37,    38,    39,    40,    62,    52,    54,    57,
       5,     6,    10,    23,    33,    35,    49,    55,    57,    61,
      62,    40,    58,    35,     1,    62,    62,    62,    62,    25,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    24,    26,    27,    28,    29,    32,    41,    34,    18,
      53,    40,    25,    25,    35,    62,     1,    33,    59,    60,
      61,    33,    55,    61,    35,    56,    34,    34,     1,    25,
      27,    30,    32,    34,    37,    38,    39,    40,    63,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    54,    62,    62,
      35,    33,    35,    33,     1,    59,    34,     1,    62,    63,
      63,    63,    25,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    24,    26,    27,    28,    29,    32,
      34,    41,    53,    34,    34,    34,    34,     1,    34,    63,
      63,    63,    63,    63,    63,    63,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    60,    60,
      34,    34,     4,    60
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
        case 2:
#line 43 "uccompiler.y"
    {
																root = cria_no("Program","");
																adicionar_filho(root,(yyvsp[(1) - (1)].ast));
																(yyval.ast) = root;
															}
    break;

  case 3:
#line 51 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
																(yyval.ast) = (yyvsp[(1) - (2)].ast);
															}
    break;

  case 4:
#line 55 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
																(yyval.ast) = (yyvsp[(1) - (2)].ast);
															}
    break;

  case 5:
#line 59 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
																(yyval.ast) = (yyvsp[(1) - (2)].ast);
															}
    break;

  case 6:
#line 63 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 7:
#line 66 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 8:
#line 69 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 9:
#line 75 "uccompiler.y"
    {
																(yyval.ast) = cria_no("FuncDefinition","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(2) - (3)].ast));
																adicionar_irmao((yyvsp[(2) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 10:
#line 84 "uccompiler.y"
    {
																(yyval.ast) = cria_no("FuncBody","");
															}
    break;

  case 11:
#line 87 "uccompiler.y"
    {
																(yyval.ast) = cria_no("FuncBody","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
															}
    break;

  case 12:
#line 94 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
																(yyval.ast) = (yyvsp[(1) - (2)].ast);
															}
    break;

  case 13:
#line 98 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
																(yyval.ast) = (yyvsp[(1) - (2)].ast);
															}
    break;

  case 14:
#line 102 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 15:
#line 105 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 16:
#line 111 "uccompiler.y"
    {
																(yyval.ast) = cria_no("FuncDeclaration","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(2) - (3)].ast));
															}
    break;

  case 17:
#line 119 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Id",(yyvsp[(1) - (4)].string));
																adicionar_irmao((yyval.ast),(yyvsp[(3) - (4)].ast));
															}
    break;

  case 18:
#line 126 "uccompiler.y"
    {
																(yyval.ast) = cria_no("ParamList","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (2)].ast));
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 19:
#line 134 "uccompiler.y"
    {
																(yyval.ast) = NULL;
															}
    break;

  case 20:
#line 137 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(2) - (3)].ast),(yyvsp[(3) - (3)].ast));
																(yyval.ast) = (yyvsp[(2) - (3)].ast);
															}
    break;

  case 21:
#line 144 "uccompiler.y"
    {
																(yyval.ast) = cria_no("ParamDeclaration","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (1)].ast));
															}
    break;

  case 22:
#line 148 "uccompiler.y"
    {
																(yyval.ast) = cria_no("ParamDeclaration","");
																aux = cria_no("Id",(yyvsp[(2) - (2)].string));
																adicionar_filho((yyval.ast),(yyvsp[(1) - (2)].ast));
																adicionar_irmao((yyvsp[(1) - (2)].ast),aux);

															}
    break;

  case 23:
#line 158 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Declaration","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (4)].ast));
																adicionar_irmao((yyvsp[(1) - (4)].ast),(yyvsp[(2) - (4)].ast));
																adicionar_irmao((yyval.ast),(yyvsp[(3) - (4)].ast));
															}
    break;

  case 24:
#line 164 "uccompiler.y"
    {
																print_flag = 1;
																(yyval.ast) = NULL;
															}
    break;

  case 25:
#line 171 "uccompiler.y"
    {
																(yyval.ast) = NULL;
															}
    break;

  case 26:
#line 174 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Declaration","");
																aux = cria_no(type_spec,"");
																adicionar_filho((yyval.ast),aux);
																adicionar_irmao(aux,(yyvsp[(2) - (3)].ast));
																adicionar_irmao((yyval.ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 27:
#line 184 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Char","");
																type_spec = (yyval.ast)->tipo;
															}
    break;

  case 28:
#line 188 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Int","");
																type_spec = (yyval.ast)->tipo;
															}
    break;

  case 29:
#line 192 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Void","");
																type_spec = (yyval.ast)->tipo;
															}
    break;

  case 30:
#line 196 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Short","");
																type_spec = (yyval.ast)->tipo;
															}
    break;

  case 31:
#line 200 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Double","");
																type_spec = (yyval.ast)->tipo;
															}
    break;

  case 32:
#line 207 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
															}
    break;

  case 33:
#line 210 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Id",(yyvsp[(1) - (3)].string));
																adicionar_irmao((yyval.ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 34:
#line 216 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 35:
#line 219 "uccompiler.y"
    {
																adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
																if((yyvsp[(1) - (2)].ast)!=NULL)
																	(yyval.ast) = (yyvsp[(1) - (2)].ast);
																else
																	(yyval.ast) = (yyvsp[(2) - (2)].ast);
															}
    break;

  case 36:
#line 229 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
															}
    break;

  case 37:
#line 232 "uccompiler.y"
    {
																print_flag = 1;
																(yyval.ast) = NULL;
															}
    break;

  case 38:
#line 239 "uccompiler.y"
    {
																(yyval.ast) = NULL;
															}
    break;

  case 39:
#line 242 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (2)].ast);
															}
    break;

  case 40:
#line 245 "uccompiler.y"
    {
																(yyval.ast) = NULL;
															}
    break;

  case 41:
#line 248 "uccompiler.y"
    {
																if((yyvsp[(2) - (3)].ast)!=NULL && (yyvsp[(2) - (3)].ast)->irmao!=NULL){
																	(yyval.ast) = cria_no("StatList","");
																	adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
																}
																else if((yyvsp[(2) - (3)].ast)!=NULL && (yyvsp[(2) - (3)].ast)->irmao==NULL){
																	(yyval.ast) = (yyvsp[(2) - (3)].ast);
																}
																else (yyval.ast) = NULL;
															}
    break;

  case 42:
#line 259 "uccompiler.y"
    {
																(yyval.ast) = cria_no("If","");
																aux2 = (yyvsp[(3) - (5)].ast);
																adicionar_filho((yyval.ast),aux2);
																if((yyvsp[(5) - (5)].ast) != NULL){
																	adicionar_irmao(aux2,(yyvsp[(5) - (5)].ast));
																}
																else{
																	aux = cria_no("Null","");
																	adicionar_irmao(aux2,aux);
																}
																aux = cria_no("Null","");
																adicionar_irmao(aux2,aux);
															}
    break;

  case 43:
#line 273 "uccompiler.y"
    {
																(yyval.ast) = cria_no("If","");
																aux2 = (yyvsp[(3) - (7)].ast);
																adicionar_filho((yyval.ast),aux2);
																if((yyvsp[(5) - (7)].ast) != NULL){
																	adicionar_irmao(aux2,(yyvsp[(5) - (7)].ast));
																}
																else{
																	aux = cria_no("Null","");
																	adicionar_irmao(aux2,aux);
																}
																if((yyvsp[(7) - (7)].ast)!= NULL){
																	adicionar_irmao(aux2,(yyvsp[(7) - (7)].ast));
																}
																else{
																	aux = cria_no("Null","");
																	adicionar_irmao(aux2,aux);
																}
															}
    break;

  case 44:
#line 292 "uccompiler.y"
    {
																(yyval.ast) = cria_no("While","");
																aux2 = (yyvsp[(3) - (5)].ast);
																adicionar_filho((yyval.ast),aux2);
																if((yyvsp[(5) - (5)].ast) != NULL){
																	adicionar_irmao(aux2,(yyvsp[(5) - (5)].ast));
																}
																else{
																	aux = cria_no("Null","");
																	adicionar_irmao(aux2,aux);
																}
															}
    break;

  case 45:
#line 304 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Return","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
															}
    break;

  case 46:
#line 308 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Return","");
																aux = cria_no("Null","");
																adicionar_filho((yyval.ast),aux);
															}
    break;

  case 47:
#line 313 "uccompiler.y"
    {
																(yyval.ast) = NULL;
																print_flag = 1;
															}
    break;

  case 48:
#line 320 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Store","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 49:
#line 325 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Comma","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 50:
#line 330 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Eq","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 51:
#line 335 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Ne","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 52:
#line 340 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Le","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 53:
#line 345 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Ge","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 54:
#line 350 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Lt","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 55:
#line 355 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Gt","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 56:
#line 360 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Add","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 57:
#line 365 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Sub","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 58:
#line 370 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Mul","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 59:
#line 375 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Div","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 60:
#line 380 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Mod","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 61:
#line 385 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Or","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 62:
#line 390 "uccompiler.y"
    {
																(yyval.ast) = cria_no("And","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 63:
#line 395 "uccompiler.y"
    {
																(yyval.ast) = cria_no("BitWiseAnd","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 64:
#line 400 "uccompiler.y"
    {
																(yyval.ast) = cria_no("BitWiseOr","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 65:
#line 405 "uccompiler.y"
    {
																(yyval.ast) = cria_no("BitWiseXor","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 66:
#line 410 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Plus","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 67:
#line 414 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Minus","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 68:
#line 418 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Not","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 69:
#line 422 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Call","");
																aux = cria_no("Id",(yyvsp[(1) - (3)].string));
																adicionar_filho((yyval.ast),aux);
															}
    break;

  case 70:
#line 427 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Call","");
																aux = cria_no("Id",(yyvsp[(1) - (4)].string));
																aux2 = (yyvsp[(3) - (4)].ast);
																adicionar_filho((yyval.ast),aux);
																adicionar_irmao(aux,(yyvsp[(3) - (4)].ast));
															}
    break;

  case 71:
#line 434 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
															}
    break;

  case 72:
#line 437 "uccompiler.y"
    {
																(yyval.ast) = cria_no("IntLit",(yyvsp[(1) - (1)].string));
															}
    break;

  case 73:
#line 440 "uccompiler.y"
    {
																(yyval.ast) = cria_no("ChrLit",(yyvsp[(1) - (1)].string));
															}
    break;

  case 74:
#line 443 "uccompiler.y"
    {
																(yyval.ast) = cria_no("RealLit",(yyvsp[(1) - (1)].string));
															}
    break;

  case 75:
#line 446 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(2) - (3)].ast);
															}
    break;

  case 76:
#line 450 "uccompiler.y"
    {
																(yyval.ast) = NULL;
																print_flag = 1;
															}
    break;

  case 77:
#line 454 "uccompiler.y"
    {
																(yyval.ast) = NULL;
																print_flag = 1;
															}
    break;

  case 78:
#line 461 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Store","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 79:
#line 466 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(1) - (3)].ast);
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 80:
#line 470 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Eq","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 81:
#line 475 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Ne","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 82:
#line 480 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Le","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 83:
#line 485 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Ge","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 84:
#line 490 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Lt","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 85:
#line 495 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Gt","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 86:
#line 500 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Add","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 87:
#line 505 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Sub","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 88:
#line 510 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Mul","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 89:
#line 515 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Div","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 90:
#line 520 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Mod","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 91:
#line 525 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Or","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 92:
#line 530 "uccompiler.y"
    {
																(yyval.ast) = cria_no("And","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 93:
#line 535 "uccompiler.y"
    {
																(yyval.ast) = cria_no("BitWiseAnd","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 94:
#line 540 "uccompiler.y"
    {
																(yyval.ast) = cria_no("BitWiseOr","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 95:
#line 545 "uccompiler.y"
    {
																(yyval.ast) = cria_no("BitWiseXor","");
																adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
																adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
															}
    break;

  case 96:
#line 551 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Plus","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 97:
#line 555 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Minus","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 98:
#line 559 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Not","");
																adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
															}
    break;

  case 99:
#line 563 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Call","");
																aux = cria_no("Id",(yyvsp[(1) - (3)].string));
																adicionar_filho((yyval.ast),aux);
															}
    break;

  case 100:
#line 568 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Call","");
																aux = cria_no("Id",(yyvsp[(1) - (4)].string));
																adicionar_filho((yyval.ast),aux);
																adicionar_irmao(aux,(yyvsp[(3) - (4)].ast));
															}
    break;

  case 101:
#line 574 "uccompiler.y"
    {
																(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
															}
    break;

  case 102:
#line 577 "uccompiler.y"
    {
																(yyval.ast) = cria_no("IntLit",(yyvsp[(1) - (1)].string));
															}
    break;

  case 103:
#line 580 "uccompiler.y"
    {
																(yyval.ast) = cria_no("ChrLit",(yyvsp[(1) - (1)].string));
															}
    break;

  case 104:
#line 583 "uccompiler.y"
    {
																(yyval.ast) = cria_no("RealLit",(yyvsp[(1) - (1)].string));
															}
    break;

  case 105:
#line 586 "uccompiler.y"
    {
																(yyval.ast) = (yyvsp[(2) - (3)].ast);
															}
    break;

  case 106:
#line 589 "uccompiler.y"
    {
																(yyval.ast) = NULL;
																print_flag = 1;
															}
    break;

  case 107:
#line 593 "uccompiler.y"
    {
																(yyval.ast) = NULL;
																print_flag = 1;
															}
    break;


/* Line 1267 of yacc.c.  */
#line 2631 "y.tab.c"
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


#line 599 "uccompiler.y"



int main(int argc, char *argv[]){
	if(argc > 1){
		// Análise Lexical 
		if(strcmp(argv[1],"-1")==0){
			yylex();
		}
		else if(strcmp(argv[1],"-l") == 0){
			flag=1;
			yylex();
		}

		// Análise Sintática
		else if(strcmp(argv[1],"-2") == 0){
			flag=2;
			yyparse();
			yylex_destroy();
		}
		else if(strcmp(argv[1],"-t") == 0){	
			flag=2;
			yyparse();
			yylex_destroy();
			if(!print_flag)
				imprime_arvore(root,0);
		}

		// Análise Semântica
		else if(strcmp(argv[1],"-3") == 0){
			flag=2;
			yyparse();
			yylex_destroy();
		}
		else if(strcmp(argv[1],"-s") == 0){
			flag=2;
			yyparse();
			yylex_destroy();
			if(!print_flag){
				le_arvore_tabela(root);
				imprime_tabela(tabela_simbolos);
				anotar_arvore(root);
				imprime_arvore_anotada(root,0);
			}
		}
	}
	// Geração de Código
	else{
		flag=2;
		yyparse();
		yylex_destroy();
		if(!print_flag){
			le_arvore_tabela(root);
			anotar_arvore(root);
			gera_codigo(root);
		}
		return 0;
	}
}
