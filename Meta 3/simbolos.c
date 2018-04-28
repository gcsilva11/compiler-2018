/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include <string.h>

no_tabela_global tabela_simbolos;

no_tabela_global inicia_tabela_global(){
	printf("ENTREI NO inicia_tabela_global");
	tabela_simbolos = calloc(1,sizeof(no_tabela_global));
	/*char** aux_char = calloc(sizeof(char*));
	aux_char[0] = "int";
	aux_char[1] = "void";*/

	tabela_simbolos->tipo = (char*)calloc((strlen("===== Global Symbol Table =====")+1),sizeof(char));
	strcpy(tabela_simbolos->tipo,"===== Global Symbol Table =====");

	tabela_simbolos->nome = (char*)calloc((strlen("")+1),sizeof(char));
	strcpy(tabela_simbolos->tipo,"");

	/*tabela_simbolos->array_params = (char**)calloc((strlen("           ")+1),sizeof(char*));
	strcpy(tabela_simbolos->array_params,aux_char);*/

	
	insere_simbolo_global("int","putchar");

	insere_simbolo_global("int","getchar");


	printf("ACABEI NO inicia_tabela_global");
	return tabela_simbolos;

}

void insere_simbolo_global(char* tipo, char* nome){
	
	printf("ENTREI NO insere_simbolo_global");
	no_tabela_global aux;
	while(tabela_simbolos->next != NULL){
		aux = tabela_simbolos->next;
	}

	aux->nome = nome;
	aux->tipo = tipo;
	aux->next = NULL;
	//aux->array_params = array_params;

	tabela_simbolos->next = aux;
	printf("SAI DO insere_simbolo_global");
}