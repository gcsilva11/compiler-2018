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
     ELSE_PRIORITY = 296
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
#define ELSE_PRIORITY 296




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
#line 198 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 211 "y.tab.c"

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
#define YYLAST   829

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
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
     114,   122,   128,   131,   135,   138,   142,   144,   147,   151,
     155,   159,   163,   167,   171,   175,   179,   183,   187,   191,
     195,   199,   203,   207,   211,   215,   219,   222,   225,   228,
     232,   237,   239,   241,   243,   245,   249,   254,   258,   262,
     266,   270,   274,   278,   282,   286,   290,   294,   298,   302,
     306,   310,   314,   318,   322,   326,   330,   333,   336,   339,
     343,   348,   350,   352,   354,   356,   360,   365
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    44,    45,    -1,    44,    48,
      -1,    44,    53,    -1,    44,     1,    35,    -1,    45,    -1,
      48,    -1,    53,    -1,     1,    35,    -1,    55,    49,    46,
      -1,    23,    33,    -1,    23,    47,    33,    -1,    57,    47,
      -1,    53,    47,    -1,    57,    -1,    53,    -1,    55,    49,
      35,    -1,    39,    25,    50,    34,    -1,    52,    51,    -1,
      -1,    18,    52,    51,    -1,    55,    -1,    55,    39,    -1,
      55,    56,    54,    35,    -1,    -1,    18,    56,    54,    -1,
       3,    -1,     8,    -1,    11,    -1,     7,    -1,     9,    -1,
      39,    -1,    39,    16,    59,    -1,    35,    -1,    59,    35,
      -1,    23,    33,    -1,    23,    58,    33,    -1,     6,    25,
      59,    34,    57,    -1,     6,    25,    59,    34,    57,     4,
      57,    -1,     5,    25,    59,    34,    57,    -1,    10,    35,
      -1,    10,    59,    35,    -1,     1,    35,    -1,    23,     1,
      33,    -1,    57,    -1,    58,    57,    -1,    59,    16,    59,
      -1,    59,    18,    59,    -1,    59,    20,    59,    -1,    59,
      29,    59,    -1,    59,    24,    59,    -1,    59,    21,    59,
      -1,    59,    26,    59,    -1,    59,    22,    59,    -1,    59,
      32,    59,    -1,    59,    27,    59,    -1,    59,    17,    59,
      -1,    59,    19,    59,    -1,    59,    28,    59,    -1,    59,
      31,    59,    -1,    59,    15,    59,    -1,    59,    13,    59,
      -1,    59,    12,    59,    -1,    59,    14,    59,    -1,    32,
      59,    -1,    27,    59,    -1,    30,    59,    -1,    39,    25,
      34,    -1,    39,    25,    60,    34,    -1,    39,    -1,    38,
      -1,    37,    -1,    36,    -1,    25,    59,    34,    -1,    39,
      25,     1,    34,    -1,    25,     1,    34,    -1,    60,    16,
      60,    -1,    60,    18,    59,    -1,    60,    20,    60,    -1,
      60,    29,    60,    -1,    60,    24,    60,    -1,    60,    21,
      60,    -1,    60,    26,    60,    -1,    60,    22,    60,    -1,
      60,    32,    60,    -1,    60,    27,    60,    -1,    60,    17,
      60,    -1,    60,    19,    60,    -1,    60,    28,    60,    -1,
      60,    31,    60,    -1,    60,    15,    60,    -1,    60,    13,
      60,    -1,    60,    12,    60,    -1,    60,    14,    60,    -1,
      32,    60,    -1,    27,    60,    -1,    30,    60,    -1,    39,
      25,    34,    -1,    39,    25,    60,    34,    -1,    39,    -1,
      38,    -1,    37,    -1,    36,    -1,    25,    60,    34,    -1,
      39,    25,     1,    34,    -1,    25,     1,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    53,    57,    61,    65,    69,    72,    75,
      78,    85,    94,    97,   104,   108,   112,   115,   121,   129,
     136,   144,   147,   155,   159,   169,   178,   181,   191,   195,
     199,   203,   207,   214,   217,   224,   227,   231,   234,   245,
     258,   280,   292,   297,   302,   306,   313,   319,   326,   331,
     337,   342,   347,   352,   357,   362,   368,   373,   378,   383,
     388,   394,   399,   404,   409,   414,   420,   424,   428,   433,
     439,   458,   461,   464,   467,   470,   474,   478,   485,   490,
     495,   500,   505,   510,   515,   520,   526,   531,   536,   541,
     546,   552,   557,   562,   567,   572,   578,   582,   586,   591,
     596,   603,   606,   609,   612,   615,   619,   623
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
  "RESERVED", "ELSE_PRIORITY", "$accept", "Program",
  "FunctionsAndDeclarations", "FunctionDefinition", "FunctionBody",
  "DeclarationAndStatements", "FunctionDeclaration", "FunctionDeclarator",
  "ParameterList", "ParameterListAux", "ParameterDeclaration",
  "Declaration", "DeclarationAux", "TypeSpec", "Declarator", "Statement",
  "StatementAux", "Expr", "Expr2", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    44,    44,    44,
      44,    45,    46,    46,    47,    47,    47,    47,    48,    49,
      50,    51,    51,    52,    52,    53,    54,    54,    55,    55,
      55,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     3,     2,     3,     2,     2,     1,     1,     3,     4,
       2,     0,     3,     1,     2,     4,     0,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     3,     5,
       7,     5,     2,     3,     2,     3,     1,     2,     3,     3,
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
       0,     0,    28,    31,    29,    32,    30,     0,     0,     7,
       8,     9,     0,    10,     1,     0,     3,     4,     5,    33,
       0,    26,     6,     0,     0,     0,    18,    11,     0,     0,
       0,     0,     0,     0,    74,    73,    72,    71,    34,     0,
      21,    23,     0,     0,     0,     0,     0,    12,    35,     0,
       0,     0,     0,     0,    33,    26,    25,     0,     0,    67,
      68,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    20,    24,    44,     0,     0,    42,     0,
       0,    37,    46,     0,    13,    15,    14,    36,    27,    77,
      75,     0,     0,     0,     0,     0,    69,   104,   103,   102,
     101,     0,    64,    63,    65,    62,    48,    58,    49,    59,
      50,    53,    55,    52,    54,    57,    60,    51,    61,    56,
      21,     0,     0,    43,    45,    38,    47,    76,     0,     0,
      97,    98,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    22,     0,     0,   107,   105,     0,    99,
       0,    94,    93,    95,    92,    78,    88,    79,    89,    80,
      83,    85,    82,    84,    87,    90,    81,    91,    86,    41,
      39,   106,   100,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    27,    49,    10,    20,    39,    83,
      40,    50,    29,    51,    21,    52,    93,    53,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
     154,   -25,   -68,   -68,   -68,   -68,   -68,    20,   114,   -68,
     -68,   -68,   -16,   -68,   -68,   -11,   -68,   -68,   -68,   -13,
     -21,    10,   -68,   775,    92,   101,   -68,   -68,     3,    -2,
     276,   775,   775,   775,   -68,   -68,   -68,    21,   529,    11,
      48,    28,    33,    44,    45,   760,   221,   -68,   -68,    40,
     143,     3,   182,   343,    58,    10,   -68,    41,   391,   -12,
     -68,   -12,   198,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   -68,    92,   -68,   -68,   -68,   775,   775,   -68,   367,
     -29,   -68,   -68,   260,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,    62,   315,   790,   790,   790,   -68,   -68,   -68,   -68,
      72,   414,   651,   716,   685,   613,   529,   -68,   529,   -68,
     744,    -6,    -6,    -6,    -6,   -12,   -12,   744,   571,   -12,
      48,   437,   460,   -68,   -68,   -68,   -68,   -68,    64,   483,
      15,   -68,    15,   237,   790,   790,   790,   790,   790,   790,
     775,   790,   790,   790,   790,   790,   790,   790,   790,   790,
     790,   790,   -68,   -68,   299,   299,   -68,   -68,    71,   -68,
     506,   668,   730,   702,   634,   550,   -68,   529,   -68,   756,
      12,    12,    12,    12,    15,    15,   756,   592,    15,   -68,
     109,   -68,   -68,   299,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,   108,   -68,    -9,   112,   -68,   -68,    -3,
      47,    19,    75,     1,   104,   -46,   -68,   -15,   -67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -18
static const yytype_int16 yytable[] =
{
      92,    12,    25,    23,   134,    68,    85,    70,    38,    12,
      13,    68,    24,    70,    26,    58,    59,    60,    61,    11,
      14,    76,    77,    19,    22,    41,    80,    18,    28,   149,
      89,   151,   149,    56,   151,   139,   140,   141,   142,   157,
     158,    95,    54,    96,   161,    81,    62,   136,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    82,    84,    85,    86,
      87,   131,   132,    94,    23,    99,   170,   171,   172,   173,
     174,   175,   176,    41,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,     2,   137,   143,   166,     3,
       4,     5,    42,     6,     2,   191,    43,    44,     3,     4,
       5,    45,     6,   193,    -2,    15,    16,     2,   189,   190,
      17,     3,     4,     5,    46,     6,    30,   163,    31,   130,
      98,    32,    55,    33,    47,   177,    48,    34,    35,    36,
      37,     0,     0,     0,    42,     0,     2,   194,    43,    44,
       3,     4,     5,    45,     6,     1,     0,     2,     0,     0,
       0,     3,     4,     5,     0,     6,    46,     0,    30,     0,
      31,     0,     0,    32,     0,    33,   -17,     0,    48,    34,
      35,    36,    37,    42,     0,     2,     0,    43,    44,     3,
       4,     5,    45,     6,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,    46,     0,    30,     0,    31,
       0,     0,    32,     0,    33,   -16,     0,    48,    34,    35,
      36,    37,    90,   102,     0,   103,    43,    44,   104,     0,
     105,    45,   106,     0,   107,   108,   109,   110,   168,     0,
       0,     0,     0,     0,    46,     0,    30,     0,    31,     0,
       0,    32,     0,    33,    91,     0,    48,    34,    35,    36,
      37,    42,   102,     0,   103,    43,    44,   104,     0,   105,
      45,   169,     0,   107,   108,   109,   110,    57,     0,     0,
       0,     0,     0,    46,     0,    30,     0,    31,     0,     0,
      32,     0,    33,   135,     0,    48,    34,    35,    36,    37,
      42,    30,     0,    31,    43,    44,    32,     0,    33,    45,
       0,     0,    34,    35,    36,    37,   138,     0,     0,     0,
       0,     0,    46,     0,    30,     0,    31,     0,     0,    32,
       0,    33,     0,     0,    48,    34,    35,    36,    37,     0,
     102,     0,   103,     0,     0,   104,     0,   105,     0,     0,
       0,   107,   108,   109,   110,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,     0,    75,
      76,    77,    78,     0,    79,    80,     0,     0,    97,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,     0,    75,    76,    77,    78,     0,    79,    80,
       0,     0,   133,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,     0,    75,    76,    77,
      78,     0,    79,    80,     0,   100,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,     0,
     156,   157,   158,   159,     0,   160,   161,     0,   162,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,     0,    75,    76,    77,    78,     0,    79,    80,
       0,   164,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,     0,    75,    76,    77,    78,
       0,    79,    80,     0,   165,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,     0,   156,
     157,   158,   159,     0,   160,   161,     0,   167,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,     0,   156,   157,   158,   159,     0,   160,   161,     0,
     192,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,    73,     0,    74,     0,    75,    76,    77,    78,     0,
      79,    80,   144,   145,   146,   147,   148,   149,     0,   151,
     152,   153,   154,     0,   155,     0,   156,   157,   158,   159,
       0,   160,   161,    63,    64,    65,    66,     0,    68,     0,
      70,    71,    72,    73,     0,    74,     0,    75,    76,    77,
      78,     0,     0,    80,   144,   145,   146,   147,     0,   149,
       0,   151,   152,   153,   154,     0,   155,     0,   156,   157,
     158,   159,     0,     0,   161,    63,    64,    65,     0,     0,
      68,     0,    70,    71,    72,    73,     0,    74,     0,    75,
      76,    77,    78,     0,     0,    80,   144,   145,   146,     0,
       0,   149,     0,   151,   152,   153,   154,     0,   155,     0,
     156,   157,   158,   159,    64,    65,   161,     0,    68,     0,
      70,    71,    72,    73,     0,    74,     0,    75,    76,    77,
      78,   145,   146,    80,     0,   149,     0,   151,   152,   153,
     154,     0,   155,     0,   156,   157,   158,   159,    64,     0,
     161,     0,    68,     0,    70,    71,    72,    73,     0,    74,
       0,    75,    76,    77,    78,   145,     0,    80,     0,   149,
       0,   151,   152,   153,   154,     0,   155,     0,   156,   157,
     158,   159,     0,    68,   161,    70,    71,    72,    73,     0,
      74,     0,    75,    76,    77,    78,     0,   149,    80,   151,
     152,   153,   154,     0,   155,     0,   156,   157,   158,   159,
       0,    68,   161,    70,     0,    72,    73,     0,    74,     0,
      75,    76,    77,   149,     0,   151,    80,   153,   154,     0,
     155,     0,   156,   157,   158,    30,     0,    31,   161,     0,
      32,     0,    33,     0,     0,    88,    34,    35,    36,    37,
      30,     0,    31,     0,     0,    32,     0,    33,     0,     0,
       0,    34,    35,    36,    37,   102,     0,   103,     0,     0,
     104,     0,   105,     0,     0,     0,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      46,     0,    23,    16,    33,    17,    35,    19,    23,     8,
      35,    17,    25,    19,    35,    30,    31,    32,    33,     0,
       0,    27,    28,    39,    35,    24,    32,     8,    18,    17,
      45,    19,    17,    35,    19,   102,   103,   104,   105,    27,
      28,    50,    39,    52,    32,    34,    25,    93,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    18,    39,    35,    25,
      25,    86,    87,    33,    16,    34,   143,   144,   145,   146,
     147,   148,   149,    82,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     3,    34,    25,    34,     7,
       8,     9,     1,    11,     3,    34,     5,     6,     7,     8,
       9,    10,    11,     4,     0,     1,     8,     3,   164,   165,
       8,     7,     8,     9,    23,    11,    25,   130,    27,    82,
      55,    30,    28,    32,    33,   150,    35,    36,    37,    38,
      39,    -1,    -1,    -1,     1,    -1,     3,   193,     5,     6,
       7,     8,     9,    10,    11,     1,    -1,     3,    -1,    -1,
      -1,     7,     8,     9,    -1,    11,    23,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    -1,    35,    36,
      37,    38,    39,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,     1,    25,    -1,    27,     5,     6,    30,    -1,
      32,    10,    34,    -1,    36,    37,    38,    39,     1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      39,     1,    25,    -1,    27,     5,     6,    30,    -1,    32,
      10,    34,    -1,    36,    37,    38,    39,     1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
       1,    25,    -1,    27,     5,     6,    30,    -1,    32,    10,
      -1,    -1,    36,    37,    38,    39,     1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    30,
      -1,    32,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      25,    -1,    27,    -1,    -1,    30,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    31,    32,    -1,    -1,    35,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    35,    12,    13,    14,    15,    16,    17,    18,
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
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      31,    32,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    31,    32,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    32,    12,    13,    14,    15,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    -1,    32,    12,    13,    14,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    32,    12,    13,    14,    -1,
      -1,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    13,    14,    32,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    13,    14,    32,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    13,    -1,
      32,    -1,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    26,    27,    28,    29,    13,    -1,    32,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    17,    32,    19,    20,    21,    22,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    17,    32,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    17,    32,    19,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    17,    -1,    19,    32,    21,    22,    -1,
      24,    -1,    26,    27,    28,    25,    -1,    27,    32,    -1,
      30,    -1,    32,    -1,    -1,    35,    36,    37,    38,    39,
      25,    -1,    27,    -1,    -1,    30,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     7,     8,     9,    11,    43,    44,    45,
      48,    53,    55,    35,     0,     1,    45,    48,    53,    39,
      49,    56,    35,    16,    25,    23,    35,    46,    18,    54,
      25,    27,    30,    32,    36,    37,    38,    39,    59,    50,
      52,    55,     1,     5,     6,    10,    23,    33,    35,    47,
      53,    55,    57,    59,    39,    56,    35,     1,    59,    59,
      59,    59,    25,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    24,    26,    27,    28,    29,    31,
      32,    34,    18,    51,    39,    35,    25,    25,    35,    59,
       1,    33,    57,    58,    33,    47,    47,    35,    54,    34,
      34,     1,    25,    27,    30,    32,    34,    36,    37,    38,
      39,    60,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      52,    59,    59,    35,    33,    33,    57,    34,     1,    60,
      60,    60,    60,    25,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    24,    26,    27,    28,    29,
      31,    32,    34,    51,    34,    34,    34,    34,     1,    34,
      60,    60,    60,    60,    60,    60,    60,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    57,
      57,    34,    34,     4,    57
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
#line 45 "uccompiler.y"
    {
															root = cria_no("Program","");
															adicionar_filho(root,(yyvsp[(1) - (1)].ast));
															(yyval.ast) = root;
														}
    break;

  case 3:
#line 53 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 4:
#line 57 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 5:
#line 61 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 6:
#line 65 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 7:
#line 69 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 8:
#line 72 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 9:
#line 75 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 10:
#line 78 "uccompiler.y"
    {
															print_flag = 1;
															(yyval.ast) = NULL;
														}
    break;

  case 11:
#line 85 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncDefinition","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(2) - (3)].ast));
															adicionar_irmao((yyvsp[(2) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 12:
#line 94 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncBody","");
														}
    break;

  case 13:
#line 97 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncBody","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
														}
    break;

  case 14:
#line 104 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 15:
#line 108 "uccompiler.y"
    {
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 16:
#line 112 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 17:
#line 115 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 18:
#line 121 "uccompiler.y"
    {
															(yyval.ast) = cria_no("FuncDeclaration","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(2) - (3)].ast));
														}
    break;

  case 19:
#line 129 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (4)].string));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (4)].ast));
														}
    break;

  case 20:
#line 136 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ParamList","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (2)].ast));
															adicionar_irmao((yyvsp[(1) - (2)].ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 21:
#line 144 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 22:
#line 147 "uccompiler.y"
    {
															adicionar_filho((yyval.ast),(yyvsp[(2) - (3)].ast));
															adicionar_irmao((yyvsp[(2) - (3)].ast),(yyvsp[(3) - (3)].ast));
															(yyval.ast) = (yyvsp[(2) - (3)].ast);
														}
    break;

  case 23:
#line 155 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ParamDeclaration","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (1)].ast));
														}
    break;

  case 24:
#line 159 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ParamDeclaration","");
															aux = cria_no("Id",(yyvsp[(2) - (2)].string));
															adicionar_filho((yyval.ast),(yyvsp[(1) - (2)].ast));
															adicionar_irmao((yyvsp[(1) - (2)].ast),aux);

														}
    break;

  case 25:
#line 169 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Declaration","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (4)].ast));
															adicionar_irmao((yyvsp[(1) - (4)].ast),(yyvsp[(2) - (4)].ast));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (4)].ast));
														}
    break;

  case 26:
#line 178 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 27:
#line 181 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Declaration","");
															aux = cria_no(type_spec,"");
															adicionar_filho((yyval.ast),aux);
															adicionar_irmao(aux,(yyvsp[(2) - (3)].ast));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 28:
#line 191 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Char","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 29:
#line 195 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Int","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 30:
#line 199 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Void","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 31:
#line 203 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Short","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 32:
#line 207 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Double","");
															type_spec = (yyval.ast)->tipo;
														}
    break;

  case 33:
#line 214 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
														}
    break;

  case 34:
#line 217 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (3)].string));
															adicionar_irmao((yyval.ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 35:
#line 224 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 36:
#line 227 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
														}
    break;

  case 37:
#line 231 "uccompiler.y"
    {
															(yyval.ast) = NULL;
														}
    break;

  case 38:
#line 234 "uccompiler.y"
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
#line 245 "uccompiler.y"
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
#line 258 "uccompiler.y"
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
#line 280 "uccompiler.y"
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
#line 292 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Return","");
															aux = cria_no("Null","");
															adicionar_filho((yyval.ast),aux);
														}
    break;

  case 43:
#line 297 "uccompiler.y"
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
#line 306 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 46:
#line 313 "uccompiler.y"
    {
															if((yyvsp[(1) - (1)].ast) == NULL)
																(yyval.ast) = cria_no("Null","");
															else
																(yyval.ast) = (yyvsp[(1) - (1)].ast);
														}
    break;

  case 47:
#line 319 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (2)].ast);
															adicionar_irmao((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 48:
#line 326 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Store","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 49:
#line 331 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Comma","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 50:
#line 337 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Eq","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 51:
#line 342 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ne","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 52:
#line 347 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Le","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 53:
#line 352 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ge","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 54:
#line 357 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Lt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 55:
#line 362 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Gt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 56:
#line 368 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Add","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 57:
#line 373 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Sub","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 58:
#line 378 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mul","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 59:
#line 383 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Div","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 60:
#line 388 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mod","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 61:
#line 394 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Or","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 62:
#line 399 "uccompiler.y"
    {
															(yyval.ast) = cria_no("And","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 63:
#line 404 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseAnd","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 64:
#line 409 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseOr","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 65:
#line 414 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseXor","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 66:
#line 420 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Plus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 67:
#line 424 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Minus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 68:
#line 428 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Not","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 69:
#line 433 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (3)].string));
															adicionar_filho((yyval.ast),aux);
														}
    break;

  case 70:
#line 439 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (4)].string));
															aux2 = (yyvsp[(3) - (4)].ast);
															
															/*if(strcmp(aux2->tipo,"Comma") == 0){
																while(strcmp(aux2->tipo,"Comma") == 0 && strcmp(aux2->filho->tipo,"Comma") == 0){
																	adicionar_irmao(aux,aux2->filho);
																	aux2 = aux2->filho;
																}
																adicionar_irmao(aux2->filho,aux2->filho->irmao);
																adicionar_irmao(aux,aux2->filho);
															}
															else{*/
																adicionar_filho((yyval.ast),aux);
																adicionar_irmao(aux,(yyvsp[(3) - (4)].ast));
														//	}
														}
    break;

  case 71:
#line 458 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
														}
    break;

  case 72:
#line 461 "uccompiler.y"
    {
															(yyval.ast) = cria_no("IntLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 73:
#line 464 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ChrLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 74:
#line 467 "uccompiler.y"
    {
															(yyval.ast) = cria_no("RealLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 75:
#line 470 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(2) - (3)].ast);
														}
    break;

  case 76:
#line 474 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 77:
#line 478 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 78:
#line 485 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Store","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 79:
#line 490 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(1) - (3)].ast);
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 80:
#line 495 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Eq","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 81:
#line 500 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ne","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 82:
#line 505 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Le","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 83:
#line 510 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Ge","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 84:
#line 515 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Lt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 85:
#line 520 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Gt","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 86:
#line 526 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Add","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 87:
#line 531 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Sub","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 88:
#line 536 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mul","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 89:
#line 541 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Div","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 90:
#line 546 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Mod","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 91:
#line 552 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Or","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 92:
#line 557 "uccompiler.y"
    {
															(yyval.ast) = cria_no("And","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 93:
#line 562 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseAnd","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 94:
#line 567 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseOr","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 95:
#line 572 "uccompiler.y"
    {
															(yyval.ast) = cria_no("BitWiseXor","");
															adicionar_filho((yyval.ast),(yyvsp[(1) - (3)].ast));
															adicionar_irmao((yyvsp[(1) - (3)].ast),(yyvsp[(3) - (3)].ast));
														}
    break;

  case 96:
#line 578 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Plus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 97:
#line 582 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Minus","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 98:
#line 586 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Not","");
															adicionar_filho((yyval.ast),(yyvsp[(2) - (2)].ast));
														}
    break;

  case 99:
#line 591 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (3)].string));
															adicionar_filho((yyval.ast),aux);
														}
    break;

  case 100:
#line 596 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Call","");
															aux = cria_no("Id",(yyvsp[(1) - (4)].string));
															adicionar_filho((yyval.ast),aux);
															adicionar_irmao(aux,(yyvsp[(3) - (4)].ast));
														}
    break;

  case 101:
#line 603 "uccompiler.y"
    {
															(yyval.ast) = cria_no("Id",(yyvsp[(1) - (1)].string));
														}
    break;

  case 102:
#line 606 "uccompiler.y"
    {
															(yyval.ast) = cria_no("IntLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 103:
#line 609 "uccompiler.y"
    {
															(yyval.ast) = cria_no("ChrLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 104:
#line 612 "uccompiler.y"
    {
															(yyval.ast) = cria_no("RealLit",(yyvsp[(1) - (1)].string));
														}
    break;

  case 105:
#line 615 "uccompiler.y"
    {
															(yyval.ast) = (yyvsp[(2) - (3)].ast);
														}
    break;

  case 106:
#line 619 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;

  case 107:
#line 623 "uccompiler.y"
    {
															(yyval.ast) = NULL;
															print_flag = 1;
														}
    break;


/* Line 1267 of yacc.c.  */
#line 2641 "y.tab.c"
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


#line 630 "uccompiler.y"



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
