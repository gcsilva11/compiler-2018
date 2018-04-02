%{
	/*
	João Pedro Costa Ferreiro 2014197760
	Guilherme Cardoso Gomes da Silva 2014226354
	*/
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"

	#define LINHA linha++; coluna=1;
	#define COLUNA coluna+=yyleng;
	int flag = 0, coluna = 1, linha = 1, linha_aux = 0, coluna_aux = 0;
	void imprime(char* msg);
	void imprime_com_conteudo(char* msg, char* conteudo);
	int yyparse();
%}

%X MULTIPCOM_ST

SINGLECOMMENT					"//"
STARTCOMMENT 					"/*"
FINISHCOMMENT 					"*/"

RESERVED						"++"|"--"|"["|"]"|"auto"|"break"|"case"|"const"|"continue"|"default"|"do"|"enum"|"extern"|"float"|"for"|"goto"|"inline"|"long"|"register"|"restrict"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"volatile"|"_Bool"|"_Complex"|"_Imaginary"

CHAR 							"char"
ELSE 							"else"
WHILE 							"while"
IF 								"if"
INT 							"int"
SHORT 							"short"
DOUBLE							"double"
RETURN 							"return"
VOID 							"void"
BITWISEAND 						"&"
BITWISEOR 						"|"
BITWISEXOR 						"^"
AND 							"&&"
ASSIGN 							"="
MUL 							"*"
COMMA 							","
DIV 							"/"
EQ 								"=="
GE 								">="
GT 								">"
LBRACE 							"{"
LE 								"<="
LPAR 							"("
LT 								"<"
MINUS 							"-"
MOD 							"%"
NE 								"!="
NOT 							"!"
OR 								"||"
PLUS 							"+"
RBRACE 							"}"
RPAR 							")"
SEMI 							";"

ID								([a-zA-Z]|"_")([a-zA-Z0-9]|"_")*

DOT								"."
EXPONENTIAL						("E"|"e")("+"|"-")?{INTLIT}
ASP								"'"

INTLIT							[0-9]+
REALLIT							(({INTLIT}{DOT}{INTLIT}?{EXPONENTIAL}?)|({DOT}{INTLIT}{EXPONENTIAL}?)|({INTLIT}{EXPONENTIAL}))
CHRLIT							[^\n\'\\]|\\n|\\t|\\\\|\\'|\\\"|\\[0-7]{1,3}

SPACE							" "
NEWLINE							"\n"
TAB								"\t"
CARRIAGERETURN		 			"\r"
LINETERMINATOR					"\n"|"\r\n"

%%
{SINGLECOMMENT}.*				;

{STARTCOMMENT}					{BEGIN MULTIPCOM_ST; linha_aux = linha; coluna_aux = coluna; COLUNA;}
<MULTIPCOM_ST>.					{COLUNA;}
<MULTIPCOM_ST>{LINETERMINATOR}	{LINHA;}
<MULTIPCOM_ST><<EOF>>			{BEGIN 0;printf("Line %d, col %d: unterminated comment\n",linha_aux,coluna_aux);COLUNA;}
<MULTIPCOM_ST>{FINISHCOMMENT}	{BEGIN 0;COLUNA;}

{RESERVED}						{imprime_com_conteudo("RESERVED", yytext);COLUNA;}

{CHAR} 							{imprime("CHAR");if(flag==0) return CHAR;COLUNA;}
{ELSE} 							{imprime("ELSE");if(flag==0) return ELSE;COLUNA;}
{WHILE} 						{imprime("WHILE");if(flag==0) return WHILE;COLUNA;}
{IF} 							{imprime("IF");if(flag==0) return IF;COLUNA;}
{INT}							{imprime("INT");if(flag==0) return INT;COLUNA;}
{SHORT} 						{imprime("SHORT");if(flag==0) return SHORT;COLUNA;}
{DOUBLE}						{imprime("DOUBLE");if(flag==0) return DOUBLE;COLUNA;}
{RETURN} 						{imprime("RETURN");if(flag==0) return RETURN;COLUNA;}
{VOID} 							{imprime("VOID");if(flag==0) return VOID;COLUNA;}
{BITWISEAND} 					{imprime("BITWISEAND");if(flag==0) return BITWISEAND;COLUNA;}
{BITWISEOR} 					{imprime("BITWISEOR");if(flag==0) return BITWISEOR;COLUNA;}
{BITWISEXOR} 					{imprime("BITWISEXOR");if(flag==0) return BITWISEXOR;COLUNA;}
{AND} 							{imprime("AND");if(flag==0) return AND;COLUNA;}
{ASSIGN} 						{imprime("ASSIGN");if(flag==0) return ASSIGN;COLUNA;}
{MUL} 							{imprime("MUL");if(flag==0) return MUL;COLUNA;}
{COMMA} 						{imprime("COMMA");if(flag==0) return COMMA;COLUNA;}
{DIV} 							{imprime("DIV");if(flag==0) return DIV;COLUNA;}
{EQ} 							{imprime("EQ");if(flag==0) return EQ;COLUNA;}
{GE} 							{imprime("GE");if(flag==0) return GE;COLUNA;}
{GT} 							{imprime("GT");if(flag==0) return GT;COLUNA;}
{LBRACE} 						{imprime("LBRACE");if(flag==0) return LBRACE;COLUNA;}
{LE} 							{imprime("LE");if(flag==0) return LE;COLUNA;}
{LPAR} 							{imprime("LPAR");if(flag==0) return LPAR;COLUNA;}
{LT} 							{imprime("LT");if(flag==0) return LT;COLUNA;}
{MINUS} 						{imprime("MINUS");if(flag==0) return MINUS;COLUNA;}
{MOD} 							{imprime("MOD");if(flag==0) return MOD;COLUNA;}
{NE} 							{imprime("NE");if(flag==0) return NE;COLUNA;}
{NOT} 							{imprime("NOT");if(flag==0) return NOT;COLUNA;}
{OR} 							{imprime("OR");if(flag==0) return OR;COLUNA;}
{PLUS} 							{imprime("PLUS");if(flag==0) return PLUS;COLUNA;}
{RBRACE} 						{imprime("RBRACE");if(flag==0) return RBRACE;COLUNA;}
{RPAR} 							{imprime("RPAR");if(flag==0) return RPAR;COLUNA;}
{SEMI} 							{imprime("SEMI");if(flag==0) return SEMI;COLUNA;}

{ID}							{imprime_com_conteudo("ID", yytext);if(flag==0){yylval.string=(char*)strdup(yytext); return ID;}COLUNA;}

{INTLIT}						{imprime_com_conteudo("INTLIT",yytext);if(flag==0){yylval.string=(char*)strdup(yytext); return INTLIT;}COLUNA;}
{REALLIT}						{imprime_com_conteudo("REALLIT",yytext);if(flag==0){yylval.string=(char*)strdup(yytext); return REALLIT;}COLUNA;}
{ASP}{CHRLIT}{ASP}				{imprime_com_conteudo("CHRLIT",yytext);if(flag==0){yylval.string=(char*)strdup(yytext); return CHRLIT;}COLUNA;}
{ASP}({CHRLIT}|\\.)*{ASP} 		{printf("Line %d, col %d: invalid char constant (%s)\n",linha,coluna,yytext); COLUNA;}
{ASP}({CHRLIT}|\\.)*\\?			{printf("Line %d, col %d: unterminated char constant\n",linha,coluna);}

{SPACE}							{COLUNA;}
{NEWLINE}						{LINHA;}
{TAB}							{COLUNA;}
{CARRIAGERETURN}				{COLUNA;}
{LINETERMINATOR}				{LINHA;}

.								{printf("Line %d, col %d: illegal character (%s)\n",linha,coluna,yytext);COLUNA;}

%%

void imprime(char* msg){
	if(flag == 1){

		printf("%s\n",msg);
	}
}

void imprime_com_conteudo(char* msg, char* conteudo){
	if(flag == 1){
		printf("%s(%s)\n",msg,conteudo);
	}
}


int yywrap(){
	return 1;
}

void yyerror (const char *s) { 
     printf ("Line %d, col %d: %s: %s\n",linha,(int)(coluna-strlen(yytext)), s, yytext);
}

int main(int argc, char *argv[]){
    if(argc > 1){
        if(strcmp(argv[1],"-l") == 0){
            flag=1;
            yylex();
        }
    }
    yyparse();
    return 0;
}