#João Pedro Costa Ferreiro 2014197760
#Guilherme Cardoso Gomes da Silva 2014226354

#Meta 1
#flex uccompiler.l
#clang-3.8 -o uccompiler lex.yy.c
#zip -r uccompiler.zip uccompiler.l

#Meta 2
#flex uccompiler.l
#yacc -d uccompiler.y
#clang-3.8 -o uccompiler -Wall -Wno-unused-function *.c
#zip -r uccompiler.zip uccompiler.l uccompiler.y arvore.c headers.h 


#Meta 3
flex uccompiler.l
yacc -d uccompiler.y
clang-3.8 -g -o uccompiler -Wall -Wno-unused-function *.c
zip -r uccompiler.zip uccompiler.l uccompiler.y arvore.c headers.h simbolos.c semantica.c
