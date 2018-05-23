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
		}
		else if(strcmp(raiz->tipo,"FuncDeclaration")==0){
			// 
			raiz = raiz->irmao;
		}
		else if(strcmp(raiz->tipo,"FuncDefinition")==0){
			gera_func_definition(raiz);
			raiz = raiz->irmao;
		}
		else if(strcmp(raiz->tipo,"Declaration")==0){
			// 
			raiz = raiz->irmao;
		}
	}
}

char* type2llvm(char* type) {
	if (strcmp(type,"int") == 0){
		return "i32";
	}
	else if (strcmp(type,"short") == 0){
		return "i16";
	}
	else if (strcmp(type,"char") == 0){
		return "i8";
	}
	else if (strcmp(type,"double") == 0 || strcmp(type,"void") == 0){
		return type;
	}
	else return NULL;
}

void gera_program(AST_struct raiz){
	printf("declare i32 @putchar()\n");
	printf("declare i32 @putchar(i32)\n");
}

void gera_func_definition(AST_struct){
	
}