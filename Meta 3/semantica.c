#include "arvore.h"

void begin_table(){


	no_tabela_global tab_print;


	tab_print = inicia_tabela_global();

	print_tabela(tab_print);
	
	return;

}

void print_tabela(no_tabela_global tab_print){


	while(tab_print!=NULL){
		if(tab_print->nome==NULL){
			printf("%s\n", tab_print->tipo);
		}
		else{
			printf("%s\t%s\n", tab_print->nome,tab_print->tipo);
		}
		tab_print = tab_print->next;
	}

	return;

}