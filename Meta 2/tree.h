/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>

typedef enum {no_raiz, no_variavel, no_func, no_statement, no_operacao, no_terminal, no_espec} tipos;
typedef struct AST* no_struct;
typedef struct AST {
	int id_no;
	char* valor;
	char* nome_tipo;
	tipos tipo;
	AST pai;
	AST filho;
	AST irmao;
}AST;