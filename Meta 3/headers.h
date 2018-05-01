/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct AST* AST_struct;
typedef struct AST {
	AST_struct pai;
	AST_struct filho;
	AST_struct irmao;
	char* valor;
	char* tipo;
	char* anotacao;
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
no_tabela_global insere_simbolo_global(char*, char*, char*);
void inicia_tabela_funcao(no_tabela_global);
void insere_simbolo_funcao(char*, char*, int, no_tabela_func);

//Funcoes semantica.c
no_tabela_global tabela_simbolos;
void le_arvore_tabela(AST_struct);
void anotar_arvore(AST_struct);
void verifica_funcao(AST_struct, int);
char* verifica_params_funcao(AST_struct);
void verifica_declaration(AST_struct);
void imprime_tabela(no_tabela_global);
void imprime_tabela_funcao(no_tabela_func);
void insere_param_list(AST_struct, no_tabela_global);
void insere_func_body(AST_struct, no_tabela_global);
void imprime_arvore_anotada(AST_struct no, int profundidade);