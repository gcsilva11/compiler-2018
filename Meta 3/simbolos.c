/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simbolos.h"

tabela_global tabela_simbolos;

void inicia_tabela_global(char* nome){
	tabela_simbolos = calloc(1,sizeof(tabela_global));

	tabela_simbolos->tipo = (char*)calloc((strlen("Global")+1),sizeof(char));
	strcpy(tabela_simbolos->tipo,"Global");

	tabela_simbolos->tipo = (char*)calloc((strlen(nome)+1),sizeof(char));
	strcpy(tabela_simbolos->tipo,nome);

	tabela_simbolos->array_params = NULL;
}

void insere_simbolo(tg tabela_simbolos, char* tipo, char* nome,char** array_params, int num_params){
	tg aux = tabela_simbolos;
	
	while(aux->next != NULL){
		aux = aux->next;
	}

	aux->nome = nome;
	aux->tipo = tipo;
	aux->array_params = array_params;
}