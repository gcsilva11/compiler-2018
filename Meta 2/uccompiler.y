%{
	/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
	*/
	#include <stdio.h>
	#include <stdio.h>
	#include <string.h>
	#include "arvore.h"

	AST_struct root = NULL, aux = NULL, aux2 = NULL;
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
															$$ = $1;
														}
	| FunctionDeclaration 								{
															$$ = $1;
														}
	| Declaration 										{
															$$ = $1;
														}
	| error SEMI										{
															$$ = NULL;
															print_flag = 0;
														}
	;

FunctionDefinition: 
	TypeSpec FunctionDeclarator FunctionBody 			{
															aux = cria_no("FuncDefinition","");
															adicionar_filho(aux,$1);
															adicionar_filho($1,$2);
															adicionar_filho($1,$3);
															$$ = aux;
														}
	;

FunctionBody: 
	LBRACE RBRACE										{
															aux = cria_no("FuncBody","");
															$$ = aux;
														}
	| LBRACE DeclarationAndStatements RBRACE 			{
															aux = cria_no("FuncBody","");
															if($2!=NULL){
																adicionar_filho($2,aux);
															}
															$$ = aux;
														}
	;

DeclarationAndStatements: 
	Statement DeclarationAndStatements 					{
															if($2!=NULL){
																adicionar_irmao($2,$1);
															}
															$$ = $1;
														}
	| Declaration DeclarationAndStatements 				{
															if($1 != NULL && $2 != NULL){
																adicionar_irmao($2, $1);
																$$ = $1;
															}
															else if($1 != NULL && $2 == NULL){
																$$ = $1;
															}
															else{					
																$$ = $2;
															}
														}
	| Statement 										{
															$$=$1;
														}
	| Declaration 										{
															$$=$1;
														}
	;

FunctionDeclaration: 
	TypeSpec FunctionDeclarator SEMI 					{
															aux = cria_no("FunctDeclaration","");
															adicionar_filho(aux,$1);
															adicionar_filho($1,$2);
															$$ = aux;
														}
	;

FunctionDeclarator: 
	ID LPAR ParameterList RPAR 							{
															aux = cria_no("Id",$1);
															adicionar_irmao(aux,$3);
															$$ = aux;
														}
	;

ParameterList: 
	ParameterDeclaration 								{
															aux = cria_no("ParamList","");
															adicionar_filho($1,aux);
															$$ = aux;
														}
	| ParameterList COMMA ParameterDeclaration 			{
															adicionar_filho($3,$1);
															$$=$1;
														}
	;

ParameterDeclaration: 
	TypeSpec 											{
															$$ = $1;
														}
	| TypeSpec ID 										{
															aux = cria_no("Id",$2);
															adicionar_irmao($1,aux);
															$$ = $1;
														}
	;

Declaration: 
	DeclarationAux SEMI 								{
															aux = cria_no("Declaration","");
															$$ = aux;
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
															aux = cria_no("Char","");
															$$ = aux;
														}
	| INT 												{
															aux = cria_no("Int","");
															$$ = aux;
														}
	| VOID 												{
															aux = cria_no("Void","");
															$$ = aux;
														}
	| SHORT 											{
															aux = cria_no("Short","");
															$$ = aux;
														}
	| DOUBLE 											{
															aux = cria_no("Double","");
															$$ = aux;
														}
	;

Declarator:
	ID 													{
															aux = cria_no("Id",$1);
															$$ = aux;
														}
	| ID ASSIGN Expr 									{
															aux = cria_no("Id",$1);
															adicionar_filho(aux,$3);
															$$ = aux;
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
															aux = cria_no("If","");
															adicionar_filho(aux,$3);
															if($5 != NULL){
																adicionar_irmao($3,$5);
															}
															$$ = aux;
														}
	| IF LPAR Expr RPAR Statement ELSE Statement 		{
															aux = cria_no("If","");
															adicionar_filho(aux,$3);
															if($5 != NULL){
																adicionar_irmao($3,$5);
															}
															if($7 != NULL){
																adicionar_irmao($5,$7);
															}
															$$ = aux;
														}

	| WHILE LPAR Expr RPAR Statement 					{
															aux = cria_no("While","");
															adicionar_filho(aux,$3);
															if($5 != NULL){
																adicionar_irmao($3,$5);
															}
															$$ = aux;
														}

	| RETURN SEMI 										{
															aux = cria_no("Return","");
															$$ = aux;
														}
	| RETURN Expr SEMI 									{
															aux = cria_no("Return","");
															adicionar_filho(aux,$2);
															$$ = aux;
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
															aux = cria_no("Store","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr COMMA Expr 									{
															aux = cria_no("Comma","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}

	| Expr EQ Expr 										{
															aux = cria_no("Eq","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr NE Expr 										{
															aux = cria_no("Ne","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr LE Expr 										{
															aux = cria_no("Le","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr GE Expr 										{
															aux = cria_no("Ge","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr LT Expr 										{
															aux = cria_no("Lt","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr GT Expr 										{
															aux = cria_no("Gt","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}

	| Expr PLUS Expr 									{
															aux = cria_no("Plus","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr MINUS Expr 									{
															aux = cria_no("Minus","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr MUL Expr 									{
															aux = cria_no("Mul","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr DIV Expr 									{
															aux = cria_no("Div","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr MOD Expr 									{
															aux = cria_no("Mod","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}

	| Expr OR Expr 										{
															aux = cria_no("Or","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr AND Expr 									{
															aux = cria_no("And","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr BITWISEAND Expr 								{
															aux = cria_no("BitWiseAnd","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr BITWISEOR Expr 								{
															aux = cria_no("BitWiseOr","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}
	| Expr BITWISEXOR Expr 								{
															aux = cria_no("BitWiseXor","");
															adicionar_filho(aux,$1);
															adicionar_irmao($1,$3);
															$$ = aux;
														}

	| PLUS Expr 										{
															aux = cria_no("Plus","");
															adicionar_filho(aux,$2);
															$$ = aux;
														}
	| MINUS Expr 										{
															aux = cria_no("Minus","");
															adicionar_filho(aux,$2);
															$$ = aux;
														}
	| NOT Expr 											{
															aux = cria_no("Not","");
															adicionar_filho(aux,$2);
															$$ = aux;
														}

	| ID LPAR RPAR 										{
															aux = cria_no("Id",$1);
															$$ = aux;
														}
	| ID LPAR Expr RPAR 								{
															aux = cria_no("Id",$1);
															adicionar_filho(aux,$3);
															$$ = aux;
														}

	| ID 												{
															aux = cria_no("Id",$1);
															$$ = aux;
														}
	| INTLIT 											{
															aux= cria_no("IntLit",$1);
															$$ = aux;
														}
	| CHRLIT 											{
															aux = cria_no("ChrLit",$1);
															$$ = aux;
														}
	| REALLIT 											{
															aux = cria_no("RealLit",$1);
															$$ = aux;
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