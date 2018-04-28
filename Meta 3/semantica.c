#include "arvore.h"

void begin_table(AST_struct raiz){

	no_tabela_global tab_print;


	printf("A ENTRAR NO IF begin_table");
	if(strcmp(raiz->tipo, "Program")==0){
		printf("ENTREI NO IF begin_table");

		tab_print = inicia_tabela_global();

		print_tabela(tab_print);
	}
	printf("SAI DO IF begin_table");

}

void print_tabela(no_tabela_global tab_print){

	printf("A ENTRAR NO print_table");

	while(tab_print!=NULL){
		printf("WHILE");
		printf("%s/t%s", tab_print->tipo,tab_print->nome);
		tab_print = tab_print->next;
	}

	printf("A SAIR DO print_table");

}