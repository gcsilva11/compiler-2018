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
			if(checker->tipo !=NULL && strcmp(checker->next->tipo,tipo)==0){
				if(checker->array_params !=NULL && strcmp(checker->next->array_params,params)==0)
					return checker->next;
				else
					return NULL;
			}
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
	novo_no->param = 0;
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
	
	return_no->param = 0;
	return_no->next = NULL;
	novo_no->next = return_no;
}

void insere_simbolo_funcao(char* tipo, char* nome, int param, no_tabela_func no){
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
	
	aux->param = (int)malloc(sizeof(int));
	aux->param = param;
	
	aux->next = NULL;

	checker = no;
	while(checker->next!=NULL){
		checker = checker->next;
	}
	checker->next = aux;

	return;
}

void anotar_arvore(AST_struct no){
	AST_struct aux = no;
	if(aux != NULL){
		if (strcmp(no->tipo,"Store") == 0){

		}else if(strcmp(no->tipo,"Comma") == 0){

		}else if(strcmp(no->tipo,"Le") == 0 || strcmp(no->tipo,"Ge") == 0 || strcmp(no->tipo,"Lt") == 0 || strcmp(no->tipo,"Gt") == 0){

		}else if(strcmp(no->tipo,"Eq") == 0 || strcmp(no->tipo,"Ne") == 0){

		}else if(strcmp(no->tipo,"Add") == 0){

		}else if(strcmp(no->tipo,"Sub") == 0){

		}else if(strcmp(no->tipo,"Mul") == 0){

		}else if(strcmp(no->tipo,"Div") == 0){

		}else if(strcmp(no->tipo,"Mod") == 0){

		}else if(strcmp(no->tipo,"Or") == 0){

		}else if(strcmp(no->tipo,"And") == 0){

		}else if(strcmp(no->tipo,"BitWiseAnd") == 0){

		}else if(strcmp(no->tipo,"BitWiseOr") == 0){

		}else if(strcmp(no->tipo,"BitWiseXor") == 0){

		}else if(strcmp(no->tipo,"Plus") == 0){

		}else if(strcmp(no->tipo,"Minus") == 0){

		}else if(strcmp(no->tipo,"Not") == 0){

		}else if(strcmp(no->tipo,"Call") == 0){

		}else if(strcmp(no->tipo,"Id") == 0){

		}else if(strcmp(no->tipo,"IntLit") == 0){

		}else if(strcmp(no->tipo,"ChrLit") == 0){

		}else if(strcmp(no->tipo,"RealLit") == 0){

		}
	}

	aux = no->filho;
	while(aux != NULL){
		anotar_arvore(aux);
		aux = aux->irmao;
	}
	return;
}
