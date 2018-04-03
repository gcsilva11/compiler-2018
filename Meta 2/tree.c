/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

AST cria_no_raiz(tipos tipo_no, char* valor, char* nome_tipo) {
	AST novo_no = malloc(sizeof(AST));

	novo_no->pai = NULL;
	novo_no->filho = NULL;
	novo_no->irmao = NULL;
	novo_no->id_no = NULL;
	novo_no->tipo = tipo_no;

	novo_no->valor = (char*)malloc(strlen(valor)*sizeof(char)+1); // +1 para contar com '\0'
	novo_no->nome_tipo = (char*)malloc(strlen(nome_tipo)*sizeof(char)+1); // +1 para contar com '\0'
	strcpy(new->valor,valor);
	strcpy(new->nome_tipo,nome_tipo);


	return novo_no;
}