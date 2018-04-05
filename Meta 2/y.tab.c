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
     OR = 286,
     PLUS = 287,
     RBRACE = 288,
     RPAR = 289,
     SEMI = 290,
     REALLIT = 291,
     CHRLIT = 292,
     INTLIT = 293,
     ID = 294,
     RESERVED = 295,
     SIGNAL = 296,
     ELSE_PRIORITY = 297
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
#define OR 286
#define PLUS 287
#define RBRACE 288
#define RPAR 289
#define SEMI 290
#define REALLIT 291
#define CHRLIT 292
#define INTLIT 293
#define ID 294
#define RESERVED 295
#define SIGNAL 296
#define ELSE_PRIORITY 297




/* Copy the first part of user declarations.  */
#line 1 "uccompiler.y"

	/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
	*/
	#include <stdio.h>
	#include <stdio.h>
	#include <string.h>
	#include "arvore.h"

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
#line 16 "uccompiler.y"
{
	char* string;
	struct AST* ast;
}
/* Line 193 of yacc.c.  */
#line 200 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 213 "y.tab.c"

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
#define YYLAST   801

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    18,    20,    22,
      24,    27,    31,    34,    38,    41,    44,    46,    48,    52,
      57,    60,    61,    65,    67,    70,    75,    76,    80,    82,
      84,    86,    88,    90,    92,    96,    98,   101,   104,   108,
     114,   122,   128,   131,   135,   139,   141,   144,   146,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   209,   213,   217,   221,   224,   227,
     230,   234,   239,   241,   243,   245,   247,   251,   256,   260,
     264,   268,   272,   276,   280,   284,   288,   292,   296,   300,
     304,   308,   312,   316,   320,   324,   328,   332,   335,   338,
     341,   345,   350,   352,   354,   356,   358,   362,   367
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    -1,    45,    46,    -1,    45,    49,
      -1,    45,    54,    -1,    45,     1,    35,    -1,    46,    -1,
      49,    -1,    54,    -1,     1,    35,    -1,    56,    50,    47,
      -1,    23,    33,    -1,    23,    48,    33,    -1,    58,    48,
      -1,    54,    48,    -1,    58,    -1,    54,    -1,    56,    50,
      35,    -1,    39,    25,    51,    34,    -1,    53,    52,    -1,
      -1,    18,    53,    52,    -1,    56,    -1,    56,    39,    -1,
      56,    57,    55,    35,    -1,    -1,    18,    57,    55,    -1,
       3,    -1,     8,    -1,    11,    -1,     7,    -1,     9,    -1,
      39,    -1,    39,    16,    61,    -1,    35,    -1,    61,    35,
      -1,    23,    33,    -1,    23,    59,    33,    -1,     6,    25,
      61,    34,    60,    -1,     6,    25,    61,    34,    60,     4,
      60,    -1,     5,    25,    61,    34,    60,    -1,    10,    35,
      -1,    10,    61,    35,    -1,    23,     1,    33,    -1,    60,
      -1,    59,    60,    -1,    58,    -1,     1,    35,    -1,    61,
      16,    61,    -1,    61,    18,    61,    -1,    61,    20,    61,
      -1,    61,    29,    61,    -1,    61,    24,    61,    -1,    61,
      21,    61,    -1,    61,    26,    61,    -1,    61,    22,    61,
      -1,    61,    32,    61,    -1,    61,    27,    61,    -1,    61,
      17,    61,    -1,    61,    19,    61,    -1,    61,    28,    61,
      -1,    61,    31,    61,    -1,    61,    15,    61,    -1,    61,
      13,    61,    -1,    61,    12,    61,    -1,    61,    14,    61,
      -1,    32,    61,    -1,    27,    61,    -1,    30,    61,    -1,
      39,    25,    34,    -1,    39,    25,    62,    34,    -1,    39,
      -1,    38,    -1,    37,    -1,    36,    -1,    25,    61,    34,
      -1,    39,    25,     1,    34,    -1,    25,     1,    34,    -1,
      62,    16,    62,    -1,    62,    18,    61,    -1,    62,    20,
      62,    -1,    62,    29,    62,    -1,    62,    24,    62,    -1,
      62,    21,    62,    -1,    62,    26,    62,    -1,    62,    22,
      62,    -1,    62,    32,    62,    -1,    62,    27,    62,    -1,
      62,    17,    62,    -1,    62,    19,    62,    -1,    62,    28,
      62,    -1,    62,    31,    62,    -1,    62,    15,    62,    -1,
      62,    13,    62,    -1,    62,    12,    62,    -1,    62,    14,
      62,    -1,    32,    62,    -1,    27,    62,    -1,    30,    62,
      -1,    39,    25,    34,    -1,    39,    25,    62,    34,    -1,
      39,    -1,    38,    -1,    37,    -1,    36,    -1,    25,    61,
      34,    -1,    39,    25,     1,    34,    -1,    25,     1,    34,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    54,    58,    62,    66,    70,    73,    76,
      79,    86,    95,    98,   105,   109,   113,   116,   122,   130,
     137,   145,   148,   156,   160,   170,   179,   182,   192,   196,
     200,   204,   208,   215,   218,   225,   228,   232,   235,   246,
     259,   281,   293,   298,   302,   309,   315,   322,   328,   334,
     339,   345,   350,   355,   360,   365,   370,   376,   381,   386,
     391,   396,   402,   407,   412,   417,   422,   428,   432,   436,
     441,   447,   455,   458,   461,   464,   467,   471,   475,   482,
     487,   492,   497,   502,   507,   512,   517,   523,   528,   533,
     538,   543,   549,   554,   559,   564,   569,   575,   579,   583,
     588,   593,   600,   603,   606,   609,   612,   616,   620
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
  "LBRACE", "LE", "LPAR", "LT", "MINUS", "MOD", "NE", "NOT", "OR", "PLUS",
  "RBRACE", "RPAR", "SEMI", "REALLIT", "CHRLIT", "INTLIT", "ID",
  "RESERVED", "SIGNAL", "ELSE_PRIORITY", "$accept", "Program",
  "FunctionsAndDeclarations", "FunctionDefinition", "FunctionBody",
  "DeclarationAndStatements", "FunctionDeclaration", "FunctionDeclarator",
  "ParameterList", "ParameterListAux", "ParameterDeclaration",
  "Declaration", "DeclarationAux", "TypeSpec", "Declarator", "Statement",
  "StatementAux", "StatementError", "Expr", "Expr2", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    46,    47,    47,    48,    48,    48,    48,    49,    50,
      51,    52,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     3,     2,     3,     2,     2,     1,     1,     3,     4,
       2,     0,     3,     1,     2,     4,     0,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     3,     5,
       7,     5,     2,     3,     3,     1,     2,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     4,     1,     1,     1,     1,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     4,     1,     1,     1,     1,     3,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    28,    31,    29,    32,    30,     0,     0,     7,
       8,     9,     0,    10,     1,     0,     3,     4,     5,    33,
       0,    26,     6,     0,     0,     0,    18,    11,     0,     0,
       0,     0,     0,     0,    75,    74,    73,    72,    34,     0,
      21,    23,     0,     0,     0,     0,    12,    35,     0,    17,
       0,    16,     0,    33,    26,    25,     0,     0,    68,    69,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,    20,    24,     0,     0,    42,     0,     0,    37,
      47,     0,    45,    13,    15,    14,    36,    27,    78,    76,
       0,     0,     0,     0,     0,    70,   105,   104,   103,   102,
       0,    65,    64,    66,    63,    49,    59,    50,    60,    51,
      54,    56,    53,    55,    58,    61,    52,    62,    57,    21,
       0,     0,    43,    44,    48,     0,    38,    46,    77,     0,
       0,    98,    99,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    22,     0,     0,   108,   106,     0,
     100,     0,    95,    94,    96,    93,    79,    89,    80,    90,
      81,    84,    86,    83,    85,    88,    91,    82,    92,    87,
      41,    39,   107,   101,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    27,    48,    10,    20,    39,    82,
      40,    49,    29,    50,    21,    90,    91,    92,    52,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -91
static const yytype_int16 yypact[] =
{
     303,   -33,   -91,   -91,   -91,   -91,   -91,    13,   268,   -91,
     -91,   -91,   -20,   -91,   -91,   -13,   -91,   -91,   -91,   -10,
     -18,     0,   -91,   738,   790,   255,   -91,   -91,   -16,    -9,
     179,   738,   738,   738,   -91,   -91,   -91,    10,   506,     2,
      19,    -1,    34,    42,   723,   124,   -91,   -91,    33,   292,
     -16,   292,   320,    54,     0,   -91,    37,   368,   -91,   -91,
     -91,    56,   738,   738,   738,   738,   738,   738,   738,   738,
     738,   738,   738,   738,   738,   738,   738,   738,   738,   738,
     -91,   790,   -91,   -91,   738,   738,   -91,   344,    -2,   -91,
     -91,   163,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
      38,   218,   753,   753,   753,   -91,   -91,   -91,   -91,    49,
     391,   628,   116,   662,   590,   506,   -91,   506,   -91,   707,
      -3,    -3,    -3,    -3,    63,   -91,   707,   548,    63,    19,
     414,   437,   -91,   -91,   -91,    44,   -91,   -91,   -91,    43,
     460,   -91,   -91,   -91,   140,   753,   753,   753,   753,   753,
     753,   738,   753,   753,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   -91,   -91,   202,   202,   -91,   -91,    55,
     -91,   483,   645,   693,   679,   611,   527,   -91,   506,   -91,
     719,    41,    41,    41,    41,    68,   -91,   719,   569,    68,
     -91,    93,   -91,   -91,   202,   -91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,    90,   -91,   -17,    91,   -91,   -91,   -29,
      20,    12,    48,     3,    75,   -21,   -91,   -90,   -23,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      38,   137,    13,    12,    51,    25,    23,    57,    58,    59,
      60,    12,    11,    14,    67,    24,    69,    26,    28,    19,
      18,    87,    22,    53,    75,    76,    55,    41,    51,    79,
      51,   133,    94,   134,    95,    61,    80,    81,    83,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   100,   150,    84,
     152,   130,   131,   141,   142,   143,    93,    85,   158,   159,
      23,    98,   138,   162,   144,   190,   191,   167,   140,   134,
      67,   101,    69,   102,    41,   150,   103,   152,   104,   192,
     105,    76,   106,   107,   108,   109,   159,   194,    16,    17,
     164,   129,    97,    54,   195,   171,   172,   173,   174,   175,
     176,   177,     0,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,    88,     0,     0,   178,    42,
      43,     0,     0,    67,    44,    69,    70,    71,    72,     0,
      73,   169,    74,    75,    76,    77,     0,    45,    79,    30,
       0,    31,     0,     0,    32,     0,    33,    89,     0,    47,
      34,    35,    36,    37,   135,   101,     0,   102,    42,    43,
     103,     0,   104,    44,   170,     0,   106,   107,   108,   109,
      56,     0,     0,     0,     0,     0,    45,     0,    30,     0,
      31,     0,     0,    32,     0,    33,   136,     0,    47,    34,
      35,    36,    37,   135,    30,     0,    31,    42,    43,    32,
       0,    33,    44,     0,     0,    34,    35,    36,    37,   139,
       0,     0,     0,     0,     0,    45,     0,    30,     0,    31,
       0,     0,    32,     0,    33,     0,     0,    47,    34,    35,
      36,    37,     0,    30,     0,    31,     0,     0,    32,     0,
      33,     0,     0,     0,    34,    35,    36,    37,     2,     0,
      42,    43,     3,     4,     5,    44,     6,     0,    -2,    15,
       0,     2,     0,     0,     0,     3,     4,     5,    45,     6,
      30,     0,    31,     0,     0,    32,     0,    33,    46,     0,
      47,    34,    35,    36,    37,     2,     0,    42,    43,     3,
       4,     5,    44,     6,     1,     0,     2,     0,     0,     0,
       3,     4,     5,     0,     6,    45,     0,    30,     0,    31,
       0,     0,    32,     0,    33,     0,     0,    47,    34,    35,
      36,    37,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,     0,    74,    75,    76,    77,
       0,    78,    79,     0,     0,    96,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,     0,
      74,    75,    76,    77,     0,    78,    79,     0,     0,   132,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    73,     0,    74,    75,    76,    77,     0,    78,
      79,     0,    99,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,     0,   156,     0,   157,   158,   159,
     160,     0,   161,   162,     0,   163,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,     0,
      74,    75,    76,    77,     0,    78,    79,     0,   165,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,     0,    74,    75,    76,    77,     0,    78,    79,
       0,   166,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,     0,    74,    75,    76,    77,
       0,    78,    79,     0,   168,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,   156,     0,   157,
     158,   159,   160,     0,   161,   162,     0,   193,    62,    63,
      64,    65,    66,    67,     0,    69,    70,    71,    72,     0,
      73,     0,    74,    75,    76,    77,     0,    78,    79,   145,
     146,   147,   148,   149,   150,     0,   152,   153,   154,   155,
       0,   156,     0,   157,   158,   159,   160,     0,   161,   162,
      62,    63,    64,    65,     0,    67,     0,    69,    70,    71,
      72,     0,    73,     0,    74,    75,    76,    77,     0,     0,
      79,   145,   146,   147,   148,     0,   150,     0,   152,   153,
     154,   155,     0,   156,     0,   157,   158,   159,   160,     0,
       0,   162,    62,    63,    64,     0,     0,    67,     0,    69,
      70,    71,    72,     0,    73,     0,    74,    75,    76,    77,
       0,     0,    79,   145,   146,   147,     0,     0,   150,     0,
     152,   153,   154,   155,     0,   156,     0,   157,   158,   159,
     160,    63,    64,   162,     0,    67,     0,    69,    70,    71,
      72,     0,    73,     0,    74,    75,    76,    77,   146,   147,
      79,     0,   150,     0,   152,   153,   154,   155,     0,   156,
       0,   157,   158,   159,   160,    63,     0,   162,     0,    67,
       0,    69,    70,    71,    72,     0,    73,     0,    74,    75,
      76,    77,   146,     0,    79,     0,   150,     0,   152,   153,
     154,   155,     0,   156,     0,   157,   158,   159,   160,     0,
     150,   162,   152,   153,   154,   155,     0,   156,     0,   157,
     158,   159,   160,     0,    67,   162,    69,     0,    71,    72,
       0,    73,     0,    74,    75,    76,   150,     0,   152,    79,
     154,   155,     0,   156,     0,   157,   158,   159,    30,     0,
      31,   162,     0,    32,     0,    33,     0,     0,    86,    34,
      35,    36,    37,    30,     0,    31,     0,     0,    32,     0,
      33,     0,     0,     0,    34,    35,    36,    37,   101,     0,
     102,     0,     0,   103,     0,   104,     0,     0,     0,   106,
     107,   108,   109,     2,     0,     0,     0,     3,     4,     5,
       0,     6
};

static const yytype_int16 yycheck[] =
{
      23,    91,    35,     0,    25,    23,    16,    30,    31,    32,
      33,     8,     0,     0,    17,    25,    19,    35,    18,    39,
       8,    44,    35,    39,    27,    28,    35,    24,    49,    32,
      51,    33,    49,    35,    51,    25,    34,    18,    39,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     1,    17,    25,
      19,    84,    85,   102,   103,   104,    33,    25,    27,    28,
      16,    34,    34,    32,    25,   165,   166,    34,   101,    35,
      17,    25,    19,    27,    81,    17,    30,    19,    32,    34,
      34,    28,    36,    37,    38,    39,    28,     4,     8,     8,
     129,    81,    54,    28,   194,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,     1,    -1,    -1,   151,     5,
       6,    -1,    -1,    17,    10,    19,    20,    21,    22,    -1,
      24,     1,    26,    27,    28,    29,    -1,    23,    32,    25,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    39,     1,    25,    -1,    27,     5,     6,
      30,    -1,    32,    10,    34,    -1,    36,    37,    38,    39,
       1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    -1,    35,    36,
      37,    38,    39,     1,    25,    -1,    27,     5,     6,    30,
      -1,    32,    10,    -1,    -1,    36,    37,    38,    39,     1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    36,    37,
      38,    39,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    -1,     0,     1,
      -1,     3,    -1,    -1,    -1,     7,     8,     9,    23,    11,
      25,    -1,    27,    -1,    -1,    30,    -1,    32,    33,    -1,
      35,    36,    37,    38,    39,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,     1,    -1,     3,    -1,    -1,    -1,
       7,     8,     9,    -1,    11,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    36,    37,
      38,    39,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    31,    32,    -1,    -1,    35,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    -1,    31,    32,    -1,    -1,    35,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    -1,    31,    32,    -1,    34,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    -1,    31,    32,    -1,    34,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    31,    32,
      -1,    34,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    31,    32,    -1,    34,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    31,    32,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    31,    32,
      12,    13,    14,    15,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    32,    12,    13,    14,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    -1,    32,    12,    13,    14,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    13,    14,    32,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    13,    14,
      32,    -1,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    26,    27,    28,    29,    13,    -1,    32,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    26,    27,
      28,    29,    13,    -1,    32,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      17,    32,    19,    20,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    17,    32,    19,    -1,    21,    22,
      -1,    24,    -1,    26,    27,    28,    17,    -1,    19,    32,
      21,    22,    -1,    24,    -1,    26,    27,    28,    25,    -1,
      27,    32,    -1,    30,    -1,    32,    -1,    -1,    35,    36,
      37,    38,    39,    25,    -1,    27,    -1,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    39,     3,    -1,    -1,    -1,     7,     8,     9,
      -1,    11
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     7,     8,     9,    11,    44,    45,    46,
      49,    54,    56,    35,     0,     1,    46,    49,    54,    39,
      50,    57,    35,    16,    25,    23,    35,    47,    18,    55,
      25,    27,    30,    32,    36,    37,    38,    39,    61,    51,
      53,    56,     5,     6,    10,    23,    33,    35,    48,    54,
      56,    58,    61,    39,    57,    35,     1,    61,    61,    61,
      61,    25,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    24,    26,    27,    28,    29,    31,    32,
      34,    18,    52,    39,    25,    25,    35,    61,     1,    33,
      58,    59,    60,    33,    48,    48,    35,    55,    34,    34,
       1,    25,    27,    30,    32,    34,    36,    37,    38,    39,
      62,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    53,
      61,    61,    35,    33,    35,     1,    33,    60,    34,     1,
      61,    62,    62,    62,    25,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    24,    26,    27,    28,
      29,    31,    32,    34,    52,    34,    34,    34,    34,     1,
      34,    62,    62,    62,    62,    62,    62,    62,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      60,    60,    34,    34,     4,    60
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
#line 46 "uccompiler.y"
    {
															root = cria_no("Program","");
															adicionar_filho(root,(yyvsp[(1) - (1)].ast));
															(yyval.ast) = root;
														}
    break;

  case 3:
#line 54 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 4:
#line 58 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 5:
#line 62 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 6:
#line 66 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 7:
#line 70 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 8:
#line 73 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 9:
#line 76 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 10:
#line 79 "uccompiler.y"
    {
															print_flag = 1;
															(yyval.ast) = NULL;
														}
    break;

  case 11:
#line 86 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncDefinition","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(2) - (3)].ast));
															adicionar_irmao((yyvsp[(2) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 12:
#line 95 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncBody","");
														}
    break;

  case 13:
#line 98 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncBody","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
														}
    break;

  case 14:
#line 105 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 15:
#line 109 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 16:
#line 113 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 17:
#line 116 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 18:
#line 122 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncDeclaration","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(2) - (3)].ast));
														}
    break;

  case 19:
#line 130 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (4)].string));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (4)].ast));
														}
    break;

  case 20:
#line 137 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ParamList","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (2)].ast));
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 21:
#line 145 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 22:
#line 148 "uccompiler.y"
    {
															adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
															adicionar_irmao((yyvsp[(2) - (3)].ast),(yyvsp[(3) - (3)].ast));
															(yyval.ast) = (yyvsp[(2) - (3)].ast);
														}
    break;

  case 23:
#line 156 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ParamDeclaration","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (1)].ast));
														}
    break;

  case 24:
#line 160 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ParamDeclaration","");
															aux = cria_no("Id",(yyvsp[(2) - (2)].string));
															adicionar_filho((yyval.ast),(yyvsp[(1) - (2)].ast));
															adicionar_irmao((yyvsp[(1) - (2)].ast),aux);

														}
    break;

  case 25:
#line 170 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Declaration","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (4)].ast));
															adicionar_irmao((yyvsp[(1) - (4)].ast),(yyvsp[(2) - (4)].ast));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (4)].ast));
														}
    break;

  case 26:
#line 179 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 27:
#line 182 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Declaration","");
															aux = cria_no(type_spec,"");
															adicionar_filho((yyval.ast),aux);
															adicionar_irmao(aux,(yyvsp[(2) - (3)].ast));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 28:
#line 192 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Char","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 29:
#line 196 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Int","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 30:
#line 200 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Void","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 31:
#line 204 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Short","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 32:
#line 208 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Double","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 33:
#line 215 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
														}
    break;

  case 34:
#line 218 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (3)].string));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 35:
#line 225 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 36:
#line 228 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 37:
#line 232 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 38:
#line 235 "uccompiler.y"
    {
															aux = (yyvsp[(2) - (3)].ast);
															if(aux!=NULL && aux->irmao!=NULL){
																(yyval.ast) = cria_no("StatList","");
																adicionar_filho((yyval.ast),aux);
															}
															else if(aux!=NULL && aux->irmao==NULL){
																(yyval.ast) = aux;
															}
														}
    break;

  case 39:
#line 246 "uccompiler.y"
    {
															(yyval.ast) = cria_no("If","");
															adicionar_filho((yyval.ast),(yyvsp[(3) - (5)].ast));
															if((yyvsp[(5) - (5)].ast) != NULL){
																adicionar_irmao((yyvsp[(3) - (5)].ast),(yyvsp[(5) - (5)].ast));
															}
															else{
																aux = cria_no("Null","");
																adicionar_irmao((yyvsp[(3) - (5)].ast),aux);
															}
															aux = cria_no("Null","");
															adicionar_irmao((yyvsp[(3) - (5)].ast),aux);
														}
    break;

  case 40:
#line 259 "uccompiler.y"
    {
															(yyval.ast) = cria_no("If","");
															adicionar_filho((yyval.ast),(yyvsp[(3) - (7)].ast));
															if((yyvsp[(5) - (7)].ast) != NULL){
																adicionar_irmao((yyvsp[(3) - (7)].ast),(yyvsp[(5) - (7)].ast));
															}
															else{
																aux = cria_no("Null","");
																adicionar_irmao((yyvsp[(3) - (7)].ast),aux);
															}
															if((yyvsp[(7) - (7)].ast) != NULL && (yyvsp[(5) - (7)].ast) != NULL){
																adicionar_irmao((yyvsp[(5) - (7)].ast),(yyvsp[(7) - (7)].ast));
															}
															else if((yyvsp[(7) - (7)].ast) != NULL && (yyvsp[(5) - (7)].ast) == NULL){
																adicionar_irmao((yyvsp[(3) - (7)].ast),(yyvsp[(7) - (7)].ast));
															}
															else{
																aux = cria_no("Null","");
																adicionar_irmao((yyvsp[(3) - (7)].ast),aux);
															}
														}
    break;

  case 41:
#line 281 "uccompiler.y"
    {
															(yyval.ast) = cria_no("While","");
															adicionar_filho((yyval.ast),(yyvsp[(3) - (5)].ast));
															if((yyvsp[(5) - (5)].ast) != NULL){
																adicionar_irmao((yyvsp[(3) - (5)].ast),(yyvsp[(5) - (5)].ast));
															}
															else{
																aux = cria_no("Null","");
																adicionar_irmao((yyvsp[(3) - (5)].ast),aux);
															}
														}
    break;

  case 42:
#line 293 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Return","");
															aux = cria_no("Null","");
															adicionar_filho((yyval.ast),aux);
														}
    break;

  case 43:
#line 298 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Return","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
														}
    break;

  case 44:
#line 302 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 45:
#line 309 "uccompiler.y"
    {
															if((yyvsp[(1) - (1)].ast) == NULL)
																(yyval.ast) = cria_no("Null","");
															else
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 46:
#line 315 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
															adicionar_irmao((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 47:
#line 322 "uccompiler.y"
    {
															if((yyvsp[(1) - (1)].ast) == NULL)
																(yyval.ast) = cria_no("Null","");
															else
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 48:
#line 328 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 49:
#line 334 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Store","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 50:
#line 339 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Comma","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 51:
#line 345 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Eq","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 52:
#line 350 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ne","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 53:
#line 355 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Le","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 54:
#line 360 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ge","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 55:
#line 365 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Lt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 56:
#line 370 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Gt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 57:
#line 376 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Add","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 58:
#line 381 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Sub","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 59:
#line 386 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mul","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 60:
#line 391 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Div","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 61:
#line 396 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mod","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 62:
#line 402 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Or","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 63:
#line 407 "uccompiler.y"
    {
															(yyval.ast) = cria_no("And","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 64:
#line 412 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseAnd","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 65:
#line 417 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseOr","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 66:
#line 422 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseXor","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 67:
#line 428 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Plus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 68:
#line 432 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Minus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 69:
#line 436 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Not","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 70:
#line 441 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (3)].string));
															adicionar_filho((yyval.ast),aux);
														}
    break;

  case 71:
#line 447 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (4)].string));
															aux2 = (yyvsp[(3) - (4)].ast);
															adicionar_filho((yyval.ast),aux);
															adicionar_irmao(aux,(yyvsp[(3) - (4)].ast));
														}
    break;

  case 72:
#line 455 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
														}
    break;

  case 73:
#line 458 "uccompiler.y"
    {
															(yyval.ast) = cria_no("IntLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 74:
#line 461 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ChrLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 75:
#line 464 "uccompiler.y"
    {
															(yyval.ast) = cria_no("RealLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 76:
#line 467 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(2) - (3)].ast);
														}
    break;

  case 77:
#line 471 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 78:
#line 475 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 79:
#line 482 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Store","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 80:
#line 487 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (3)].ast);
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 81:
#line 492 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Eq","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 82:
#line 497 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ne","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 83:
#line 502 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Le","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 84:
#line 507 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ge","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 85:
#line 512 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Lt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 86:
#line 517 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Gt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 87:
#line 523 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Add","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 88:
#line 528 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Sub","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 89:
#line 533 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mul","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 90:
#line 538 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Div","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 91:
#line 543 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mod","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 92:
#line 549 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Or","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 93:
#line 554 "uccompiler.y"
    {
															(yyval.ast) = cria_no("And","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 94:
#line 559 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseAnd","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 95:
#line 564 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseOr","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 96:
#line 569 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseXor","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 97:
#line 575 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Plus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 98:
#line 579 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Minus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 99:
#line 583 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Not","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 100:
#line 588 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (3)].string));
															adicionar_filho((yyval.ast),aux);
														}
    break;

  case 101:
#line 593 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (4)].string));
															adicionar_filho((yyval.ast),aux);
															adicionar_irmao(aux,(yyvsp[(3) - (4)].ast));
														}
    break;

  case 102:
#line 600 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
														}
    break;

  case 103:
#line 603 "uccompiler.y"
    {
															(yyval.ast) = cria_no("IntLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 104:
#line 606 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ChrLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 105:
#line 609 "uccompiler.y"
    {
															(yyval.ast) = cria_no("RealLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 106:
#line 612 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(2) - (3)].ast);
														}
    break;

  case 107:
#line 616 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 108:
#line 620 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;


/* Line 1267 of yacc.c.  */
#line 2639 "y.tab.c"
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


#line 627 "uccompiler.y"



int main(int argc, char *argv[]){
	if(argc > 1){
		if(strcmp(argv[1],"-l") == 0){
			flag=1;
			yylex();
		}
		if(strcmp(argv[1],"-t") == 0){
			flag=2;
			yyparse();
			yylex_destroy();
			if(!print_flag)
				imprime_arvore(root,0);

		}
	}
	else{
		flag=2;
		yyparse();
		yylex_destroy();
		return 0;
	}
}
