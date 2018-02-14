NUMB						[0-9]
CHAR						[a-zA-Z]

AUTO 						auto
BREAK						break
CASE						case
CHAR						char
CONST						const
CONTINUE					continue
DEFAULT						default
DO 							do
DOUBLE						double
ELSE						else
ENUM						enum
EXTERN						extern
FLOAT						float
FOR 						for
GOTO						goto
IF							if
INLINE						inline
INT 						int
LONG						long
REGISTER					register
RESTRICT					restrict
RETURN 						return
SHORT						short
SIGNED						signed
SIZEOF						sizeof
STATIC						static
STRUCT						struct
SWITCH						switch
TYPEDEF						typedef
UNION						union
UNSIGNED					unsigned
VOID						void
VOLATILE					volatile
WHILE						while
_BOOL						_Bool
_COMPLEX					_Complex
_IMAGINARY					_Imaginary

%%


%%

int main(){
	yylex();
	return 0;
}

int yywrap(){
	return 1;
}