/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Lex
int yylex();
void yyerror (const char *);
int yylex_destroy();
int yyparse();

//Arvore AST
typedef struct AST* AST_struct;
typedef struct AST {
	AST_struct pai;
	AST_struct filho;
	AST_struct irmao;
	char* valor;
	char* tipo;
	char* anotacao;
}AST;

//Funcoes arvore.c
AST_struct cria_no(char*, char*);

void adicionar_filho(AST_struct,AST_struct);
void adicionar_irmao(AST_struct,AST_struct);

void imprime_arvore(AST_struct,int);
void imprime_arvore_anotada(AST_struct,int);


//Tabela Simbolos
typedef struct nt* no_tabela_func;
typedef struct nt{

	char* nome;
	char* tipo;
	int param;
	no_tabela_func next;

}nt;

typedef struct ntg* no_tabela_global;
typedef struct ntg{

	char* tipo;
	char* nome;
	char* array_params;
	no_tabela_func next_table;
	no_tabela_global next;

}ntg;


//Funcoes simbolos.c
void inicia_tabela_global();
no_tabela_global insere_simbolo_global(char*,char*,char*);

void inicia_tabela_funcao(no_tabela_global);
void insere_simbolo_funcao(char*,char*,int,no_tabela_func);

char* anotar_arvore(AST_struct);
char* anotar_filho(AST_struct);

//Funcoes semantica.c
no_tabela_global tabela_simbolos;
char* func_tracker;

void le_arvore_tabela(AST_struct);

void verifica_funcao(AST_struct,int);
void verifica_declaration(AST_struct);
char* verifica_params_funcao(AST_struct);

void insere_param_list(AST_struct,no_tabela_global);
void insere_func_body(AST_struct,no_tabela_global);

void imprime_tabela(no_tabela_global);
void imprime_tabela_funcao(no_tabela_func);

//Funcoes gerar_codigo.c
void gera_codigo(AST_struct);
void gera_program(AST_struct);
void gera_func_definition(AST_struct,char*,char*);

char* variable_type(char*,char*);
char* function_type(char*);
char* func_param(char*);
char* type2llvm(char*);

int check_global(char*,char*);

int octal_to_decimal(char*);
int power_to(int,int);