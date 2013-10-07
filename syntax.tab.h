/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TYPEDEF = 258,
     CHAR = 259,
     INT = 260,
     FLOAT = 261,
     STRING = 262,
     CLASS = 263,
     PRIVATE = 264,
     PROTECTED = 265,
     PUBLIC = 266,
     VOID = 267,
     STATIC = 268,
     UNION = 269,
     ENUM = 270,
     LIST = 271,
     CONTINUE = 272,
     BREAK = 273,
     IF = 274,
     ELSE = 275,
     WHILE = 276,
     FOR = 277,
     SWITCH = 278,
     CASE = 279,
     DEFAULT = 280,
     RETURN = 281,
     LENGTH = 282,
     NEW = 283,
     CIN = 284,
     COUT = 285,
     MAIN = 286,
     THIS = 287,
     ID = 288,
     ICONST = 289,
     FCONST = 290,
     CCONST = 291,
     SCONST = 292,
     OROP = 293,
     ANDOP = 294,
     EQUOP = 295,
     RELOP = 296,
     ADDOP = 297,
     MULOP = 298,
     NOTOP = 299,
     INCDEC = 300,
     SIZEOP = 301,
     LISTFUNC = 302,
     LPAREN = 303,
     RPAREN = 304,
     SEMI = 305,
     DOT = 306,
     COMMA = 307,
     ASSIGN = 308,
     COLON = 309,
     LBRACK = 310,
     RBRACK = 311,
     REFER = 312,
     LBRACE = 313,
     RBRACE = 314,
     METH = 315,
     INP = 316,
     OUT = 317,
     LOWER_THAN_ELSE = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 10 "syntax.y"

  unsigned int unint;
  double realnum;
  char string[100];
  char character;



/* Line 2068 of yacc.c  */
#line 122 "syntax.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


