Compiler_Cpp_lex-syntax
=======================
How to build in Unix systems:

flex filename.lex
gcc -c lex.yy.c

bison -dv filename.y
gcc -c filename.tab.c
gcc -o filename filename.tab.o lex.yy.o -lm

filename test.c
