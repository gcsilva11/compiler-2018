%{
    #include <stdio.h>
    #include <stdio.h>
    #include <string.h>

    int yylex(void);
    void yyerror (const char *s);
%}

%union{
    int inteiro;
    char* string;
    //Statement: error SEMI;
}

%token CHAR ELSE WHILE IF SHORT INT DOUBLE RETURN VOID BITWISEOR BITWISEAND BITWISEXOR AND ASSIGN MUL COMMA DIV EQ GE GT LBRACE LE LPAR LT MINUS MOD NE NOT OR PLUS RBRACE RPAR SEMI
%token <string> REALLIT CHRLIT INTLIT ID

%left COMMA
%right ASSIGN
%left OR
%left AND
%left BITWISEOR
%left BITWISEXOR
%left BITWISEAND
%left EQ NE
%left GE GT LT LE
%left PLUS MINUS
%left MUL DIV MOD
%right NOT
%left RPAR LPAR RBRACE LBRACE
%nonassoc ELSE


%%

FunctionsAndDeclarations: 
    FunctionDefinition 
    | FunctionDeclaration 
    | Declaration
    | FunctionDeclaration FunctionDeclaration
    ;

FunctionDefinition: 
    TypeSpec FunctionDeclarator FunctionBody
    ;

FunctionBody: 
    LBRACE RBRACE
    | LBRACE DeclarationAndStatements RBRACE
    ;

DeclarationAndStatements: 
    Statement DeclarationAndStatements
    | Declaration DeclarationAndStatements 
    | Statement 
    | Declaration
    ;

FunctionDeclaration: 
    TypeSpec FunctionDeclarator SEMI
    ;

FunctionDeclarator: 
    ID LPAR ParameterList RPAR
    ;

ParameterList: 
    ParameterDeclaration 
    |ParameterDeclaration COMMA ParameterDeclaration
    ;

ParameterDeclaration: 
    TypeSpec
    |TypeSpec ID
    ;

Declaration: 
    TypeSpec Declarator SEMI
    |TypeSpec Declarator COMMA Declarator SEMI
    ;

TypeSpec:   CHAR
    |       INT
    |       VOID
    |       SHORT
    |       DOUBLE
    ;

Declarator: ID
    | ID ASSIGN Expr
    ;

Statement: SEMI
    | Expr SEMI
    ;

Statement: LBRACE RBRACE
    | LBRACE Statement RBRACE
    ;

Statement: IF LPAR Expr RPAR Statement
    | IF LPAR Expr RPAR Statement ELSE Statement
    ;

Statement: WHILE LPAR Expr RPAR Statement

Statement: RETURN SEMI
    | RETURN Expr SEMI
    ;

Expr: Expr ASSIGN Expr
    | Expr COMMA Expr
    ;

Expr: Expr EQ Expr
    | Expr NE Expr
    | Expr LE Expr
    | Expr GE Expr
    | Expr LT Expr
    | Expr GT Expr  

Expr: Expr PLUS Expr
    | Expr MINUS Expr
    | Expr MUL Expr
    | Expr DIV Expr
    | Expr MOD Expr
    ;

Expr: Expr OR Expr
    | Expr AND Expr
    | Expr BITWISEAND Expr
    | Expr BITWISEOR Expr
    | Expr BITWISEXOR Expr
    ;

Expr: PLUS Expr
    | MINUS Expr
    | NOT Expr
    ;

Expr: ID LPAR RPAR
    | ID LPAR Expr RPAR
    ;

Expr: 
    ID
    | INTLIT
    | CHRLIT
    | REALLIT
    | LPAR Expr RPAR
    | LPAR Expr COMMA Expr RPAR
    ; 


Declaration: error SEMI;

Statement: LBRACE error RBRACE;

Expr: ID LPAR error RPAR;

Expr: LPAR error RPAR;

%%