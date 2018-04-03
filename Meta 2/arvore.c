/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"

AST_struct cria_no(char* tipo, char* valor) {
	AST_struct novo_no = malloc(sizeof(AST_struct));

	novo_no->pai = NULL;
	novo_no->filho = NULL;
	novo_no->irmao = NULL;
	novo_no->no_filhos = 0;

	novo_no->valor = (char*)malloc(strlen(valor)*sizeof(char)+1); // +1 para contar com '\0'
	novo_no->tipo = (char*)malloc(strlen(tipo)*sizeof(char)+1); // +1 para contar com '\0'
	strcpy(novo_no->valor,valor);
	strcpy(novo_no->tipo,tipo);

	return novo_no;
}

void adicionar_filho(AST_struct pai, AST_struct novo_no){
	if (novo_no != NULL){
		pai->filho = novo_no;
		pai->no_filhos++;
		novo_no->pai = pai;
	}
	return;
}

void adicionar_irmao(AST_struct existente, AST_struct novo_no){
	if (existente != NULL && novo_no != NULL){
		
		AST_struct aux = existente;
		
		while(aux->irmao != NULL){
			aux = aux->irmao;
		}

		aux->irmao = novo_no;

		if(novo_no->pai != NULL){
			novo_no->pai = aux->pai;
			novo_no->pai->no_filhos++;
		}
	}
	return;
}

int conta_irmaos(AST_struct raiz){
	AST_struct aux;
	int soma = 0;
	
	aux = raiz;
	
	while(aux != NULL){
		aux = aux->irmao;
		soma++;
	}
	return soma;
}

void imprime_arvore(AST_struct no, int profundidade){
	if (no != NULL){

		int prof_aux = 0;
		AST_struct aux;

		if (strcmp(no->tipo,"Program") == 0)
			printf("%s\n",no->tipo);
		else {
			while(prof_aux < profundidade){
				printf("..");
				prof_aux++;
			}
			if(strcmp(no->valor,"") == 0)
				printf("%s\n", no->tipo);
			else
				printf("%s(%s)\n", no->tipo, no->valor);
		}
		aux = no->filho;
		while(aux != NULL){
			AST_struct freeMe = aux;
			imprime_arvore(aux,profundidade+1);
			aux = aux->irmao;

			free(freeMe->tipo);
			free(freeMe->valor);
			free(freeMe);
		}
	}
	return;
}