/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 20 //20 strings MAX
#define MAX_CHAR 100 //100 caracteres MAX

typedef struct AST* AST_struct;
typedef struct AST {
	AST_struct pai;
	AST_struct filho;
	AST_struct irmao;
	char* valor;
	char* tipo;
}AST;

//Lex
int yylex(void);
void yyerror (const char *s);
int yylex_destroy();
int yyparse();

//AST
AST_struct cria_no(char*, char*);
void adicionar_filho(AST_struct, AST_struct);
void adicionar_irmao(AST_struct, AST_struct);
int conta_irmaos(AST_struct);
void imprime_arvore(AST_struct, int);


//funcs simbolos
typedef struct nt* no_tabela_func;
typedef struct nt{

	char* nome;
	char* tipo;
	char* param;
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
no_tabela_global insere_simbolo_global(char* tipo, char* nome,char* array_params);
void inicia_tabela_funcao(no_tabela_global ntg);

//Funcoes semantica.c
no_tabela_global tabela_simbolos;
void le_arvore(AST_struct raiz);
void verifica_funcao(AST_struct no);
char* verifica_params_funcao(AST_struct no);
void verifica_declaracao(AST_struct no);
void imprime_tabela(no_tabela_global tab_print);
void imprime_tabela_funcao(no_tabela_func tab_print);