/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

AST cria_no(tipos tipo_no, char* valor, char* tipo) {
	AST novo_no = malloc(sizeof(AST));

	novo_no->id_no = 0;
	novo_no->pai = NULL;
	novo_no->filho = NULL;
	novo_no->irmao = NULL;

	novo_no->valor = (char*)malloc(strlen(valor)*sizeof(char)+1); // +1 para contar com '\0'
	novo_no->tipo = (char*)malloc(strlen(tipo)*sizeof(char)+1); // +1 para contar com '\0'
	strcpy(new->valor,valor);
	strcpy(new->tipo,tipo);


	return novo_no;
}