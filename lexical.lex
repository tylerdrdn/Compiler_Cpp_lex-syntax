%option noyywrap
%option case-insensitive

%{
#include <stdio.h>
 #include <stdlib.h>
#include <string.h>
#include <math.h>
#include "syntax.tab.h"



int line=1;
int prnt = 1;
int i=0;
int j;

char strtemp[10000];
char* st;

void sconst(char* s);
long double stold(char *s, int base);
void strprint(void);
void func_for_char(char s);



%}

LETTER [a-zA-Z]
DIGIT [0-9]
HEXDIG [1-9]
HEXLETT [A-F]
OCTDIG [1-7]
CONSTLETT \\n|\\t|\\f|\\r|\\v|\\b

%x STR
%x CMMNT
%x CMMNT2
%%

"TYPEDEF" 	{printf("KEY_TYPEDEF\n"); return(TYPEDEF);}
"CHAR" 		{printf("KEY_CHAR\n"); return(CHAR);}
"INT" 		{printf("KEY_INT\n"); return(INT);}
"FLOAT" 	{printf("KEY_FLOAT\n"); return(FLOAT);}
"STRING" 	{printf("KEY_STRING\n"); return(STRING);}
"CLASS" 	{printf("KEY_CLASS\n"); return(CLASS);}
"PRIVATE" 	{printf("KEY_PRIVATE\n"); return(PRIVATE);}
"PROTECTED" 	{printf("KEY_PROTECTED\n"); return(PROTECTED);}
"PUBLIC" 	{printf("KEY_PUBLIC\n"); return(PUBLIC);}
"VOID" 		{printf("KEY_VOID\n"); return(VOID);}
"STATIC" 	{printf("KEY_STATIC\n"); return(STATIC);}
"UNION" 	{printf("KEY_UNION\n"); return(UNION);}
"ENUM" 		{printf("KEY_ENUM\n"); return(ENUM);}
"LIST" 		{printf("KEY_LIST\n"); return(LIST);}
"CONTINUE" 	{printf("KEY_CONTINUE\n"); return(CONTINUE);}
"BREAK" 	{printf("KEY_BREAK\n"); return(BREAK);}
"IF" 		{printf("KEY_IF\n"); return(IF);}
"ELSE" 		{printf("KEY_ELSE\n"); return(ELSE);}
"WHILE" 	{printf("KEY_WHILE\n"); return(WHILE);}
"FOR" 		{printf("KEY_FOR\n"); return(FOR);}
"SWITCH"	{printf("KEY_SWITCH\n"); return(SWITCH);}
"CASE"		{printf("KEY_CASE\n"); return(CASE);}
"DEFAULT"	{printf("KEY_DEFAULT\n"); return(DEFAULT);}
"RETURN" 	{printf("KEY_RETURN\n"); return(RETURN);}
"LENGTH" 	{printf("KEY_LENGTH\n"); return(LENGTH);}
"NEW"		{printf("KEY_NEW\n"); return(NEW);}
"CIN" 		{printf("KEY_CIN\n"); return(CIN);}
"COUT" 		{printf("KEY_COUT\n"); return(COUT);}
"MAIN" 		{printf("KEY_MAIN\n"); return(MAIN);}
"THIS" 		{printf("KEY_THIS\n"); return(THIS);}
"SIZEOF"	{printf("SIZEOPer\n"); return(SIZEOP);}


C(AD*|D+)R {printf("LISTFUNC\n");  return(LISTFUNC);}

("_")*{LETTER}({DIGIT}|{LETTER})*("_"({DIGIT}|{LETTER})*)*   								{printf("ID"); printf("\t%s\n",yytext);  return(ID);}

0															{printf("ICONST"); yylval.unint=0; printf("%d\n",yylval.unint); return(ICONST);}
{HEXDIG}{DIGIT}*													{printf("ICONST"); yylval.unint=strtoll(yytext, NULL, 10); printf("\t%d\n",yylval.unint); return(ICONST);}
0X({HEXDIG}+|{HEXLETT}+)({DIGIT}|{HEXLETT})*										{printf("ICONST"); yylval.unint=strtoll(yytext, NULL, 16); printf("\t%d\n",yylval.unint); return(ICONST);}
0O{OCTDIG}(0|{OCTDIG})* 												{printf("ICONST"); yytext[1]='0'; yylval.unint=strtoll(yytext, NULL, 8); printf("\t%d\n",yylval.unint); return(ICONST);}
0B1(0|1)*														{printf("ICONST"); yytext[1]='0'; yylval.unint=strtoll(yytext, NULL, 2); printf("\t%d\n",yylval.unint); return(ICONST);} 

(({HEXDIG}{DIGIT}*)|0)?"."(0|{DIGIT}*{HEXDIG}{DIGIT}*)									{printf("FCONST");  yylval.realnum=strtold(yytext, NULL); printf("\t%f\n",yylval.realnum); return(FCONST);}
(({HEXDIG}{DIGIT}*)|0)?"."(0|{DIGIT}*{HEXDIG}{DIGIT}*)E("+"|"-")?(({HEXDIG}{DIGIT}*)|0)					{printf("FCONST");  yylval.realnum=strtold(yytext, NULL); printf("\t%f\n",yylval.realnum); return(FCONST);}
(0|{HEXDIG}{DIGIT}*)E("+"|"-")?(({HEXDIG}{DIGIT}*)|0) 									{printf("FCONST");  yylval.realnum=strtold(yytext, NULL); printf("\t%f\n",yylval.realnum); return(FCONST);}
"0X"(0|({HEXDIG}+|{HEXLETT}+)({DIGIT}+|{HEXLETT}+)*)?"."(0|(({DIGIT}|{HEXLETT})*({HEXDIG}|{HEXLETT})0*))		{printf("FCONST");  yylval.realnum=strtold(yytext, NULL); printf("\t%f\n",yylval.realnum); return(FCONST);}
"0O"(0|({OCTDIG}(0|{OCTDIG})*))?"."(0|(0*{OCTDIG}+0*)+) 								{printf("FCONST");  yylval.realnum=stold(yytext,8); printf("\t%f\n",yylval.realnum); return(FCONST);}
"0B"(0|(10*1*)+)?"."(0|(0*1+0*)+)											{printf("FCONST");  yylval.realnum=stold(yytext,2); printf("\t%f\n",yylval.realnum); return(FCONST);} 


\'.\'			{printf("CCONST\n"); yylval.character = yytext[1]; return(CCONST);}

\'{CONSTLETT}\'		{printf("CCONST\n"); func_for_char(yytext[3]); return(CCONST);}

"||"		{printf("OROPer\n"); return(OROP);}
"&&"		{printf("ANDOPer\n"); return(ANDOP);}
"==" 		{printf("EQUOPer\n"); return(EQUOP);}
"!="		{printf("EQUOPer\n"); return(EQUOP);}
">" 		{printf("RELOPer\n"); return(RELOP);}
">="		{printf("RELOPer\n"); return(RELOP);}
"<" 		{printf("RELOPer\n"); return(RELOP);}
"<="		{printf("RELOPer\n"); return(RELOP);}
"+"	    	{printf("ADDOPer\n"); return(ADDOP);}
"-"	    	{printf("ADDOPer\n"); return(ADDOP);}
"*"	    	{printf("MULOPer\n"); return(MULOP);}
"/"	    	{printf("MULOPer\n"); return(MULOP);}
"%"	    	{printf("MULOPer\n"); return(MULOP);}
"!"		{printf("NOTOPer\n"); return(NOTOP);}
"++"		{printf("INCDECer\n"); return(INCDEC);}
"--"		{printf("INCDECer\n"); return(INCDEC);}


"(" 		{printf("LPAREN\n"); return(LPAREN);}
")"		{printf("RPAREN\n"); return(RPAREN);}
";"		{printf("SEMI\n"); return(SEMI);}
"."    		{printf("DOT\n"); return(DOT);}
","		{printf("COMMA\n"); return(COMMA);}
"="		{printf("ASSIGN\n"); return(ASSIGN);}
":"		{printf("COLON\n"); return(COLON);}
"["     	{printf("LBRACK\n"); return(LBRACK);}
"]"     	{printf("RBRACK\n"); return(RBRACK);}
"&"		{printf("REFER\n"); return(REFER);}
"{"		{printf("LBRACE\n"); return(LBRACE);}
"}"		{printf("RBRACE\n"); return(RBRACE);}
"::"		{printf("METH\n"); return(METH);}
">>"		{printf("INP\n"); return(INP);}
"<<"		{printf("OUT\n"); return(OUT);}


\n 			{line++; prnt=1;}
[ \t] 			{}

<<EOF>>			{ printf("ENDOFFILE\n"); return(0);}

"/*" 			{ printf("start_comment-->"); BEGIN(CMMNT); }
<CMMNT>"*/"		{ printf(" <--end_comment\n"); BEGIN(INITIAL); }
<CMMNT>\n		{ line++; printf("\n");}
<CMMNT>([^*]|\n)+|. 	{ printf("%s",yytext);}

"//"			{ printf("start_comment-->"); BEGIN(CMMNT2); }
<CMMNT2>\n		{ line++; printf(" <--end_comment\n"); BEGIN(INITIAL); }

\"			{ i=0; BEGIN(STR); }

<STR>
{

\" 		{printf("STRING_FOUND:"); strprint(); BEGIN(INITIAL);  return(SCONST);}
\\n		{sconst(yytext);}
\\v		{sconst(yytext);}
\\r		{sconst(yytext);}
\\f		{sconst(yytext);}
\\t		{sconst(yytext);}
\\b		{sconst(yytext);}
\\\		{sconst(yytext);}
"\\"\n		{line++; sconst(yytext);}
.		{sconst(yytext);}
\n 		{line++;}

}
. 	{if(prnt==1){printf("Lexical Error. line: %d\n",line);} prnt=0; }


%%

void func_for_char(char s){

 if( s == 'n' ) { yylval.character = '\n'; }
 else if ( s == 't' ) { yylval.character = '\t';}
 else if ( s == 'f' ) { yylval.character = '\f';}
 else if ( s == 'v' ) { yylval.character = '\v';}
 else if ( s == 'r' ) { yylval.character = '\r';}
 else if ( s == 'b' ) { yylval.character = '\b';}
 


}

void sconst(char* s){

    if( strcmp(s,"\\n") == 0){
  
	strtemp[i] = '\n'; 
    
    }
    
    else if( strcmp(s,"\\v") == 0){
      
	strtemp[i] = '\v'; 
    
    }

    else if( strcmp(s,"\\r") == 0){
    
	strtemp[i] = '\r'; 
    }

    else if( strcmp(s,"\\f") == 0){
    
	strtemp[i] = '\f'; 
    
    }

    else if( strcmp(s,"\\t") == 0){
    
	strtemp[i] = '\t';
    
    }

    else if( strcmp(s,"\\b") == 0){
    
	strtemp[i] = '\b'; 
    
    }

    else if( strcmp(s,"\\") == 0){
    
	strtemp[i] = '\\';
    
    }

    else if( strcmp(s,"\\\n") == 0){
    
	i--;
    
    }

    else{
    
	strtemp[i] = s[0];
    
    }
    
    i++;

}

void strprint(void){

  for(j=0;j<=i;j++){
  
      printf("%c",strtemp[j]);
  
  }

  printf("\n");
  
}

long double stold(char *s, int base){

  int k;
  int int_temp = 0;
  int powe = 0;
  int dot = 0;
  char char_temp;
  double double_temp=0;
  double told_num_base = 0;
  
  for(k=2; k<yyleng; k++){
  
    if(s[k] != '.'){
    
	dot++;
    
    }
  
    else { break; }
  
  }

  for(k=1+dot; k>1; k--){
  
    char_temp = s[k];
    int_temp = atoi(&char_temp);
    double_temp = powl((double)base,(double)powe);
    told_num_base = told_num_base + (int_temp * double_temp);
    powe++;
  
  }
  
  powe = -1;
  
  for(k=3-dot; k<yyleng; k++){
  
    char_temp = s[k];
    int_temp = atoi(&char_temp);
    double_temp = powl((double)base,(double)powe);
    told_num_base = told_num_base + (int_temp * double_temp);
    powe--;
  
  }
  
  return (told_num_base);
  
}
