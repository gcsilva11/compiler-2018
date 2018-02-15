%{
	#include <stdio.h>
	#include <string.h>
	int flag = 0;
	void imprime(char* msg);
	void imprime_com_conteudo(char* msg, char* conteudo);

%}

SPACE						" "
NEWLINE						"\n"
TAB							"\t"
CARRIAGERETURN		 		"\r"
FORMFEED					"\f"

CHAR 						"char"
ELSE 						"else"
WHILE 						"while"
IF 							"if"
INT 						"int"
SHORT 						"short"
DOUBLE						"double"
RETURN 						"return"
VOID 						"void"
BITWISEAND 					"&"
BITWISEOR 					"|"
BITWISEXOR 					"ˆ"
AND 						"&&"
ASSIGN 						"="
MUL 						"*"
COMMA 						","
DIV 						"/"
EQ 							"=="
GE 							">="
GT 							">"
LBRACE 						"{"
LE 							"<="
LPAR 						"("
LT 							"<"
MINUS 						"-"
MOD 						"%"
NE 							"!="
NOT 						"!"
OR 							"||"
PLUS 						"+"
RBRACE 						"}"
RPAR 						")"
SEMI 						";"

INTLIT						[0-9]+

DOT							"."
EXPONENTIAL					("E"|"e")("+"|"-")?{INTLIT}
REALLIT						("+"|"-")?(({INTLIT}{DOT}{INTLIT}?{EXPONENTIAL}?)|({DOT}{INTLIT}{EXPONENTIAL}?)|({INTLIT}{EXPONENTIAL}))

CHRLIT						"'"(\\t|[0-9a-zA-Z"\\\"]|\\[0-7]{1,3})"'"

ID							([a-zA-Z]|"_")+([a-zA-Z0-9]|"_")*
RESERVED					("++"|"--"|"["|"]"|"auto"|"break"|"case"|"const"|"continue"|"default"|"do"|"enum"|"extern"|"float"|"for"|"goto"|"inline"|"long"|"register"|"restrict"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"volatile"|"_Bool"|"_Complex"|"_Imaginary")

%%

{RESERVED}					{imprime_com_conteudo("RESERVED", yytext);}

("+"|"-")?{INTLIT}			{imprime_com_conteudo("INTLIT",yytext);}
{REALLIT}					{imprime_com_conteudo("REALLIT",yytext);}

{CHRLIT}					{imprime_com_conteudo("CHRLIT",yytext);}

{CHAR} 						{imprime("CHAR");}
{ELSE} 						{imprime("ELSE");}
{WHILE} 					{imprime("WHILE");}
{IF} 						{imprime("IF");}
{INT}						{imprime("INT");}
{SHORT} 					{imprime("SHORT");}
{DOUBLE}					{imprime("DOUBLE");}
{RETURN} 					{imprime("RETURN");}
{VOID} 						{imprime("VOID");}
{BITWISEAND} 				{imprime("BITWISEAND");}
{BITWISEOR} 				{imprime("BITWISEOR");}
{BITWISEXOR} 				{imprime("BITWISEXOR");}
{AND} 						{imprime("AND");}
{ASSIGN} 					{imprime("ASSIGN");}
{MUL} 						{imprime("MUL");}
{COMMA} 					{imprime("COMMA");}
{DIV} 						{imprime("DIV");}
{EQ} 						{imprime("EQ");}
{GE} 						{imprime("GE");}
{GT} 						{imprime("GT");}
{LBRACE} 					{imprime("LBRACE");}
{LE} 						{imprime("LE");}
{LPAR} 						{imprime("LPAR");}
{LT} 						{imprime("LT");}
{MINUS} 					{imprime("MINUS");}
{MOD} 						{imprime("MOD");}
{NE} 						{imprime("NE");}
{NOT} 						{imprime("NOT");}
{OR} 						{imprime("OR");}
{PLUS} 						{imprime("PLUS");}
{RBRACE} 					{imprime("RBRACE");}
{RPAR} 						{imprime("RPAR");}
{SEMI} 						{imprime("SEMI");}

{ID}						{imprime_com_conteudo("ID", yytext);}

{SPACE}						;
{NEWLINE}					;
{TAB}						;
{CARRIAGERETURN}			;
{FORMFEED}					;

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

int main(int argc, char *argv[]){
	if(argc > 1){
		if(strcmp(argv[1],"-l") == 0){
			flag=1;
		}
	}
	yylex();
	return 0;
}

int yywrap(){
	return 1;
}