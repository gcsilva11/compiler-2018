/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/
#include "headers.h"

void gera_codigo(AST_struct raiz){
	if(raiz!=NULL){
		if(strcmp(raiz->tipo,"Program")==0){
			gera_program(raiz);
			raiz = raiz->filho;
			printf("\n");
		}
		else if(strcmp(raiz->tipo,"FuncDeclaration")==0){
			// 
			raiz = raiz->irmao;
			printf("\n");
		}
		else if(strcmp(raiz->tipo,"FuncDefinition")==0){
			gera_func_definition(raiz, type2llvm(raiz->filho->tipo),raiz->filho->irmao->valor);
			raiz = raiz->irmao;
			printf("\n");
		}
		else if(strcmp(raiz->tipo,"Declaration")==0){
			printf("@%s = common global %s 0\n",raiz->filho->irmao->valor,type2llvm(raiz->filho->tipo));
			raiz = raiz->irmao;
			printf("\n");
		}
		gera_codigo(raiz);
	}
}

void gera_program(AST_struct raiz){
	printf("declare i32 @getchar()\n");
	printf("declare i32 @putchar(i32)\n");
}

void gera_func_definition(AST_struct raiz, char * tipo_funcao, char* nome_funcao){
	int id_aux = 0;
	printf("define %s @%s() {\n", tipo_funcao, nome_funcao);

	// Analisar funcao

	AST_struct aux = raiz->filho;
	while(aux->irmao!=NULL){
	 	aux = aux->irmao;
	 	if(aux!=NULL && strcmp(aux->tipo,"FuncBody")==0){
	 		AST_struct declaration_aux = aux->filho;
	 		while(declaration_aux){
	 			if(aux!=NULL && strcmp(declaration_aux->tipo,"Declaration")==0){
	 				printf("%%%s = alloca %s\n",declaration_aux->filho->irmao->valor,type2llvm(declaration_aux->filho->tipo));
	 			}
	 			else if(aux!=NULL && strcmp(declaration_aux->tipo,"Store")==0){
					// %0 = load i32, i32* %b, align 4
					// store i32 %0, i32* %a, align 4
					char scope_aux = '\0';
					if(check_global(declaration_aux->filho->irmao->valor,nome_funcao)==1){
						scope_aux = '@';
					}
					if(check_global(declaration_aux->filho->irmao->valor,nome_funcao)==0){
						scope_aux = '%';
					}

	  				printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->valor,nome_funcao), variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
	  				printf("store %%%s %d, %s* %c%s\n", variable_type(declaration_aux->filho->valor,nome_funcao), id_aux, variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->valor);

	  				id_aux++;
	 			}
	 			declaration_aux = declaration_aux->irmao;
	 		}
	 	}
	}
	if(aux->filho!=NULL){
		aux = aux->filho;
		while(aux->irmao!=NULL){
		 	aux = aux->irmao;
		}
		if(aux!=NULL && strcmp(aux->tipo,"Return")==0){
			if(strcmp(aux->filho->tipo,"Id")==0){
				if(strcmp(aux->filho->tipo,"Null")==0){
					printf("ret void\n");
					printf("}\n");
				}
				else{
					char scope_aux = '\0';
					if(check_global(aux->filho->valor,nome_funcao)==1)
						scope_aux = '@';
					if(check_global(aux->filho->valor,nome_funcao)==0)
						scope_aux = '%';
					
					printf("%%%d = load %s, %s* %c%s\n", id_aux, tipo_funcao, tipo_funcao, scope_aux, aux->filho->valor);
					printf("ret %c%s\n", scope_aux, aux->filho->valor);
					
					id_aux++;
				}
			}
			else{
				printf("ret %s %s\n", type2llvm(raiz->filho->tipo),aux->filho->valor);
			}
		}
		else if (aux!=NULL && strcmp(aux->tipo,"Declaration")==0){
			printf("%%%s = alloca %s\n",raiz->filho->irmao->valor,type2llvm(raiz->filho->tipo));
		}
	}
	printf("}\n");
}

int check_global(char * variavel, char * nome_funcao){
	no_tabela_global tabela_simb = tabela_simbolos;
	while(tabela_simb!=NULL){
		no_tabela_func aux = tabela_simb->next_table;
		if(nome_funcao!=NULL && tabela_simb->nome && strcmp(tabela_simb->nome,nome_funcao)==0){
			while(aux){
				if(variavel!=NULL && aux->nome && strcmp(variavel,aux->nome) == 0){
					return 0;
				}
				aux = aux->next;
			}
		}
		tabela_simb=tabela_simb->next;
	}
	tabela_simb = tabela_simbolos;
	while(tabela_simb->next){
		if(variavel!=NULL && tabela_simb->nome !=NULL && strcmp(variavel,tabela_simb->nome) == 0)
			return 1;
		tabela_simb=tabela_simb->next;
	}
	return -1;
}

char* variable_type(char * variavel, char * nome_funcao){
	no_tabela_global tabela_simb = tabela_simbolos;
	while(tabela_simb!=NULL){
		no_tabela_func aux = tabela_simb->next_table;
		if(nome_funcao!=NULL && tabela_simb->nome && strcmp(tabela_simb->nome,nome_funcao)==0){
			while(aux){
				if(variavel!=NULL && aux->nome && strcmp(variavel,aux->nome) == 0){
					return type2llvm(aux->tipo);
				}
				aux = aux->next;
			}
		}
		tabela_simb=tabela_simb->next;
	}
	tabela_simb = tabela_simbolos;
	while(tabela_simb->next){
		if(variavel!=NULL && tabela_simb->nome !=NULL && strcmp(variavel,tabela_simb->nome) == 0){
			return type2llvm(tabela_simb->tipo);
		}
		tabela_simb=tabela_simb->next;
	}
	return "";
}

char* type2llvm(char* type) {
	if (strcmp(type,"Int") == 0 || strcmp(type,"int") == 0){
		return "i32";
	}
	else if (strcmp(type,"Short") == 0 || strcmp(type,"short") == 0){
		return "i16";
	}
	else if (strcmp(type,"Char") == 0 || strcmp(type,"char") == 0){
		return "i8";
	}
	else if (strcmp(type,"Double") == 0 || strcmp(type,"Void") == 0 || strcmp(type,"double") == 0 || strcmp(type,"void") == 0){
		for(int i = 0; type[i]; i++){
			type[i] = tolower(type[i]);
		}
		return type;
	}
	else return NULL;
}