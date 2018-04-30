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

no_tabela_global insere_simbolo_global(char* tipo, char* nome, char* params){
	no_tabela_global checker = tabela_simbolos;
	
	while(checker->next!=NULL){
		if(checker->nome !=NULL && strcmp(checker->next->nome,nome)==0){
			return NULL;
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
	
	return aux;
}

void inicia_tabela_funcao(no_tabela_global ntg){
	char nome_tab[200]  = "===== Function ";
	strcat(nome_tab, ntg->nome);
	strcat(nome_tab, " Symbol Table =====");
	
	no_tabela_func novo_no = (no_tabela_func)malloc(sizeof(nt));
	novo_no->tipo = (char*)malloc((strlen(nome_tab)+1)*sizeof(char));
	
	strcpy(novo_no->tipo,nome_tab);
	
	novo_no->nome = NULL;
	novo_no->param = NULL;
	novo_no->next = NULL;
	ntg->next_table = novo_no;
	
	//Adicionar return a tabela
	no_tabela_func return_no = (no_tabela_func)malloc(sizeof(nt));
	char* return_text = "return";
	char* return_type = ntg->tipo;
	
	return_no->nome = (char*)malloc((strlen(return_text)+1)*sizeof(char));
	strcpy(return_no->nome,return_text);
	
	if(return_type!=NULL){
		return_no->tipo = (char*)malloc((strlen(ntg->tipo)+1)*sizeof(char));
		strcpy(return_no->tipo,return_type);
	}
	
	return_no->param = NULL;
	return_no->next = NULL;
	novo_no->next = return_no;
}



/*
void insere_tabela(no_tabela_global ntg){
	//Verificar todos os nos da tabela global se ja existe um ponteiro para a tabela de funcao
	no_tabela_global checker = tabela_simbolos;
	int exists = 0;
	while(checker!=NULL){
		if(checker->next_table!=NULL){
			if(strstr(checker->next_table->tipo,ntg->nome)!=NULL){
				exists = 1;
				break;
			}
		}
		checker = checker->next;
	}
	//Caso exista, inserir no fim
	if(exists){
		char* nome = ntg->nome;
		char* tipo = ntg->tipo;
		char* param = ntg->array_params;
		insere_tabela_func(nome,tipo,param,checker->next_table);
	}
	//Caso nao exista, criar essa nova tabela e inserir la um return logo
	else{
		criar_tabela_func(ntg);
	}
}

void criar_tabela_func(no_tabela_global ntg){
	char nome_tab[200]  = "===== Function ";
	strcat(nome_tab, ntg->nome);
	strcat(nome_tab, " Symbol Table =====");
	no_tabela_func novo_no = (no_tabela_func)malloc(sizeof(nt));
	novo_no->tipo = (char*)malloc((strlen(nome_tab)+1)*sizeof(char));
	strcpy(novo_no->tipo,nome_tab);
	novo_no->nome = NULL;
	novo_no->param = NULL;
	novo_no->next = NULL;
	ntg->next_table = novo_no;
	//Adicionar return a tabela
	no_tabela_func return_no = (no_tabela_func)malloc(sizeof(nt));
	char* return_text = "return";
	char* return_type = ntg->tipo;
	return_no->nome = (char*)malloc((strlen(return_text)+1)*sizeof(char));
	strcpy(return_no->nome,return_text);
	if(return_type!=NULL){
		return_no->tipo = (char*)malloc((strlen(ntg->tipo)+1)*sizeof(char));
		strcpy(return_no->tipo,return_type);
	}
	return_no->param = NULL;
	return_no->next = NULL;
	novo_no->next = return_no;
}

void insere_tabela_func(char* nome,char* tipo,char* params,no_tabela_func no){
	no_tabela_func checker = no;
	while(checker->next!=NULL){
		if(checker->nome !=NULL && strcmp(checker->next->nome,nome)==0){
			return;
		}
		checker = checker->next;
	}
	no_tabela_func aux = (no_tabela_func)malloc(sizeof(nt));
	aux->tipo = (char*)malloc(strlen(tipo)*sizeof(char)+1);
	strcpy(aux->tipo,tipo);
	aux->nome = (char*)malloc(strlen(nome)*sizeof(char)+1);
	strcpy(aux->nome,nome);
	aux->param = (char*)malloc(strlen(params)*sizeof(char)+1);
	strcpy(aux->param,params);
	aux->next = NULL;
	checker->next = aux;
	return;
}
*/