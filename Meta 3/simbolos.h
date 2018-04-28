/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

typedef struct t* tabela_func;
typedef struct t{
	char* nome;
	char* tipo;
	char* params;
	tabela_func next;
}t;

typedef struct tg* tabela_global;
typedef struct tg{
	
	char* tipo;
	char* nome;
	char** array_params;

	tabela_func tabela_no;
	tabela_global next;
}tg;