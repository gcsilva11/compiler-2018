%{
	/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
	*/
	#include <stdio.h>
	#include <stdio.h>
	#include <string.h>
	#include "tree.h"

	int yylex(void);
	void yyerror (const char *s);
%}

%union{
	int inteiro;
	char* string;
	struct AST* ast;
}

%token CHAR ELSE WHILE IF SHORT INT DOUBLE RETURN VOID BITWISEOR BITWISEAND BITWISEXOR AND ASSIGN MUL COMMA DIV EQ GE GT LBRACE LE LPAR LT MINUS MOD NE NOT OR PLUS RBRACE RPAR SEMI
%token <string> REALLIT CHRLIT INTLIT ID RESERVED

%type <ast> Program FunctionsAndDeclarations FunctionDefinition FunctionBody DeclarationAndStatements FunctionDeclaration FunctionDeclarator ParameterList ParameterDeclaration Declaration DeclarationAux TypeSpec Declarator Statement StatementAux Expr

%left COMMA
%right ASSIGN
%left OR
%left AND
%left BITWISEOR
%left BITWISEXOR
%left BITWISEAND
%left EQ NE
%left GE GT LT LE
%left PLUS MINUS
%left MUL DIV MOD
%right NOT
%left LPAR
%nonassoc ELSE_PRIORITY
%nonassoc ELSE

%%

Program:
	FunctionsAndDeclarations 							{}
	;

FunctionsAndDeclarations: 
	FunctionsAndDeclarations FunctionDefinition			{}
	| FunctionsAndDeclarations FunctionDeclaration 		{}
	| FunctionsAndDeclarations Declaration 				{}
	| FunctionsAndDeclarations error SEMI 				{}
	| FunctionDefinition 								{}
	| FunctionDeclaration 								{}
	| Declaration 										{}
	| error SEMI										{}
	;

FunctionDefinition: 
	TypeSpec FunctionDeclarator FunctionBody 			{}
	;

FunctionBody: 
	LBRACE RBRACE										{}
	| LBRACE DeclarationAndStatements RBRACE 			{}
	;

DeclarationAndStatements: 
	Statement DeclarationAndStatements 					{}
	| Declaration DeclarationAndStatements 				{}
	| Statement 										{}
	| Declaration 										{}
	;

FunctionDeclaration: 
	TypeSpec FunctionDeclarator SEMI 					{}
	;

FunctionDeclarator: 
	ID LPAR ParameterList RPAR 							{}
	;

ParameterList: 
	ParameterDeclaration 								{}
	| ParameterList COMMA ParameterDeclaration 			{}
	;

ParameterDeclaration: 
	TypeSpec 											{}
	| TypeSpec ID 										{}
	;

Declaration: 
	DeclarationAux SEMI 								{}
	;

DeclarationAux:
	TypeSpec Declarator 								{}
	| DeclarationAux COMMA Declarator 					{}
	;

TypeSpec:
	CHAR 												{}
	| INT 												{}
	| VOID 												{}
	| SHORT 											{}
	| DOUBLE 											{}
	;

Declarator:
	ID 													{}
	| ID ASSIGN Expr 									{}
	;

Statement:
	SEMI 												{}
	| Expr SEMI											{}

	| LBRACE RBRACE 									{}
	| LBRACE StatementAux RBRACE 						{}

	| IF LPAR Expr RPAR Statement %prec ELSE_PRIORITY 	{}
	| IF LPAR Expr RPAR Statement ELSE Statement 		{}

	| WHILE LPAR Expr RPAR Statement 					{}

	| RETURN SEMI 										{}
	| RETURN Expr SEMI 									{}

	| error SEMI 										{}
	| LBRACE error RBRACE 								{}
	;

StatementAux:
	Statement 											{}
	| StatementAux Statement 							{}
	;

Expr:
	Expr ASSIGN Expr 									{}
	| Expr COMMA Expr 									{}

	| Expr EQ Expr 										{}
	| Expr NE Expr 										{}
	| Expr LE Expr 										{}
	| Expr GE Expr 										{}
	| Expr LT Expr 										{}
	| Expr GT Expr 										{}

	| Expr PLUS Expr 									{}
	| Expr MINUS Expr 									{}
	| Expr MUL Expr 									{}
	| Expr DIV Expr 									{}
	| Expr MOD Expr 									{}

	| Expr OR Expr 										{}
	| Expr AND Expr 									{}
	| Expr BITWISEAND Expr 								{}
	| Expr BITWISEOR Expr 								{}
	| Expr BITWISEXOR Expr 								{}

	| PLUS Expr 										{}
	| MINUS Expr 										{}
	| NOT Expr 											{}

	| ID LPAR RPAR 										{}
	| ID LPAR Expr RPAR 								{}

	| ID 												{}
	| INTLIT 											{}
	| CHRLIT 											{}
	| REALLIT 											{}
	| LPAR Expr RPAR 									{}

	| ID LPAR error RPAR 								{}
	| LPAR error RPAR 									{}
	; 

%%