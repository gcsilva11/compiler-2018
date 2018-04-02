/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     LOWER_THAN_ELSE = 295
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
#define LOWER_THAN_ELSE 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 10 "uccompiler.y"
{
	int inteiro;
	char* string;
}
/* Line 1529 of yacc.c.  */
#line 134 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

