/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct AST* no_struct;
typedef struct AST {
	int id_no;
	char* valor;
	char* tipo;
	AST pai;
	AST filho;
	AST irmao;
}AST;