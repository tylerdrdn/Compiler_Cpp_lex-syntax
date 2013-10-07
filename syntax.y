%{

#include <stdio.h>
#include <stdlib.h>


#define YYDEBUG 1
%}

%union {
  unsigned int unint;
  double realnum;
  char string[100];
  char character;
};

%token TYPEDEF
%token CHAR
%token INT
%token FLOAT
%token STRING
%token CLASS
%token PRIVATE
%token PROTECTED
%token PUBLIC
%token VOID
%token STATIC
%token UNION
%token ENUM
%token LIST
%token CONTINUE
%token BREAK
%token IF
%token ELSE
%token WHILE
%token FOR
%token SWITCH
%token CASE
%token DEFAULT
%token RETURN
%token LENGTH
%token NEW
%token CIN
%token COUT
%token MAIN
%token THIS

%token ID
%token ICONST
%token FCONST
%token CCONST
%token SCONST

%token OROP
%token ANDOP
%token EQUOP
%token RELOP
%token ADDOP
%token MULOP
%token NOTOP
%token INCDEC
%token SIZEOP

%token LISTFUNC

%token LPAREN
%token RPAREN
%token SEMI
%token DOT
%token COMMA
%token ASSIGN
%token COLON
%token LBRACK
%token RBRACK
%token REFER
%token LBRACE
%token RBRACE
%token METH
%token INP
%token OUT

%left COMMA
%left OROP
%left ANDOP
%nonassoc NOTOP
%nonassoc RELOP EQUOP
%left ADDOP
%left MULOP
%nonassoc SIZEOP

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE


%%

program			:	global_declarations main_function
				;

global_declarations	:	global_declarations global_declaration
				|
				;

global_declaration	:	typedef_declaration
				|	enum_declaration
				|	class_declaration
				|	union_declaration
				|	global_var_declaration
				|	func_declaration
				;

typedef_declaration	:	TYPEDEF typename listspec ID dims SEMI
				|	TYPEDEF typename listspec ID error SEMI {yyerrok; yyerror("error in dims");}
				;

typename		:	standard_type
				|	ID
				;

standard_type		:	CHAR
				|	INT
				|	FLOAT
				|	STRING
				|	VOID
				;

listspec		:	LIST
				|
				;

dims			:	dims dim
				|
				;

dim			:	LBRACK ICONST RBRACK
				|	LBRACK RBRACK
				;

enum_declaration	:	ENUM ID enum_body SEMI
				|	ENUM ID error SEMI {yyerrok; yyerror("error in enum_body");}
				;

enum_body		:	LBRACE id_list RBRACE
				|	LBRACE error RBRACE {yyerrok; yyerror("error in id_list");}
				;

id_list			:	id_list COMMA ID initializer
				|	error COMMA ID initializer {yyerrok; yyerror("error in id_list");}
				|	ID initializer
				;

initializer		:	ASSIGN init_value
				|
				;

init_value		:	expression
				|	LBRACE init_values RBRACE
				|	LBRACE error RBRACE {yyerrok; yyerror("error in init_values");}
				;

expression		:	expression OROP expression
				|	error OROP expression {yyerrok; yyerror("error declaring expression");}
				|	expression ANDOP expression
				|	error ANDOP expression {yyerrok; yyerror("error declaring expression");}
				|	expression EQUOP expression
				|	error EQUOP expression {yyerrok; yyerror("error declaring expression");}
				|	expression RELOP expression
				|	error RELOP expression {yyerrok; yyerror("error declaring expression");}
				|	expression ADDOP expression
				|	error ADDOP expression {yyerrok; yyerror("error declaring expression");}
				|	expression MULOP expression
				|	error MULOP expression {yyerrok; yyerror("error declaring expression");}
				|	NOTOP expression
				|	error NOTOP expression {yyerrok; yyerror("error declaring expression");}
				|	ADDOP expression
				|	SIZEOP expression
				|	INCDEC variable
				|	variable INCDEC
				|	error INCDEC {yyerrok; yyerror("error declaring variable");}
				|	variable
				|	variable LPAREN expression_list RPAREN
				|	error LPAREN expression_list RPAREN {yyerrok; yyerror("error declaring variable");}
				|	variable LPAREN error RPAREN {yyerrok; yyerror("error in expression_list");}
				|	LENGTH LPAREN general_expression RPAREN
				|	LENGTH LPAREN error RPAREN {yyerrok; yyerror("error declaring general_expression");}
				|	NEW LPAREN general_expression RPAREN
				|	NEW LPAREN error RPAREN {yyerrok; yyerror("error declaring general_expression");}
				|	constant
				|	LPAREN general_expression RPAREN
				|	LPAREN standard_type RPAREN
				|	LPAREN error RPAREN {yyerrok; yyerror("error declaring general_expression or standard_type");}
				|	listexpression
				;

variable		:	variable LBRACK general_expression RBRACK
				|	error LBRACK general_expression RBRACK {yyerrok; yyerror("error declaring variable");}
				|	variable LBRACK error RBRACK {yyerrok; yyerror("error declaring general_expression");}
				|	variable DOT ID
				|	error DOT ID {yyerrok; yyerror("error declaring variable");}
				|	LISTFUNC LPAREN general_expression RPAREN
				|	LISTFUNC LPAREN error RPAREN {yyerrok; yyerror("error declaring general_expression");}
				|	decltype ID
				|	error ID {yyerrok; yyerror("error in decltype");}
				|	THIS
				;

general_expression	:	general_expression COMMA general_expression
				|	error COMMA general_expression {yyerrok; yyerror("error declaring general_expression");}
				|	assignment
				;

assignment		:	variable ASSIGN assignment
				|	error ASSIGN assignment {yyerrok; yyerror("error declaring variable");}
				|	expression
				;

expression_list		:	general_expression
				|
				;

constant		:	CCONST
				|	ICONST
				|	FCONST
				|	SCONST
				;

listexpression		:	LBRACK expression_list RBRACK
				| LBRACK error RBRACK {yyerrok; yyerror("error in expression_list");}
				;

init_values		:	init_values COMMA init_value
				|	error COMMA init_value {yyerrok; yyerror("error in init_values");}
				|	init_value
				;

class_declaration	:	CLASS ID class_body SEMI
				|	CLASS ID error SEMI {yyerrok; yyerror("error in class_body");}
				;

class_body		:	parent LBRACE members_methods RBRACE
				|	parent LBRACE error RBRACE {yyerrok; yyerror("error in members_methods");}
				;

parent			:	COLON ID
				|
				;

members_methods		:	members_methods access member_or_method
				|	access member_or_method
				;

access			:	PRIVATE COLON
				|	PROTECTED COLON
				|	PUBLIC COLON
				|
				;

member_or_method	:	member
				|	method
				;

member			:	var_declaration
				|	anonymous_union
				;

var_declaration		:	typename variabledefs SEMI
				|	typename error SEMI {yyerrok; yyerror("error in variabledefs");}
				;

variabledefs		:	variabledefs COMMA variabledef
				|	error COMMA variabledef {yyerrok; yyerror("error in variabledefs");}
				|	variabledef
				;

variabledef		:	listspec ID dims
				|	error ID dims {yyerrok; yyerror("error in listspec");}
				;

anonymous_union		:	UNION union_body SEMI
				|	UNION error SEMI {yyerrok; yyerror("error in union_body");}
				;

union_body		:	LBRACE fields RBRACE
				|	LBRACE error RBRACE {yyerrok; yyerror("error in fields");}
				;

fields			:	fields field
				|	field
				;

field			:	var_declaration
				;

method			:	short_func_declaration
				;

short_func_declaration	:	short_par_func_header SEMI
				|	nopar_func_header SEMI
				;

short_par_func_header	:	func_header_start LPAREN parameter_types RPAREN
				|	func_header_start LPAREN error RPAREN {yyerrok; yyerror("error in parameter_types");}
				;

func_header_start	:	typename listspec ID
				;

parameter_types		:	parameter_types COMMA typename pass_list_dims
				|	error COMMA typename pass_list_dims {yyerrok; yyerror("error in parameter_types");}
				|	typename pass_list_dims
				;

pass_list_dims		:	REFER
				|	listspec dims
				;

nopar_func_header	:	func_header_start LPAREN RPAREN
				;

union_declaration	:	UNION ID union_body SEMI
				|	UNION ID error SEMI {yyerrok; yyerror("error in union_body");}
				;

global_var_declaration	:	typename init_variabledefs SEMI
				|	typename error SEMI {yyerrok; yyerror("error in init_variabledefs");}
				;

init_variabledefs	:	init_variabledefs COMMA init_variabledef
				|	error COMMA init_variabledef {yyerrok; yyerror("error in init_variabledefs");}
				|	init_variabledef
				;

init_variabledef	:	variabledef initializer
				;

func_declaration	:	short_func_declaration
				|	full_func_declaration
				;

full_func_declaration	:	full_par_func_header LBRACE decl_statements RBRACE
				|	full_par_func_header LBRACE error RBRACE {yyerrok; yyerror("error in decl_statements");}
				|	nopar_class_func_header LBRACE decl_statements RBRACE
				|	nopar_class_func_header LBRACE error RBRACE {yyerrok; yyerror("error in decl_statements");}
				|	nopar_func_header LBRACE decl_statements RBRACE
				|	nopar_func_header LBRACE error RBRACE {yyerrok; yyerror("error in decl_statements");}
				|	error LBRACE decl_statements RBRACE {yyerrok; yyerror("error in full or nopar_class_func_header or nopar_func_header");}
				;

full_par_func_header	:	class_func_header_start LPAREN parameter_list RPAREN
				|	class_func_header_start LPAREN error RPAREN {yyerrok; yyerror("error in parameter_list");}
				|	func_header_start LPAREN parameter_list RPAREN
				|	func_header_start LPAREN error RPAREN {yyerrok; yyerror("error in parameter_list");}
				|	error LPAREN parameter_list RPAREN {yyerrok; yyerror("error in class_func_header_start or func_header_start");}
				;

class_func_header_start	:	typename listspec func_class ID
				;

func_class		:	ID METH
				;

parameter_list		:	parameter_list COMMA typename pass_variabledef
				|	error COMMA typename pass_variabledef {yyerrok; yyerror("error in parameter_list");}
				|	typename pass_variabledef
				;

pass_variabledef	:	variabledef
				|	REFER ID
				;

nopar_class_func_header	:	class_func_header_start LPAREN RPAREN
				|	error LPAREN RPAREN {yyerrok; yyerror("error in class_func_header_start");}
				;

decl_statements		:	declarations statements
				|	declarations
				|	statements
				|
				;

declarations		:	declarations decltype typename variabledefs SEMI
				|	declarations decltype typename error SEMI {yyerrok; yyerror("error in variabledefs");}
				|	decltype typename variabledefs SEMI
				|	decltype typename error SEMI {yyerrok; yyerror("error in variabledefs");}
				;

decltype		:	STATIC
				|
				;

statements		:	statements statement
				|	statement
				;

statement		:	expression_statement
				|	if_statement
				|	while_statement
				|	for_statement
				|	switch_statement
				|	return_statement
				|	io_statement
				|	comp_statement
				|	CONTINUE SEMI
				|	BREAK SEMI
				|	SEMI
				;

expression_statement	:	general_expression SEMI
				|	error SEMI {yyerrok; yyerror("error declaring general_expression");}
				;

if_statement 		: 	IF LPAREN general_expression RPAREN statement ELSE statement
				|	IF LPAREN error RPAREN statement ELSE statement {yyerrok; yyerror("error declaring general_expression");}
				|	IF LPAREN general_expression RPAREN error ELSE statement {yyerrok; yyerror("error in statement");}
				|	IF LPAREN general_expression RPAREN statement %prec LOWER_THAN_ELSE
				;

while_statement		:	WHILE LPAREN general_expression RPAREN statement
				|	WHILE LPAREN error RPAREN statement {yyerrok; yyerror("error declaring general_expression");}
				;

for_statement		:	FOR LPAREN optexpr SEMI optexpr SEMI optexpr RPAREN statement
				|	FOR LPAREN error SEMI optexpr SEMI optexpr RPAREN statement {yyerrok; yyerror("error in optexpr");}
				|	FOR LPAREN optexpr SEMI error SEMI optexpr RPAREN statement {yyerrok; yyerror("error in optexpr");}
				|	FOR LPAREN optexpr SEMI optexpr SEMI error RPAREN statement {yyerrok; yyerror("error in optexpr");}
				;

optexpr			:	general_expression
				|
				;

switch_statement	:	SWITCH LPAREN general_expression RPAREN switch_tail
				SWITCH LPAREN error RPAREN switch_tail {yyerrok; yyerror("error declaring general_expression");}
				;

switch_tail		:	LBRACE decl_cases RBRACE
				|	LBRACE error RBRACE {yyerrok; yyerror("error in decl_cases");}
				|	single_casestatement
				;

decl_cases		:	declarations casestatements
				|	declarations
				|	casestatements
				|
				;

casestatements		:	casestatements casestatement
				|	casestatement
				;

casestatement		:	CASE constant COLON casestatement
				|	CASE error COLON casestatement {yyerrok; yyerror("error declaring constant");}
				|	CASE constant COLON statements
				|	CASE error COLON statements {yyerrok; yyerror("error declaring constant");}
				|	DEFAULT COLON statements
				;

single_casestatement	:	CASE constant COLON single_casestatement
				|	CASE error COLON single_casestatement {yyerrok; yyerror("error declaring constant");}
				|	CASE constant COLON statement
				|	CASE error COLON statement {yyerrok; yyerror("error declaring constant");}
				;

return_statement	:	RETURN optexpr SEMI
				|	RETURN error SEMI {yyerrok; yyerror("error in optexpr");}
				;

io_statement		:	CIN INP in_list SEMI
				|	CIN INP error SEMI {yyerrok; yyerror("error in in_list");}
				|	COUT OUT out_list SEMI
				|	COUT OUT error SEMI {yyerrok; yyerror("error in out_list");}
				;

in_list			:	in_list INP in_item
				|	error INP in_item {yyerrok; yyerror("error in in_list");}
				|	in_item
				;

in_item			:	variable
				;

out_list		:	out_list OUT out_item
				|	error OUT out_item {yyerrok; yyerror("error in out_list");}
				|	out_item
				;

out_item		:	general_expression
				;

comp_statement		:	LBRACE decl_statements RBRACE
				|	LBRACE error RBRACE {yyerrok; yyerror("error in decl_statements");}
				;

main_function		:	main_header LBRACE decl_statements RBRACE
				|	error LBRACE decl_statements RBRACE {yyerrok; yyerror("error declaring main_header");}
				|	main_header LBRACE error RBRACE {yyerrok; yyerror("error in decl_statements");}
				;

main_header		:	INT MAIN LPAREN RPAREN
				;
%%

FILE *yyin;
char c;
int line;
int errors;							//counts the number of errors during syntax analysis

int  main(int argc,char ** argv) {

	if(argc == 1)
	
	  exit(printf(" %s <file>\n",argv[0]));
		
	yyin = fopen(argv[1],"r");
	
	if(!yyin)
	
	  exit(printf(" %s not found \n",argv[1]));
		
	printf("Syntax analyzer started.\n");

	errors = 0;

	yyparse();

	printf("Syntax analyzer finished.\n");

	return 0;
}

yyerror(char *s) {

      errors++;

      if (errors >= 5) {
	printf ("Syntax analysis is now terminated. Detected 5 syntax errors already.\n");	//terminate syntax analysis after 5 errors
	exit(-1);
      }
      else {
	printf("Syntax ERROR at line %d: %s\n", line, s);
	return(0);
      }
}
