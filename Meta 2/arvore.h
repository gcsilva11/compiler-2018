/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct AST* AST_struct;
typedef struct AST {
	AST_struct pai;
	AST_struct filho;
	AST_struct irmao;
	int no_filhos;
	char* valor;
	char* tipo;
}AST;

void imprime(char* msg);
void imprime_com_conteudo(char* msg, char* conteudo);
int yyparse();
AST_struct cria_no(char*, char*);
void adicionar_filho(AST_struct, AST_struct);
void adicionar_irmao(AST_struct, AST_struct);
void imprime_arvore(AST_struct, int);