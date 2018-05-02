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

	if(no != NULL){
		
		if (strcmp(no->tipo,"FuncDefinition") == 0){
			func_tracker = no->filho->irmao->valor;
		}

		if (strcmp(no->tipo,"Store") == 0){
			if(no->filho!=NULL){
				char* anot_filho = anotar_filho(no->filho);
				if(anot_filho!=NULL){
					no->anotacao=(char*)malloc(strlen(anot_filho)*sizeof(char)+1);
					strcpy(no->anotacao,anot_filho);
				}
			}

		}else if(strcmp(no->tipo,"Comma") == 0){
			char* anot_filho= anotar_filho(no->filho);
			char*anot_irm = anotar_filho(no->filho->irmao);
			if(anot_irm!=NULL){
					anot_filho = anot_irm; //so para nao dar warning
					no->anotacao=(char*)malloc(strlen(anot_irm)*sizeof(char)+1);
					strcpy(no->anotacao,anot_irm);
			}

		}else if(strcmp(no->tipo,"Le") == 0 || strcmp(no->tipo,"Ge") == 0 || strcmp(no->tipo,"Lt") == 0 || strcmp(no->tipo,"Gt") == 0){
			
			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");

		}else if(strcmp(no->tipo,"Eq") == 0 || strcmp(no->tipo,"Ne") == 0){

			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");

		}else if(strcmp(no->tipo,"Add") == 0){

			char* anot_filho= anotar_filho(no->filho);
			char* anot_irm  = anotar_filho(no->filho->irmao);
			if(anot_filho && anot_irm){
				if((strcmp(anot_filho,"double")==0)||(strcmp(anot_irm,"double")==0)){
					no->anotacao = (char*)malloc(strlen("double")*sizeof(char)+1);
					strcpy(no->anotacao,"double");
				}
				if((strcmp(anot_filho,"int")==0)||(strcmp(anot_irm,"int")==0)){
					no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
					strcpy(no->anotacao,"int");
				}
				if((strcmp(anot_filho,"short")==0)||(strcmp(anot_irm,"short")==0)){
					no->anotacao = (char*)malloc(strlen("short")*sizeof(char)+1);
					strcpy(no->anotacao,"short");
				}
				if((strcmp(anot_filho,"char")==0)||(strcmp(anot_irm,"char")==0)){
					no->anotacao = (char*)malloc(strlen("char")*sizeof(char)+1);
					strcpy(no->anotacao,"char");
				}
			}

		}else if(strcmp(no->tipo,"Sub") == 0){

			char* anot_filho= anotar_filho(no->filho);
			char* anot_irm  = anotar_filho(no->filho->irmao);
			if(anot_filho && anot_irm){
				if((strcmp(anot_filho,"double")==0)||(strcmp(anot_irm,"double")==0)){
					no->anotacao = (char*)malloc(strlen("double")*sizeof(char)+1);
					strcpy(no->anotacao,"double");
				}
				if((strcmp(anot_filho,"int")==0)||(strcmp(anot_irm,"int")==0)){
					no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
					strcpy(no->anotacao,"int");
				}
				if((strcmp(anot_filho,"short")==0)||(strcmp(anot_irm,"short")==0)){
					no->anotacao = (char*)malloc(strlen("short")*sizeof(char)+1);
					strcpy(no->anotacao,"short");
				}
				if((strcmp(anot_filho,"char")==0)||(strcmp(anot_irm,"char")==0)){
					no->anotacao = (char*)malloc(strlen("char")*sizeof(char)+1);
					strcpy(no->anotacao,"char");
				}
			}

		}else if((strcmp(no->tipo,"Mul") == 0)||(strcmp(no->tipo,"Div") == 0)){

			char* anot_filho= anotar_filho(no->filho);
			char* anot_irm  = anotar_filho(no->filho->irmao);
			if(anot_filho && anot_irm){
				if((strcmp(anot_filho,"double")==0)||(strcmp(anot_irm,"double")==0)){
					no->anotacao = (char*)malloc(strlen("double")*sizeof(char)+1);
					strcpy(no->anotacao,"double");
				}
				if((strcmp(anot_filho,"int")==0)||(strcmp(anot_irm,"int")==0)){
					no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
					strcpy(no->anotacao,"int");
				}
				if((strcmp(anot_filho,"short")==0)||(strcmp(anot_irm,"short")==0)){
					no->anotacao = (char*)malloc(strlen("short")*sizeof(char)+1);
					strcpy(no->anotacao,"short");
				}
				if((strcmp(anot_filho,"char")==0)||(strcmp(anot_irm,"char")==0)){
					no->anotacao = (char*)malloc(strlen("char")*sizeof(char)+1);
					strcpy(no->anotacao,"char");
				}
			}

		}else if (strcmp(no->tipo,"Mod") == 0){

			char* anot_filho= anotar_filho(no->filho);
			char* anot_irm  = anotar_filho(no->filho->irmao);
			if(anot_filho && anot_irm){
				if((strcmp(anot_filho,"double")==0)||(strcmp(anot_irm,"double")==0)){
					no->anotacao = (char*)malloc(strlen("double")*sizeof(char)+1);
					strcpy(no->anotacao,"double");
				}
				if((strcmp(anot_filho,"int")==0)||(strcmp(anot_irm,"int")==0)){
					no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
					strcpy(no->anotacao,"int");
				}
				if((strcmp(anot_filho,"short")==0)||(strcmp(anot_irm,"short")==0)){
					no->anotacao = (char*)malloc(strlen("short")*sizeof(char)+1);
					strcpy(no->anotacao,"short");
				}
				if((strcmp(anot_filho,"char")==0)||(strcmp(anot_irm,"char")==0)){
					no->anotacao = (char*)malloc(strlen("char")*sizeof(char)+1);
					strcpy(no->anotacao,"char");
				}
			}

		}else if(strcmp(no->tipo,"Or") == 0){

			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");

		}else if(strcmp(no->tipo,"And") == 0){

			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");

		}else if(strcmp(no->tipo,"BitWiseAnd") == 0 || strcmp(no->tipo,"BitWiseOr") == 0 || strcmp(no->tipo,"BitWiseXor") == 0){

			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");

		}else if((strcmp(no->tipo,"Plus") == 0)||(strcmp(no->tipo,"Minus") == 0)){

			if(no->filho!=NULL){
				char* anot_filho = anotar_filho(no->filho);
				if(anot_filho!=NULL){
					no->anotacao=(char*)malloc(strlen(anot_filho)*sizeof(char)+1);
					strcpy(no->anotacao,anot_filho);
				}
			}

		}else if(strcmp(no->tipo,"Not") == 0){

			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");

		}else if(strcmp(no->tipo,"Call") == 0){

			if(no->filho!=NULL){
				char* anot_filho = anotar_filho(no->filho);
				if(anot_filho!=NULL){
					no->anotacao=(char*)malloc(strlen(anot_filho)*sizeof(char)+1);
					strcpy(no->anotacao,anot_filho);
				}
			}
		
		}else if(strcmp(no->tipo,"IntLit") == 0){
		
			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");
		
		}else if(strcmp(no->tipo,"ChrLit") == 0){
		
			no->anotacao = (char*)malloc(strlen("int")*sizeof(char)+1);
			strcpy(no->anotacao,"int");
		
		}else if(strcmp(no->tipo,"RealLit") == 0){
		
			no->anotacao = (char*)malloc(strlen("double")*sizeof(char)+1);
			strcpy(no->anotacao,"double");
		
		}
	}

	no = no->filho;
	while(no != NULL){
		anotar_arvore(no);
		no = no->irmao;
	}
	return;
}


char* anotar_filho(AST_struct no){

	//Encontrar tabela da funcao
	no_tabela_global find_tab = tabela_simbolos;
	no_tabela_func find_var;
	char* nome_var = no->valor;

	char nome_tab[200]  = "===== Function ";
	strcat(nome_tab, func_tracker);
	strcat(nome_tab," ");

	//Encontrar tabela
	while(find_tab!=NULL){
		if(find_tab->next_table!=NULL){
			find_var = find_tab->next_table;
			if(strcmp(func_tracker,"")!=0){
				if(strstr(find_var->tipo,nome_tab)!=NULL){
					//Encontrou a tabela de funcao, procurar esta ate encontrar a var pretendida
					while(find_var){
						//Percorre a tabela ate encontrar o nome da var
						if(find_var->nome){
							if(strcmp(find_var->nome,nome_var)==0){
								//Anota o no
								no->anotacao = find_var->tipo;
								return no->anotacao;
							}
						}
						find_var = find_var->next;
					}
				}
			}
		}
		find_tab = find_tab->next;
	}


	//Caso nao encontre, verificar tabela global
	find_tab = tabela_simbolos;
	while(find_tab!=NULL){
		if(find_tab->nome){
			if(strcmp(find_tab->nome,nome_var)==0){
				//Anota o no (se a func tiver parametros anota estes tambem)
				char anotacao[1000] = "";
				strcat(anotacao,find_tab->tipo);
				if(find_tab->array_params!=NULL){
					strcat(anotacao,"(");
					strcat(anotacao,find_tab->array_params);
					strcat(anotacao,")");
				}
				no->anotacao = (char*)malloc(strlen(anotacao)*sizeof(char)+1);
				strcpy(no->anotacao,anotacao);
				return no->anotacao;
			}
		}
		
		find_tab = find_tab->next;
	}

	//Senao, null
	return NULL;
}