INT														[0-9]+
ID														([a-z]|[A-Z]|"_")+([0-9]|[a-z]|[A-Z]|"_")*

%%

{ID}													{printf("ID(");
														for(int i = 0; i < yyleng; i++)
															printf("%c",*(yytext+i));
														printf(")");}
("+"|"-")?{INT}											{printf("INTLIT(%d)",atoi(yytext));}


%%

int main(){
	yylex();
	return 0;
}

int yywrap(){
	return 1;
}