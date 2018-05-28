/*
João Pedro Costa Ferreiro 2014197760
Guilherme Cardoso Gomes da Silva 2014226354
*/
#include "headers.h"

int id_aux = 0;
int conv_aux = 0;
int sub_aux = 0;

void gera_codigo(AST_struct raiz){
	if(raiz!=NULL){
		if(strcmp(raiz->tipo,"Program")==0){
			gera_program(raiz);
			raiz = raiz->filho;
			printf("\n");
		}
		else if(strcmp(raiz->tipo,"FuncDeclaration")==0){
			raiz = raiz->irmao;
			printf("\n");
		}
		else if(strcmp(raiz->tipo,"FuncDefinition")==0){
			id_aux = 1;
			gera_func_definition(raiz, type2llvm(raiz->filho->tipo),raiz->filho->irmao->valor);
			raiz = raiz->irmao;
			printf("\n");
		}
		else if(strcmp(raiz->tipo,"Declaration")==0){
			printf("@%s = global %s 0\n",raiz->filho->irmao->valor,type2llvm(raiz->filho->tipo));
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
	printf("define %s @%s() {\n", tipo_funcao, nome_funcao);
	AST_struct aux = raiz->filho;
	while(aux->irmao!=NULL){
		aux = aux->irmao;
		if(aux!=NULL && strcmp(aux->tipo,"FuncBody")==0){
			AST_struct declaration_aux = aux->filho;
			while(declaration_aux){
				printf("\t");
				char scope_aux = '\0';
				if(declaration_aux!=NULL && strcmp(declaration_aux->tipo,"Declaration")==0){
					printf("%%%s = alloca %s\n",declaration_aux->filho->irmao->valor,type2llvm(declaration_aux->filho->tipo));
					if(declaration_aux->filho->irmao->irmao){
						if(check_global(declaration_aux->filho->irmao->valor,nome_funcao)==1){
							scope_aux = '@';
						}
						if(check_global(declaration_aux->filho->irmao->valor,nome_funcao)==0){
							scope_aux = '%';
						}
 						printf("\t");
 						if(strcmp(declaration_aux->filho->irmao->irmao->tipo,"ChrLit")==0)
 							printf("store %s %d, %s* %c%s\n", variable_type(declaration_aux->filho->irmao->valor,nome_funcao), *(declaration_aux->filho->irmao->irmao->valor+sizeof(char)), variable_type(declaration_aux->filho->irmao->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
 						else if(strcmp(declaration_aux->filho->irmao->irmao->tipo,"IntLit")==0 || strcmp(declaration_aux->filho->irmao->irmao->tipo,"RealLit")==0)
							printf("store %s %s, %s* %c%s\n", variable_type(declaration_aux->filho->irmao->valor,nome_funcao), declaration_aux->filho->irmao->irmao->valor, variable_type(declaration_aux->filho->irmao->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
						
						else if(strcmp(declaration_aux->filho->irmao->irmao->tipo,"Minus")==0){
							if (strcmp(declaration_aux->filho->irmao->irmao->filho->tipo,"Id")==0){
								printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->irmao->irmao->filho->valor,nome_funcao), variable_type(declaration_aux->filho->irmao->irmao->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->irmao->filho->valor);
								printf("\t");
								printf("%%sub%d = sub nsw %s 0, %%%d\n", sub_aux, variable_type(declaration_aux->filho->irmao->irmao->filho->valor,nome_funcao), id_aux);
								printf("\t");
								printf("store %s %%sub%d, %s* %c%s\n", variable_type(declaration_aux->filho->irmao->irmao->filho->valor,nome_funcao), sub_aux, variable_type(declaration_aux->filho->irmao->irmao->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
								sub_aux++;
								id_aux++;
							}
							else{
								printf("store %s -%s, %s* %c%s\n", variable_type(declaration_aux->filho->irmao->valor,nome_funcao), declaration_aux->filho->irmao->irmao->filho->valor, variable_type(declaration_aux->filho->irmao->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
							}
						}
	 				}
	 			}
	 			else if(declaration_aux!=NULL && strcmp(declaration_aux->tipo,"Store")==0){
					if(check_global(declaration_aux->filho->valor,nome_funcao)==1){
						scope_aux = '@';
					}
					if(check_global(declaration_aux->filho->valor,nome_funcao)==0){
						scope_aux = '%';
					}
	 				if(strcmp(declaration_aux->filho->irmao->tipo,"Id")==0){
		  				printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->valor,nome_funcao), variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
		  				printf("\t");
		  				printf("store %s %%%d, %s* %c%s\n", variable_type(declaration_aux->filho->valor,nome_funcao), id_aux, variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->valor);
		  				id_aux++;
		  			}
		  			else if(strcmp(declaration_aux->filho->irmao->tipo,"ChrLit")==0){
	  					printf("store %s %d, %s* %c%s\n", variable_type(declaration_aux->filho->valor,nome_funcao), *(declaration_aux->filho->irmao->valor+sizeof(char)), variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->valor);
		  			}
	  				else if(strcmp(declaration_aux->filho->irmao->tipo,"IntLit") == 0 || strcmp(declaration_aux->filho->irmao->tipo,"RealLit") == 0 ){
	  					printf("store %s %s, %s* %c%s\n", variable_type(declaration_aux->filho->valor,nome_funcao), declaration_aux->filho->irmao->valor, variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->valor);
		  			}
		  			else if(strcmp(declaration_aux->filho->irmao->tipo,"Minus") == 0){
	  					if (strcmp(declaration_aux->filho->irmao->filho->tipo,"Id")==0){
							printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->irmao->filho->valor,nome_funcao), variable_type(declaration_aux->filho->irmao->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->irmao->filho->valor);
							printf("\t");
							printf("%%sub%d = sub nsw %s 0, %%%d\n", sub_aux, variable_type(declaration_aux->filho->irmao->filho->valor,nome_funcao), id_aux);
							printf("\t");
							printf("store %s %%sub%d, %s* %c%s\n", variable_type(declaration_aux->filho->irmao->filho->valor,nome_funcao), sub_aux, variable_type(declaration_aux->filho->irmao->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->valor);
							sub_aux++;
							id_aux++;
						}
						else{
							printf("store %s -%s, %s* %c%s\n", variable_type(declaration_aux->filho->valor,nome_funcao), declaration_aux->filho->irmao->filho->valor, variable_type(declaration_aux->filho->valor,nome_funcao), scope_aux, declaration_aux->filho->valor);
						}
		  			}
	 			}
	 			else if (declaration_aux!=NULL && strcmp(declaration_aux->tipo,"Call")==0){
	 				if(check_global(declaration_aux->filho->irmao->valor,nome_funcao)==1){
						scope_aux = '@';
					}
					if(check_global(declaration_aux->filho->irmao->valor,nome_funcao)==0){
						scope_aux = '%';
					}
	 				if(strcmp(declaration_aux->filho->valor,"putchar")==0){
	 					if(strcmp(declaration_aux->filho->irmao->tipo,"Id")==0){
	 						if(strcmp(declaration_aux->filho->irmao->anotacao,"char")==0 || strcmp(declaration_aux->filho->irmao->anotacao,"short")==0){
	 							printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->irmao->valor, nome_funcao), variable_type(declaration_aux->filho->irmao->valor, nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
		 						printf("\t");
	 							printf("%%conv%d = sext %s %%%d to i32\n",conv_aux,variable_type(declaration_aux->filho->irmao->valor, nome_funcao), id_aux);
			  					printf("\t");
			  					printf("call %s @%s(%s %%conv%d)\n",function_type(declaration_aux->filho->valor),declaration_aux->filho->valor,variable_type(declaration_aux->filho->valor,nome_funcao),conv_aux);
				  				id_aux++;
				  				conv_aux++;
				  			}
				  			else if(strcmp(declaration_aux->filho->irmao->anotacao,"double")==0){
				  				printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->irmao->valor, nome_funcao), variable_type(declaration_aux->filho->irmao->valor, nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
		 						printf("\t");
	 							printf("%%conv%d = fptoui %s %%%d to i32\n",conv_aux,variable_type(declaration_aux->filho->irmao->valor, nome_funcao), id_aux);
			  					printf("\t");
			  					printf("call %s @%s(%s %%conv%d)\n",function_type(declaration_aux->filho->valor),declaration_aux->filho->valor,variable_type(declaration_aux->filho->valor,nome_funcao),conv_aux);
				  				id_aux++;
				  				conv_aux++;
				  			}
				  			else{
				  				printf("%%%d = load %s, %s* %c%s\n", id_aux, variable_type(declaration_aux->filho->irmao->valor,nome_funcao), variable_type(declaration_aux->filho->irmao->valor, nome_funcao), scope_aux, declaration_aux->filho->irmao->valor);
				  				printf("\t");
				  				printf("call %s @%s(%s %%%d)\n",function_type(declaration_aux->filho->valor),declaration_aux->filho->valor,variable_type(declaration_aux->filho->irmao->valor,nome_funcao),id_aux);
				  				id_aux++;
				  			}

	 					}
	 					else {
	 						int variavel;
	 						if(strcmp(declaration_aux->filho->irmao->tipo,"ChrLit")==0){
 								if(*(declaration_aux->filho->irmao->valor+1)=='\\'){
 									if(*(declaration_aux->filho->irmao->valor+2)=='n'){
 										variavel = 10;
 									}
 									else if(*(declaration_aux->filho->irmao->valor+2)=='t'){
 										variavel = 9;
 									}
 									else if(*(declaration_aux->filho->irmao->valor+2)=='\\'){
 										variavel = 92;
 									}
 									else if(*(declaration_aux->filho->irmao->valor+2)=='\''){
 										variavel = 39;
 									}
 									else if(*(declaration_aux->filho->irmao->valor+2)=='\"'){
 										variavel = 34;
 									}
 									else{
 										declaration_aux->filho->irmao->valor = declaration_aux->filho->irmao->valor+1;
 										declaration_aux->filho->irmao->valor++[strlen(declaration_aux->filho->irmao->valor)-1] = 0;
 										variavel = octal_to_decimal(declaration_aux->filho->irmao->valor);
 									}
 								}
 								else
 									variavel = *(declaration_aux->filho->irmao->valor+sizeof(char));
	 						}
	 						else
	 							variavel = atoi(declaration_aux->filho->irmao->valor);
	 						printf("call %s @%s(%s %d)\n",function_type(declaration_aux->filho->valor),declaration_aux->filho->valor,variable_type(declaration_aux->filho->valor,nome_funcao),variavel);
	 					}
	 					id_aux++;
					}
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
					printf("\tret %s %c%d\n", tipo_funcao, scope_aux, id_aux);
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

int check_global(char * variavel, char * nome_funcao) {
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

char* variable_type(char * variavel, char * nome_funcao) {
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
		tabela_simb = tabela_simb->next;
	}
	return "";
}

char* function_type(char * nome_funcao) {
	no_tabela_global tabela_simb = tabela_simbolos;
	while(tabela_simb!=NULL){
		if(nome_funcao!=NULL && tabela_simb->nome !=NULL && strcmp(nome_funcao,tabela_simb->nome) == 0){
			return type2llvm(tabela_simb->tipo);
		}
		tabela_simb = tabela_simb->next;
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

int octal_to_decimal(char* octalChar) {
	int decimal = 0, octal = atoi(octalChar), i = 0;
	while(octal != 0){
		decimal += (octal%10) * power_to(8,i);
		i++;
		octal/=10;
	}
	return decimal;
}

int power_to(int a, int b) {
    int i;
    int number = 1;

    for (i = 0; i < b; ++i)
        number *= a;

    return(number);
}