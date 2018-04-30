/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include "headers.h"

void le_arvore(AST_struct raiz){
	
	if(raiz!=NULL){
	
		if(strcmp(raiz->tipo,"Program")==0){
			inicia_tabela_global();
			raiz = raiz->filho;
		}
	
		else if(strcmp(raiz->tipo,"FuncDefinition")==0){
			verifica_funcao(raiz);
			raiz = raiz->irmao;
		}
	
		else if(strcmp(raiz->tipo,"FuncDeclaration")==0){
			verifica_funcao(raiz);
			raiz = raiz->irmao;
		}
	
		else{
			verifica_declaracao(raiz);
			raiz = raiz->irmao;
		}
	
		le_arvore(raiz);	
	}
	return;
}

void verifica_funcao(AST_struct no){
	char* nome = strdup(no->filho->irmao->valor);
	char* tipo = strdup(no->filho->tipo);
	tipo[0] = tipo[0] + 32;
	
	char* params = verifica_params_funcao(no->filho->irmao->irmao);
	no_tabela_global new_func = insere_simbolo_global(tipo,nome,params);
	
	if(new_func!=NULL){
		inicia_tabela_funcao(new_func);
	}
	return;
}

char* verifica_params_funcao(AST_struct no){
	char params[1000] = "";
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
	
		else if(strcmp(aux->filho->tipo,"Char")==0)
			strcat(params,"char");
	
		if(aux->irmao)
			strcat(params,",");
		aux=aux->irmao;
	}
	return strdup(params);
}

void verifica_declaracao(AST_struct no){
	char* nome = strdup(no->filho->irmao->valor);
	char* tipo = strdup(no->filho->tipo);
	tipo[0] = tipo[0] + 32;
	
	insere_simbolo_global(tipo,nome,"");
	return;
}

void imprime_tabela(no_tabela_global tab_print){
	no_tabela_global print_aux= tab_print;
	
	while(print_aux!=NULL){
		if(print_aux->nome==NULL){
			printf("%s\n", print_aux->tipo);
		}
	
		else{
			if(strcmp(print_aux->array_params,"")==0){
				printf("%s\t%s\n", print_aux->nome,print_aux->tipo);
			}
	
			else{
				printf("%s\t%s(%s)\n", print_aux->nome,print_aux->tipo,print_aux->array_params);
			}
		}
		print_aux = print_aux->next;
	}
	
	printf("\n");
	
	while(tab_print!=NULL){
		if(tab_print->next_table!=NULL){
			imprime_tabela_funcao(tab_print->next_table);
		}
		tab_print = tab_print->next;
	}
	return;
}

void imprime_tabela_funcao(no_tabela_func tab_print){
	no_tabela_func print_aux = tab_print;
	
	while(print_aux!=NULL){
		if(print_aux->nome==NULL){
			printf("%s\n", print_aux->tipo);
		}
	
		else
			if(print_aux->param)
				printf("%s\t%s\tparam\n", print_aux->nome,print_aux->tipo);
	
			else
				printf("%s\t%s\n", print_aux->nome,print_aux->tipo);
		print_aux = print_aux->next;
	}
	
	printf("\n");
	
	return;
}