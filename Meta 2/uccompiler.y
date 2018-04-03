%{
	/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
	*/
	#include <stdio.h>
	#include <stdio.h>
	#include <string.h>
	#include "arvore.h"

	AST_struct root = NULL, aux = NULL;
	int flag = 0, print_flag = 1;
%}

%union{
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
	FunctionsAndDeclarations 							{
															root = cria_no("Program","");
															aux = cria_no("FunctionsAndDeclarations","");
															adicionar_filho(root,aux);
															$$ = root;
														}
	;

FunctionsAndDeclarations: 
	FunctionsAndDeclarations FunctionDefinition			{
															$$=$2;
															adicionar_irmao($$,$1);
														}
	| FunctionsAndDeclarations FunctionDeclaration 		{
															$$=$2;
															adicionar_irmao($$,$1);
														}
	| FunctionsAndDeclarations Declaration 				{
															$$=$2;
															adicionar_irmao($$,$1);
														}
	| FunctionsAndDeclarations error SEMI 				{
															$$ = NULL;
															print_flag = 0;
														}
	| FunctionDefinition 								{
															//
														}
	| FunctionDeclaration 								{
															//
														}
	| Declaration 										{
															//
														}
	| error SEMI										{
															$$ = NULL;
															print_flag = 0;
														}
	;

FunctionDefinition: 
	TypeSpec FunctionDeclarator FunctionBody 			{
															$$ = cria_no("FunctionDefinition","");
														}
	;

FunctionBody: 
	LBRACE RBRACE										{
															//
														}
	| LBRACE DeclarationAndStatements RBRACE 			{
															//
														}
	;

DeclarationAndStatements: 
	Statement DeclarationAndStatements 					{
															//
														}
	| Declaration DeclarationAndStatements 				{
															//
														}
	| Statement 										{
															//
														}
	| Declaration 										{
															//
														}
	;

FunctionDeclaration: 
	TypeSpec FunctionDeclarator SEMI 					{
															$$ = cria_no("FunctionDeclaration","");
														}
	;

FunctionDeclarator: 
	ID LPAR ParameterList RPAR 							{
															//
														}
	;

ParameterList: 
	ParameterDeclaration 								{
															//
														}
	| ParameterList COMMA ParameterDeclaration 			{
															//
														}
	;

ParameterDeclaration: 
	TypeSpec 											{
															$$ = $1;
														}
	| TypeSpec ID 										{
															$$ = $1;
															adicionar_irmao($$,$2);
														}
	;

Declaration: 
	DeclarationAux SEMI 								{
															$$ = cria_no("Declaration","");
														}
	;

DeclarationAux:
	TypeSpec Declarator 								{
															adicionar_filho($$,$1);
															adicionar_irmao($1,$2);
														}
	| DeclarationAux COMMA Declarator 					{
															$$ = $1;
														}
	;

TypeSpec:
	CHAR 												{
															$$ = cria_no("Char");
														}
	| INT 												{
															$$ = cria_no("Int");
														}
	| VOID 												{
															$$ = cria_no("Void");
														}
	| SHORT 											{
															$$ = cria_no("Short");
														}
	| DOUBLE 											{
															$$ = cria_no("Double");
														}
	;

Declarator:
	ID 													{
															$$ = cria_no("Id",$1);
														}
	| ID ASSIGN Expr 									{
															$$ = cria_no("Id",$1);
															adicionar_filho($$,$3);
														}
	;

Statement:
	SEMI 												{
															$$ = NULL;
														}
	| Expr SEMI											{
															$$ = $1;
														}

	| LBRACE RBRACE 									{
															$$ = NULL;
														}
	| LBRACE StatementAux RBRACE 						{
															$$ = $2;
														}

	| IF LPAR Expr RPAR Statement %prec ELSE_PRIORITY 	{
															$$ = cria_no("If","");
															adicionar_filho($$,$3);
															if($5 != NULL){
																adicionar_irmao($3,$5);
															}
														}
	| IF LPAR Expr RPAR Statement ELSE Statement 		{
															$$ = cria_no("If","");
															adicionar_filho($$,$3);
															if($5 != NULL){
																adicionar_irmao($3,$5);
															}
															if($7 != NULL){
																adicionar_irmao($5,$7);
															}
														}

	| WHILE LPAR Expr RPAR Statement 					{
															$$ = cria_no("While","");
															adicionar_filho($$,$3);
															if($5 != NULL){
																adicionar_irmao($3,$5);
															}
														}

	| RETURN SEMI 										{
															$$ = cria_no("Return","");
														}
	| RETURN Expr SEMI 									{
															$$ = cria_no("Return","");
															adicionar_filho($$,$2);
														}

	| error SEMI 										{
															$$ = NULL;
															print_flag = 0;
														}
	| LBRACE error RBRACE 								{
															$$ = NULL;
															print_flag = 0;
														}
	;

StatementAux:
	Statement 											{
															$$ = $1;
														}
	;
	| StatementAux Statement 							{
															if($1 == NULL && $2 != NULL){
																$$ = $2;
															}
															if($2 == NULL && $1 != NULL){
																$$ = $1;
															}
															else{
																$$ = cria_no("StatList","");
																adicionar_filho($$,$1);
																adicionar_irmao($1,$2);
															}
														}
	;

Expr:
	Expr ASSIGN Expr 									{
															$$ = cria_no("Store","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr COMMA Expr 									{
															$$ = cria_no("Comma","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}

	| Expr EQ Expr 										{
															$$ = cria_no("Eq","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr NE Expr 										{
															$$ = cria_no("Ne","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr LE Expr 										{
															$$ = cria_no("Le","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr GE Expr 										{
															$$ = cria_no("Ge","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr LT Expr 										{
															$$ = cria_no("Lt","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr GT Expr 										{
															$$ = cria_no("Gt","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}

	| Expr PLUS Expr 									{
															$$ = cria_no("Plus","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);	
														}
	| Expr MINUS Expr 									{
															$$ = cria_no("Minus","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr MUL Expr 									{
															$$ = cria_no("Mul","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);	
														}
	| Expr DIV Expr 									{
															$$ = cria_no("Div","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);	
														}
	| Expr MOD Expr 									{
															$$ = cria_no("Mod","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}

	| Expr OR Expr 										{
															$$ = cria_no("Or","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr AND Expr 									{
															$$ = cria_no("And","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr BITWISEAND Expr 								{
															$$ = cria_no("BitWiseAnd","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr BITWISEOR Expr 								{
															$$ = cria_no("BitWiseOr","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}
	| Expr BITWISEXOR Expr 								{
															$$ = cria_no("BitWiseXor","");
															adicionar_filho($$,$1);
															adicionar_irmao($1,$3);
														}

	| PLUS Expr 										{
															$$ = cria_no("Plus","");
															adicionar_filho($$,$2);
														}
	| MINUS Expr 										{
															$$ = cria_no("Minus","");
															adicionar_filho($$,$2);
														}
	| NOT Expr 											{
															$$ = cria_no("Not","");
															adicionar_filho($$,$2);
														}

	| ID LPAR RPAR 										{
															$$ = cria_no("Id",$1);
														}
	| ID LPAR Expr RPAR 								{
															$$ = cria_no("Id",$1);
															adicionar_filho($$,$3);
														}

	| ID 												{
															$$ = cria_no("Id",$1);
														}
	| INTLIT 											{
															$$ = cria_no("IntLit",$1);
														}
	| CHRLIT 											{
															$$ = cria_no("ChrLit",$1);
														}
	| REALLIT 											{
															$$ = cria_no("RealLit",$1);
														}
	| LPAR Expr RPAR 									{
															$$ = $2;
														}

	| ID LPAR error RPAR 								{
															$$ = NULL;
															print_flag = 0;
														}
	| LPAR error RPAR 									{
															$$ = NULL;
															print_flag = 0;
														}
	; 

%%

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
			if(print_flag == 1)
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