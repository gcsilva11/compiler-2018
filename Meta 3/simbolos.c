/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include "headers.h"


void inicia_tabela_global(){


	tabela_simbolos = (no_tabela_global)malloc(sizeof(ntg));

	tabela_simbolos->tipo = (char*)malloc((strlen("===== Global Symbol Table =====")+1)*sizeof(char));
	strcpy(tabela_simbolos->tipo,"===== Global Symbol Table =====");

	tabela_simbolos->nome = NULL;
	tabela_simbolos->array_params = NULL;
	tabela_simbolos->next_table = NULL;
	tabela_simbolos->next = NULL;

	insere_simbolo_global("int","putchar","int");
	insere_simbolo_global("int","getchar","void");

	return;

}

void insere_simbolo_global(char* tipo, char* nome, char* params){
	no_tabela_global checker = tabela_simbolos;

	while(checker->next!=NULL){
		if(checker->nome !=NULL && strcmp(checker->next->nome,nome)==0){
			return;
		}
		checker = checker->next;
	}

	no_tabela_global aux = (no_tabela_global)malloc(sizeof(ntg));

	aux->tipo = (char*)malloc(strlen(tipo)*sizeof(char)+1);
	strcpy(aux->tipo,tipo);

	aux->nome = (char*)malloc(strlen(nome)*sizeof(char)+1);
	strcpy(aux->nome,nome);

	aux->array_params = (char*)malloc(strlen(params)*sizeof(char)+1);
	strcpy(aux->array_params,params);

	aux->next_table = NULL;
	aux->next = NULL;

	checker->next = aux;

	return;
}