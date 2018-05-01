/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
*/
#include "headers.h"

void le_arvore_tabela(AST_struct raiz){
	
	if(raiz!=NULL){
	
		if(strcmp(raiz->tipo,"Program")==0){
			inicia_tabela_global();
			raiz = raiz->filho;
		}

		else if(strcmp(raiz->tipo,"FuncDeclaration")==0){
			verifica_funcao(raiz,0);
			raiz = raiz->irmao;
		}
	
		else if(strcmp(raiz->tipo,"FuncDefinition")==0){
			verifica_funcao(raiz,1);
			raiz = raiz->irmao;
		}
	
		else{
			verifica_declaration(raiz);
			raiz = raiz->irmao;
		}
	
		le_arvore_tabela(raiz);	
	}
	return;
}

void verifica_funcao(AST_struct no, int func_type){
	char* nome = strdup(no->filho->irmao->valor);
	char* tipo = strdup(no->filho->tipo);
	tipo[0] = tipo[0] + 32;
	
	char* params = verifica_params_funcao(no->filho->irmao->irmao);
	no_tabela_global new_func = insere_simbolo_global(tipo,nome,params);
	
	if(new_func!=NULL && func_type == 1){
		inicia_tabela_funcao(new_func);
		insere_param_list(no->filho->irmao->irmao,new_func);
		insere_func_body(no->filho->irmao->irmao->irmao,new_func);
	}
	return;
}

void verifica_declaration(AST_struct no){
	char* nome = strdup(no->filho->irmao->valor);
	char* tipo = strdup(no->filho->tipo);
	tipo[0] = tipo[0] + 32;
	
	insere_simbolo_global(tipo,nome,"");
	return;
}

char* verifica_params_funcao(AST_struct no){
	char params[10000] = "";
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

		else if(strcmp(aux->filho->tipo,"Short")==0)
			strcat(params,"short");
	
		if(aux->irmao)
			strcat(params,",");
		aux=aux->irmao;
	}
	return strdup(params);
}

void insere_param_list(AST_struct param_list, no_tabela_global new_func){
	AST_struct aux = param_list;

	aux = aux->filho;
	while(aux!=NULL){
		char* tipo = strdup(aux->filho->tipo);
		tipo[0] = tipo[0] + 32;
		if(aux->filho->irmao!=NULL){
			insere_simbolo_funcao(tipo,aux->filho->irmao->valor,1,new_func->next_table);
		}
		aux = aux -> irmao;
	}
	return;
}

void insere_func_body(AST_struct func_body, no_tabela_global new_func){

	AST_struct aux = func_body;
	if(strcmp(aux->tipo,"Declaration")==0){
		char* tipo = strdup(aux->filho->tipo);
		tipo[0] = tipo[0] + 32;
		insere_simbolo_funcao(tipo,aux->filho->irmao->valor,0,new_func->next_table);	
	}
	aux = aux->filho;
	while(aux != NULL){
		insere_func_body(aux,new_func);
		aux = aux->irmao;
	}
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
		else{
			if(print_aux->param == 1)
				printf("%s\t%s\tparam\n", print_aux->nome,print_aux->tipo);
			else
				printf("%s\t%s\n", print_aux->nome,print_aux->tipo);
		}
		print_aux = print_aux->next;
	}
	
	printf("\n");
	
	return;
}