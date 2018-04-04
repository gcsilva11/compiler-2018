#!/bin/sh

#Meta 1
#flex uccompiler.l
#clang-3.8 -o uccompiler lex.yy.c
#zip -r uccompiler.zip uccompiler.l

#Meta 2
flex uccompiler.l
yacc -d uccompiler.y
clang-3.8 -o uccompiler -Wall -Wno-unused-function *.c
zip -r uccompiler.zip uccompiler.l uccompiler.y arvore.c arvore.h
