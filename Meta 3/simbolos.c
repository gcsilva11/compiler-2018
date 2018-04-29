/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include "arvore.h"

no_tabela_global tabela_simbolos;

no_tabela_global inicia_tabela_global(){


	tabela_simbolos = (no_tabela_global)malloc(sizeof(ntg));

	tabela_simbolos->tipo = (char*)malloc((strlen("===== Global Symbol Table =====")+1)*sizeof(char));
	strcpy(tabela_simbolos->tipo,"===== Global Symbol Table =====");

	tabela_simbolos->nome = NULL;
	tabela_simbolos->next_table = NULL;
	tabela_simbolos->next = NULL;
	tabela_simbolos->prev = NULL;
	
	insere_simbolo_global("int","putchar");
	insere_simbolo_global("int","getchar");

	return tabela_simbolos;

}

void insere_simbolo_global(char* tipo, char* nome){
	

	no_tabela_global aux = (no_tabela_global)malloc(sizeof(ntg));

	aux->tipo = (char*)malloc(strlen(tipo)*sizeof(char)+1);
	strcpy(aux->tipo,tipo);

	aux->nome = (char*)malloc(strlen(nome)*sizeof(char)+1);
	strcpy(aux->nome,nome);

	aux->next_table = NULL;
	aux->next = NULL;

	return;
}