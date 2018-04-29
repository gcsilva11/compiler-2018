#include "arvore.h"

void begin_table(AST_struct raiz){

	if(strcmp(raiz->tipo,"Program")==0){
		inicia_tabela_global();


	}
	if(strcmp(raiz->tipo,"FuncDefinition")==0){
		check_next_func(raiz);
	}

	if(strcmp(raiz->tipo,"FuncDeclaration")==0){
		check_next_func(raiz);
	}
	if(strcmp(raiz->tipo,"Declaration")==0){
		
		if(raiz->pai){
			if(strcmp(raiz->pai->tipo,"Program")==0){
				check_decl(raiz);
			}

		}
		
	}

	
	AST_struct aux = raiz->filho;

	while(aux!=NULL){
		begin_table(aux);
		aux = aux->irmao;
	}

	return;

}

void print_tabela(no_tabela_global tab_print){


	while(tab_print!=NULL){
		if(tab_print->nome==NULL){
			printf("%s\n", tab_print->tipo);
		}
		else{
			if(strcmp(tab_print->array_params,"")==0){
				printf("%s\t%s\n", tab_print->nome,tab_print->tipo);
			}
			else{
				printf("%s\t%s(%s)\n", tab_print->nome,tab_print->tipo,tab_print->array_params);
			}
		}
		tab_print = tab_print->next;
	}

	return;

}


void check_next_func(AST_struct no){

	char* nome = strdup(no->filho->irmao->valor);
	char* tipo = strdup(no->filho->tipo);
	tipo[0] = tipo[0] + 32;

	char* params = check_func_params(no->filho->irmao->irmao);

	insere_simbolo_global(tipo,nome,params);

	return;

}


char* check_func_params(AST_struct no){

	char params[300] = "";
	AST_struct aux = NULL;
	
	if(no->filho){
		aux = no->filho;
	}

	while(aux){
		if(strcmp(aux->filho->tipo,"Void")==0)
			strcat(params,"void");	
		else if(strcmp(aux->filho->tipo,"Int")==0)
			strcat(params,"int");
		else if(strcmp(aux->filho->tipo,"Double")==0)
			strcat(params,"double");
		if(aux->irmao)
			strcat(params,",");
		aux=aux->irmao;
	}

	return strdup(params);
}

void check_decl(AST_struct no){

	char* nome = strdup(no->filho->irmao->valor);
	char* tipo = strdup(no->filho->tipo);
	tipo[0] = tipo[0] + 32;

	insere_simbolo_global(tipo,nome,"");

	return;

}