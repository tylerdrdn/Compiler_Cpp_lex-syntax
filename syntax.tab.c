/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "syntax.y"


#include <stdio.h>
#include <stdlib.h>


#define YYDEBUG 1


/* Line 268 of yacc.c  */
#line 81 "syntax.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 293 of yacc.c  */
#line 10 "syntax.y"

  unsigned int unint;
  double realnum;
  char string[100];
  char character;



/* Line 293 of yacc.c  */
#line 189 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 201 "syntax.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNRULES -- Number of states.  */
#define YYNSTATES  514

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    12,    14,    16,    18,
      20,    22,    29,    36,    38,    40,    42,    44,    46,    48,
      50,    52,    53,    56,    57,    61,    64,    69,    74,    78,
      82,    87,    92,    95,    98,    99,   101,   105,   109,   113,
     117,   121,   125,   129,   133,   137,   141,   145,   149,   153,
     157,   160,   164,   167,   170,   173,   176,   179,   181,   186,
     191,   196,   201,   206,   211,   216,   218,   222,   226,   230,
     232,   237,   242,   247,   251,   255,   260,   265,   268,   271,
     273,   277,   281,   283,   287,   291,   293,   295,   296,   298,
     300,   302,   304,   308,   312,   316,   320,   322,   327,   332,
     337,   342,   345,   346,   350,   353,   356,   359,   362,   363,
     365,   367,   369,   371,   375,   379,   383,   387,   389,   393,
     397,   401,   405,   409,   413,   416,   418,   420,   422,   425,
     428,   433,   438,   442,   447,   452,   455,   457,   460,   464,
     469,   474,   478,   482,   486,   490,   492,   495,   497,   499,
     504,   509,   514,   519,   524,   529,   534,   539,   544,   549,
     554,   559,   564,   567,   572,   577,   580,   582,   585,   589,
     593,   596,   598,   600,   601,   607,   613,   618,   623,   625,
     626,   629,   631,   633,   635,   637,   639,   641,   643,   645,
     647,   650,   653,   655,   658,   661,   669,   677,   685,   691,
     697,   703,   713,   723,   733,   743,   745,   746,   757,   761,
     765,   767,   770,   772,   774,   775,   778,   780,   785,   790,
     795,   800,   804,   809,   814,   819,   824,   828,   832,   837,
     842,   847,   852,   856,   860,   862,   864,   868,   872,   874,
     876,   880,   884,   889,   894,   899
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      65,     0,    -1,    66,   143,    -1,    66,    67,    -1,    -1,
      68,    -1,    74,    -1,    87,    -1,   108,    -1,   109,    -1,
     112,    -1,     3,    69,    71,    33,    72,    50,    -1,     3,
      69,    71,    33,     1,    50,    -1,    70,    -1,    33,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,    12,    -1,
      16,    -1,    -1,    72,    73,    -1,    -1,    55,    34,    56,
      -1,    55,    56,    -1,    15,    33,    75,    50,    -1,    15,
      33,     1,    50,    -1,    58,    76,    59,    -1,    58,     1,
      59,    -1,    76,    52,    33,    77,    -1,     1,    52,    33,
      77,    -1,    33,    77,    -1,    53,    78,    -1,    -1,    79,
      -1,    58,    86,    59,    -1,    58,     1,    59,    -1,    79,
      38,    79,    -1,     1,    38,    79,    -1,    79,    39,    79,
      -1,     1,    39,    79,    -1,    79,    40,    79,    -1,     1,
      40,    79,    -1,    79,    41,    79,    -1,     1,    41,    79,
      -1,    79,    42,    79,    -1,     1,    42,    79,    -1,    79,
      43,    79,    -1,     1,    43,    79,    -1,    44,    79,    -1,
       1,    44,    79,    -1,    42,    79,    -1,    46,    79,    -1,
      45,    80,    -1,    80,    45,    -1,     1,    45,    -1,    80,
      -1,    80,    48,    83,    49,    -1,     1,    48,    83,    49,
      -1,    80,    48,     1,    49,    -1,    27,    48,    81,    49,
      -1,    27,    48,     1,    49,    -1,    28,    48,    81,    49,
      -1,    28,    48,     1,    49,    -1,    84,    -1,    48,    81,
      49,    -1,    48,    70,    49,    -1,    48,     1,    49,    -1,
      85,    -1,    80,    55,    81,    56,    -1,     1,    55,    81,
      56,    -1,    80,    55,     1,    56,    -1,    80,    51,    33,
      -1,     1,    51,    33,    -1,    47,    48,    81,    49,    -1,
      47,    48,     1,    49,    -1,   122,    33,    -1,     1,    33,
      -1,    32,    -1,    81,    52,    81,    -1,     1,    52,    81,
      -1,    82,    -1,    80,    53,    82,    -1,     1,    53,    82,
      -1,    79,    -1,    81,    -1,    -1,    36,    -1,    34,    -1,
      35,    -1,    37,    -1,    55,    83,    56,    -1,    55,     1,
      56,    -1,    86,    52,    78,    -1,     1,    52,    78,    -1,
      78,    -1,     8,    33,    88,    50,    -1,     8,    33,     1,
      50,    -1,    89,    58,    90,    59,    -1,    89,    58,     1,
      59,    -1,    54,    33,    -1,    -1,    90,    91,    92,    -1,
      91,    92,    -1,     9,    54,    -1,    10,    54,    -1,    11,
      54,    -1,    -1,    93,    -1,   101,    -1,    94,    -1,    97,
      -1,    69,    95,    50,    -1,    69,     1,    50,    -1,    95,
      52,    96,    -1,     1,    52,    96,    -1,    96,    -1,    71,
      33,    72,    -1,     1,    33,    72,    -1,    14,    98,    50,
      -1,    14,     1,    50,    -1,    58,    99,    59,    -1,    58,
       1,    59,    -1,    99,   100,    -1,   100,    -1,    94,    -1,
     102,    -1,   103,    50,    -1,   107,    50,    -1,   104,    48,
     105,    49,    -1,   104,    48,     1,    49,    -1,    69,    71,
      33,    -1,   105,    52,    69,   106,    -1,     1,    52,    69,
     106,    -1,    69,   106,    -1,    57,    -1,    71,    72,    -1,
     104,    48,    49,    -1,    14,    33,    98,    50,    -1,    14,
      33,     1,    50,    -1,    69,   110,    50,    -1,    69,     1,
      50,    -1,   110,    52,   111,    -1,     1,    52,   111,    -1,
     111,    -1,    96,    77,    -1,   102,    -1,   113,    -1,   114,
      58,   120,    59,    -1,   114,    58,     1,    59,    -1,   119,
      58,   120,    59,    -1,   119,    58,     1,    59,    -1,   107,
      58,   120,    59,    -1,   107,    58,     1,    59,    -1,     1,
      58,   120,    59,    -1,   115,    48,   117,    49,    -1,   115,
      48,     1,    49,    -1,   104,    48,   117,    49,    -1,   104,
      48,     1,    49,    -1,     1,    48,   117,    49,    -1,    69,
      71,   116,    33,    -1,    33,    60,    -1,   117,    52,    69,
     118,    -1,     1,    52,    69,   118,    -1,    69,   118,    -1,
      96,    -1,    57,    33,    -1,   115,    48,    49,    -1,     1,
      48,    49,    -1,   121,   123,    -1,   121,    -1,   123,    -1,
      -1,   121,   122,    69,    95,    50,    -1,   121,   122,    69,
       1,    50,    -1,   122,    69,    95,    50,    -1,   122,    69,
       1,    50,    -1,    13,    -1,    -1,   123,   124,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   130,
      -1,   136,    -1,   137,    -1,   142,    -1,    17,    50,    -1,
      18,    50,    -1,    50,    -1,    81,    50,    -1,     1,    50,
      -1,    19,    48,    81,    49,   124,    20,   124,    -1,    19,
      48,     1,    49,   124,    20,   124,    -1,    19,    48,    81,
      49,     1,    20,   124,    -1,    19,    48,    81,    49,   124,
      -1,    21,    48,    81,    49,   124,    -1,    21,    48,     1,
      49,   124,    -1,    22,    48,   129,    50,   129,    50,   129,
      49,   124,    -1,    22,    48,     1,    50,   129,    50,   129,
      49,   124,    -1,    22,    48,   129,    50,     1,    50,   129,
      49,   124,    -1,    22,    48,   129,    50,   129,    50,     1,
      49,   124,    -1,    81,    -1,    -1,    23,    48,    81,    49,
     131,    23,    48,     1,    49,   131,    -1,    58,   132,    59,
      -1,    58,     1,    59,    -1,   135,    -1,   121,   133,    -1,
     121,    -1,   133,    -1,    -1,   133,   134,    -1,   134,    -1,
      24,    84,    54,   134,    -1,    24,     1,    54,   134,    -1,
      24,    84,    54,   123,    -1,    24,     1,    54,   123,    -1,
      25,    54,   123,    -1,    24,    84,    54,   135,    -1,    24,
       1,    54,   135,    -1,    24,    84,    54,   124,    -1,    24,
       1,    54,   124,    -1,    26,   129,    50,    -1,    26,     1,
      50,    -1,    29,    61,   138,    50,    -1,    29,    61,     1,
      50,    -1,    30,    62,   140,    50,    -1,    30,    62,     1,
      50,    -1,   138,    61,   139,    -1,     1,    61,   139,    -1,
     139,    -1,    80,    -1,   140,    62,   141,    -1,     1,    62,
     141,    -1,   141,    -1,    81,    -1,    58,   120,    59,    -1,
      58,     1,    59,    -1,   144,    58,   120,    59,    -1,     1,
      58,   120,    59,    -1,   144,    58,     1,    59,    -1,     5,
      31,    48,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,   100,   101,   104,   105,   106,   107,   108,
     109,   112,   113,   116,   117,   120,   121,   122,   123,   124,
     127,   128,   131,   132,   135,   136,   139,   140,   143,   144,
     147,   148,   149,   152,   153,   156,   157,   158,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     207,   208,   209,   212,   213,   214,   217,   218,   221,   222,
     223,   224,   227,   228,   231,   232,   233,   236,   237,   240,
     241,   244,   245,   248,   249,   252,   253,   254,   255,   258,
     259,   262,   263,   266,   267,   270,   271,   272,   275,   276,
     279,   280,   283,   284,   287,   288,   291,   294,   297,   298,
     301,   302,   305,   308,   309,   310,   313,   314,   317,   320,
     321,   324,   325,   328,   329,   330,   333,   336,   337,   340,
     341,   342,   343,   344,   345,   346,   349,   350,   351,   352,
     353,   356,   359,   362,   363,   364,   367,   368,   371,   372,
     375,   376,   377,   378,   381,   382,   383,   384,   387,   388,
     391,   392,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   408,   409,   412,   413,   414,   415,   418,
     419,   422,   423,   424,   425,   428,   429,   432,   436,   437,
     438,   441,   442,   443,   444,   447,   448,   451,   452,   453,
     454,   455,   458,   459,   460,   461,   464,   465,   468,   469,
     470,   471,   474,   475,   476,   479,   482,   483,   484,   487,
     490,   491,   494,   495,   496,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPEDEF", "CHAR", "INT", "FLOAT",
  "STRING", "CLASS", "PRIVATE", "PROTECTED", "PUBLIC", "VOID", "STATIC",
  "UNION", "ENUM", "LIST", "CONTINUE", "BREAK", "IF", "ELSE", "WHILE",
  "FOR", "SWITCH", "CASE", "DEFAULT", "RETURN", "LENGTH", "NEW", "CIN",
  "COUT", "MAIN", "THIS", "ID", "ICONST", "FCONST", "CCONST", "SCONST",
  "OROP", "ANDOP", "EQUOP", "RELOP", "ADDOP", "MULOP", "NOTOP", "INCDEC",
  "SIZEOP", "LISTFUNC", "LPAREN", "RPAREN", "SEMI", "DOT", "COMMA",
  "ASSIGN", "COLON", "LBRACK", "RBRACK", "REFER", "LBRACE", "RBRACE",
  "METH", "INP", "OUT", "LOWER_THAN_ELSE", "$accept", "program",
  "global_declarations", "global_declaration", "typedef_declaration",
  "typename", "standard_type", "listspec", "dims", "dim",
  "enum_declaration", "enum_body", "id_list", "initializer", "init_value",
  "expression", "variable", "general_expression", "assignment",
  "expression_list", "constant", "listexpression", "init_values",
  "class_declaration", "class_body", "parent", "members_methods", "access",
  "member_or_method", "member", "var_declaration", "variabledefs",
  "variabledef", "anonymous_union", "union_body", "fields", "field",
  "method", "short_func_declaration", "short_par_func_header",
  "func_header_start", "parameter_types", "pass_list_dims",
  "nopar_func_header", "union_declaration", "global_var_declaration",
  "init_variabledefs", "init_variabledef", "func_declaration",
  "full_func_declaration", "full_par_func_header",
  "class_func_header_start", "func_class", "parameter_list",
  "pass_variabledef", "nopar_class_func_header", "decl_statements",
  "declarations", "decltype", "statements", "statement",
  "expression_statement", "if_statement", "while_statement",
  "for_statement", "optexpr", "switch_statement", "switch_tail",
  "decl_cases", "casestatements", "casestatement", "single_casestatement",
  "return_statement", "io_statement", "in_list", "in_item", "out_list",
  "out_item", "comp_statement", "main_function", "main_header", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   101,   102,   102,
     103,   103,   104,   105,   105,   105,   106,   106,   107,   108,
     108,   109,   109,   110,   110,   110,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   114,
     114,   115,   116,   117,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   131,   131,
     131,   132,   132,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   135,   135,   135,   135,   136,   136,   137,   137,
     137,   137,   138,   138,   138,   139,   140,   140,   140,   141,
     142,   142,   143,   143,   143,   144
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     3,     2,     4,     4,     3,     3,
       4,     4,     2,     2,     0,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     2,     2,     2,     2,     2,     1,     4,     4,
       4,     4,     4,     4,     4,     1,     3,     3,     3,     1,
       4,     4,     4,     3,     3,     4,     4,     2,     2,     1,
       3,     3,     1,     3,     3,     1,     1,     0,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     4,     4,     4,
       4,     2,     0,     3,     2,     2,     2,     2,     0,     1,
       1,     1,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     2,     2,
       4,     4,     3,     4,     4,     2,     1,     2,     3,     4,
       4,     3,     3,     3,     3,     1,     2,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     4,     2,     1,     2,     3,     3,
       2,     1,     1,     0,     5,     5,     4,     4,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     2,     7,     7,     7,     5,     5,
       5,     9,     9,     9,     9,     1,     0,    10,     3,     3,
       1,     2,     1,     1,     0,     2,     1,     4,     4,     4,
       4,     3,     4,     4,     4,     4,     3,     3,     4,     4,
       4,     4,     3,     3,     1,     1,     3,     3,     1,     1,
       3,     3,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,    15,    16,    17,    18,
       0,    19,     0,     0,    14,     3,     5,     0,    13,     6,
       7,   147,     0,     0,     0,     8,     9,    10,   148,     0,
       0,     0,     2,     0,     0,     0,    16,    21,     0,     0,
       0,     0,     0,    20,     0,    34,     0,   145,   128,     0,
     129,     0,     0,     0,     0,     0,     0,   169,     0,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    89,    90,    88,    91,     0,     0,
       0,     0,     0,     0,   192,     0,     0,    85,    57,     0,
      82,    65,    69,     0,     0,     0,     0,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,   142,
       0,    23,     0,     0,   146,   141,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   165,   160,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    56,
       0,   194,     0,     0,     0,     0,   190,   191,     0,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,    52,    57,    50,     0,    54,    53,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,   193,     0,   155,
       0,     0,    77,     0,   180,     0,   245,    98,   101,    97,
       0,   140,     0,     0,   126,     0,   125,   139,    27,     0,
      34,     0,    26,   119,   144,   162,   118,   161,     0,    33,
      35,   143,   131,     0,   136,    23,   135,   130,     0,   158,
     154,   153,   150,   149,   157,   156,   152,   151,   244,   242,
       0,   167,    23,     0,    39,    41,    43,    45,    47,    49,
      51,     0,     0,    74,    81,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,   227,    77,   226,     0,     0,
       0,     0,     0,   235,     0,   234,     0,   239,     0,   238,
       0,     0,    68,    67,    66,    93,    92,   241,   240,    38,
      40,    42,    44,    46,    48,     0,     0,    73,    83,     0,
       0,    80,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   108,     0,   123,     0,     0,   122,   124,     0,
      29,    32,     0,    28,     0,    22,     0,    96,     0,     0,
     137,    21,   164,   163,    59,    71,     0,     0,     0,     0,
       0,     0,     0,    62,    61,    64,    63,   229,     0,   228,
       0,   231,     0,   230,     0,    76,    75,    60,    58,    72,
      70,     0,     0,   177,     0,   176,     0,    12,    11,   100,
     105,   106,   107,    99,     0,     0,     0,   104,   109,   111,
     112,   110,   127,     0,     0,   114,   113,    34,    34,     0,
      25,     0,    37,     0,    36,   134,   136,    23,   133,     0,
       0,   198,   200,   199,     0,     0,     0,     0,     0,     0,
     210,   233,   232,   237,   236,   175,   174,   116,   115,   103,
       0,     0,     0,     0,    31,    30,    24,    95,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,   213,   216,     0,   121,   120,    23,     0,
      21,   196,   197,   195,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,   211,   208,   215,     0,   131,
       0,     0,     0,     0,     0,   225,   223,   224,   222,     0,
       0,     0,     0,    21,   202,   203,   204,   201,     0,   218,
       0,   217,     0,   207
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    15,    16,    58,    18,   146,   236,   345,
      19,   117,   231,   124,   239,    87,    88,    89,    90,   193,
      91,    92,   348,    20,   110,   111,   332,   333,   397,   398,
     224,   336,   147,   400,   114,   225,   226,   401,   402,    22,
     403,   130,   246,   404,    25,    26,    46,    47,    27,    28,
      29,    30,   122,    59,   148,    31,    93,    94,   174,    96,
      97,    98,    99,   100,   101,   175,   102,   429,   462,   463,
     464,   430,   103,   104,   294,   295,   298,   299,   105,    32,
      33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -396
static const yytype_int16 yypact[] =
{
    -396,    38,   363,  -396,   -24,   489,  -396,    21,  -396,  -396,
     118,  -396,   127,   157,  -396,  -396,  -396,   181,  -396,  -396,
    -396,  -396,   149,   189,   119,  -396,  -396,  -396,  -396,   232,
     249,   253,  -396,   281,   205,   502,  -396,   329,   317,    61,
      27,    34,   152,  -396,   340,   328,   302,  -396,  -396,   215,
    -396,   558,   614,   288,   670,   726,   341,  -396,   107,   166,
    2046,  -396,   373,   379,   365,   380,   389,   392,  1377,   397,
     403,   399,   407,  -396,  -396,  -396,  -396,  -396,  1577,  1577,
     160,  1577,   422,  1352,  -396,   429,   782,  1243,   361,   311,
    -396,  -396,  -396,   427,   838,   493,  1030,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,   484,   478,   483,   512,
     501,   496,   522,   378,   523,   524,    26,   528,  -396,  -396,
     239,    58,   549,  1260,  -396,  -396,   239,   247,  -396,   113,
     295,   304,  1866,   530,  1889,   537,   345,  -396,   346,  1912,
     538,  1935,   539,   489,   550,   566,   568,  -396,  -396,  -396,
     489,  -396,  1577,  1577,  1577,  1577,  1577,  1577,  1577,  -396,
    1402,  -396,   574,  1602,  1627,  1602,  -396,  -396,  1652,  1677,
    1427,  1602,  2067,   557,   577,   561,  1702,  1727,   238,  1752,
    2338,   569,   388,   470,   145,    15,  -396,  1777,  2088,   565,
     366,  2004,   557,   567,  1958,   563,  1577,  1577,  1577,  1577,
    1577,  1577,  -396,  1452,   591,  1627,  1802,  -396,  1602,   625,
     493,  1078,   297,   308,  -396,    67,  -396,  -396,  -396,  -396,
    1362,  -396,   570,   322,  -396,   120,  -396,  -396,  -396,    90,
     328,   146,  -396,   573,  -396,  -396,   573,  -396,  1297,  -396,
    1243,  -396,   572,   489,   566,   568,  -396,  -396,   489,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     107,  -396,  -396,   107,  1280,   470,   500,   500,   569,  -396,
     470,  2298,   585,  -396,  -396,  2319,  -396,   217,  2109,   386,
    2130,   395,  2151,   588,   400,  -396,  -396,  -396,  2172,   406,
    2193,   431,   417,    15,    93,  -396,  1841,   557,   -31,  -396,
    2214,   504,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  1280,
     470,   500,   500,   569,  -396,  2235,   590,  -396,  -396,  2025,
     270,  -396,   356,   192,   440,  -396,   595,   174,   593,   599,
     600,   601,    35,   420,  -396,   193,   452,  -396,  -396,   624,
    -396,  -396,   630,  -396,   116,  -396,  1981,  -396,   275,   113,
     573,    40,  -396,  -396,  -396,  -396,  1174,  1222,  1174,  1174,
    1477,  1502,    -4,  -396,  -396,  -396,  -396,  -396,   160,  -396,
     160,  -396,  1602,  -396,  1602,  -396,  -396,  -396,  -396,  -396,
    -396,   258,   516,  -396,   239,  -396,   239,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,   420,    49,   322,  -396,  -396,  -396,
    -396,  -396,  -396,   617,   616,  -396,  -396,   328,   328,   611,
    -396,  1260,  -396,  1260,  -396,  -396,  -396,  -396,  -396,   648,
    1820,   650,  -396,  -396,   628,  2256,   629,   246,    36,   657,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     631,   634,   652,   313,  -396,  -396,  -396,  -396,  -396,  1174,
    1174,  1174,  1527,  1527,  1552,   632,   636,   635,   314,   641,
       5,   489,   642,   156,  -396,   660,  -396,  -396,   661,   506,
      40,  -396,  -396,  -396,   662,   664,  2277,   672,  1126,  1126,
    -396,   656,   665,  1174,   489,   156,  -396,  -396,   721,  -396,
     489,  1174,  1174,  1174,  1174,  -396,  -396,  -396,  -396,    54,
      54,   886,   674,    40,  -396,  -396,  -396,  -396,   934,  -396,
     982,  -396,    -4,  -396
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,  -396,  -396,  -396,    -2,   643,   -16,  -110,  -396,
    -396,  -396,  -396,  -220,  -222,   105,    78,   -32,   -30,  -145,
    -395,  -396,  -396,  -396,  -396,  -396,  -396,   402,   330,  -396,
    -320,  -201,   -10,  -396,   342,  -396,   510,  -396,   734,  -396,
     738,  -396,  -340,   739,  -396,  -396,  -396,   -87,  -396,  -396,
    -396,  -396,  -396,   283,  -246,  -396,   198,   318,   -29,   -92,
     -91,  -396,  -396,  -396,  -396,  -166,  -396,   230,  -396,   290,
    -333,   -74,  -396,  -396,  -396,   111,  -396,   195,  -396,  -396,
    -396
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -244
static const yytype_int16 yytable[] =
{
      17,    44,   211,    37,   283,   214,    95,    45,   233,   415,
     341,   418,   324,   399,   352,   272,   347,   353,    61,   373,
     427,   106,    95,    95,    34,    95,    95,   229,   112,   458,
     459,   374,   456,   234,    35,   115,   173,   457,     3,   241,
    -179,  -179,  -179,  -179,   329,   330,   331,   129,  -179,    61,
     440,   190,    38,   192,   428,    60,    43,    95,   316,   230,
     458,   459,   108,   482,  -212,   210,   204,    61,   326,  -179,
     206,    62,    63,    64,   399,    65,    66,    67,   458,   459,
      68,    69,    70,    71,    72,   113,    73,  -179,    74,    75,
      76,    77,   116,   213,   393,  -214,    78,   416,    79,    80,
      81,    82,    83,   352,    84,   327,  -132,   113,   144,    85,
      45,   223,    86,   245,   144,   109,    45,   -23,   235,  -102,
     214,   382,   -23,    43,     6,    36,     8,     9,   192,    43,
     487,   274,    11,   277,   276,   350,   279,   281,   173,   284,
     -21,   260,   339,   369,   289,   291,   -21,   297,   263,   340,
     409,    39,   487,    14,   370,   301,   182,   182,   185,   182,
      40,   184,   -21,   415,   145,   -21,   509,   511,   -21,    50,
     244,   192,   410,    61,   320,   318,   321,    51,   151,   337,
     458,   459,    42,   181,   183,   118,   186,   444,   445,   447,
      41,   448,    73,  -179,   424,   426,   162,    43,   342,    48,
     165,   182,   119,   325,   120,   343,    56,    82,   322,     6,
      36,     8,     9,   325,   -21,   149,   127,    11,   150,     6,
      36,     8,     9,   223,   388,   118,   118,    11,   240,   344,
     182,   182,   182,   182,   182,   182,   182,    49,    14,   292,
     144,   349,   383,   405,   384,   384,   351,   455,    14,   133,
     135,    61,   140,   142,    57,    43,   293,   264,   265,   266,
     267,   268,   269,   270,   128,   419,   421,   422,   423,   208,
      73,  -179,   -21,   355,   182,   182,   182,   182,   182,   182,
      74,    75,    76,    77,   195,    82,   474,   475,   477,   136,
      52,   118,     6,    36,     8,     9,   242,    53,   -14,   243,
      11,   309,   310,   311,   312,   313,   314,   350,   435,   323,
     384,    54,   325,   -14,   469,   481,   182,     6,    36,     8,
       9,    14,   208,   335,    43,    11,   380,   413,   173,   173,
     -14,   396,   131,   245,   414,   417,   138,   137,    43,    55,
     297,   -21,   297,   240,   247,    43,    14,   248,    74,    75,
      76,    77,   125,   249,   126,   -21,   150,   381,   471,   472,
     473,   207,   128,   208,     4,   107,     5,     6,     7,     8,
       9,    10,    43,   121,   437,    11,   438,    12,    13,   222,
     442,   123,     6,    36,     8,     9,   325,   495,   497,   -21,
      11,   501,   396,   143,   254,   255,    14,   143,   150,   461,
     504,   505,   506,   507,   496,   498,   202,   508,   510,   203,
     214,    14,   204,   168,   205,   304,   206,   214,   208,   214,
     173,   173,   173,   166,     6,    36,     8,     9,   169,   167,
     191,   484,    11,   202,   395,   357,   203,   170,   208,   204,
     171,   470,    61,   206,   359,   176,   293,   208,   293,   362,
     151,   177,   208,    14,   417,   364,    69,    70,   208,   213,
     178,    73,  -179,    74,    75,    76,    77,   367,   162,   179,
     187,    78,   165,    79,    80,    81,    82,    83,   368,   431,
     366,   432,   322,   208,    85,   -87,   209,   417,   503,   182,
     385,   182,   386,     6,    36,     8,     9,     6,    36,     8,
       9,    11,   406,    60,   386,    11,  -179,  -179,  -179,  -179,
     198,   199,   200,   201,  -179,    61,   240,   215,   240,    62,
      63,    64,    14,    65,    66,    67,   212,   216,    68,    69,
      70,    71,    72,   217,    73,  -179,    74,    75,    76,    77,
    -244,  -244,   200,   201,    78,   218,    79,    80,    81,    82,
      83,   219,    84,   376,   220,   489,   208,    85,   490,   132,
      86,  -173,  -179,  -179,  -179,  -179,   436,   433,   386,   434,
    -179,    61,   221,   227,   228,    62,    63,    64,   232,    65,
      66,    67,   237,   118,    68,    69,    70,    71,    72,   251,
      73,  -179,    74,    75,    76,    77,   253,   257,   259,   261,
      78,   262,    79,    80,    81,    82,    83,   273,    84,   208,
     286,   287,   201,    85,   303,   134,    86,  -173,  -179,  -179,
    -179,  -179,   308,   306,   317,  -243,  -179,    61,   344,   334,
    -159,    62,    63,    64,   354,    65,    66,    67,   361,   378,
      68,    69,    70,    71,    72,   387,    73,  -179,    74,    75,
      76,    77,   389,   390,   391,   392,    78,   407,    79,    80,
      81,    82,    83,   408,    84,   443,    50,   446,   449,    85,
     451,   139,    86,  -173,  -179,  -179,  -179,  -179,   452,   454,
     465,   466,  -179,    61,   467,   468,   478,    62,    63,    64,
     479,    65,    66,    67,   480,   483,    68,    69,    70,    71,
      72,   486,    73,  -179,    74,    75,    76,    77,   488,  -132,
     499,   491,    78,   492,    79,    80,    81,    82,    83,   500,
      84,   494,   502,   512,   439,    85,   189,   141,    86,  -173,
    -179,  -179,  -179,  -179,   394,   338,    21,   441,  -179,    61,
      23,    24,   513,    62,    63,    64,   460,    65,    66,    67,
     485,     0,    68,    69,    70,    71,    72,     0,    73,  -179,
      74,    75,    76,    77,     0,     0,     0,     0,    78,     0,
      79,    80,    81,    82,    83,     0,    84,     0,     0,     0,
       0,    85,     0,   194,    86,  -173,  -179,  -179,  -179,  -179,
       0,     0,     0,     0,  -179,    61,     0,     0,     0,    62,
      63,    64,     0,    65,    66,    67,     0,     0,    68,    69,
      70,    71,    72,     0,    73,  -179,    74,    75,    76,    77,
       0,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,    84,     0,     0,     0,     0,    85,     0,    60,
      86,  -173,  -179,  -179,  -179,  -179,     0,     0,     0,     0,
    -179,    61,     0,     0,     0,    62,    63,    64,     0,    65,
      66,    67,     0,     0,    68,    69,    70,    71,    72,     0,
      73,  -179,    74,    75,    76,    77,     0,     0,     0,     0,
      78,     0,    79,    80,    81,    82,    83,    60,    84,     0,
       0,     0,     0,    85,     0,     0,    86,  -171,     0,    61,
       0,     0,     0,    62,    63,    64,     0,    65,    66,    67,
    -221,  -221,    68,    69,    70,    71,    72,     0,    73,  -179,
      74,    75,    76,    77,     0,     0,     0,     0,    78,     0,
      79,    80,    81,    82,    83,    60,    84,     0,     0,     0,
       0,    85,     0,     0,    86,  -221,     0,    61,     0,     0,
       0,    62,    63,    64,     0,    65,    66,    67,  -220,  -220,
      68,    69,    70,    71,    72,     0,    73,  -179,    74,    75,
      76,    77,     0,     0,     0,     0,    78,     0,    79,    80,
      81,    82,    83,    60,    84,     0,     0,     0,     0,    85,
       0,     0,    86,  -220,     0,    61,     0,     0,     0,    62,
      63,    64,     0,    65,    66,    67,  -219,  -219,    68,    69,
      70,    71,    72,     0,    73,  -179,    74,    75,    76,    77,
       0,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,    60,    84,     0,     0,     0,     0,    85,     0,     0,
      86,  -219,     0,    61,     0,     0,     0,    62,    63,    64,
       0,    65,    66,    67,     0,     0,    68,    69,    70,    71,
      72,     0,    73,  -179,    74,    75,    76,    77,     0,     0,
       0,     0,    78,     0,    79,    80,    81,    82,    83,    60,
      84,     0,     0,     0,     0,    85,     0,     0,    86,  -172,
       0,    61,     0,     0,     0,    62,    63,    64,     0,    65,
      66,    67,     0,     0,    68,    69,    70,    71,    72,     0,
      73,  -179,    74,    75,    76,    77,     0,     0,     0,     0,
      78,     0,    79,    80,    81,    82,    83,    60,    84,     0,
       0,     0,     0,    85,     0,     0,    86,  -170,     0,    61,
       0,     0,     0,    62,    63,    64,     0,    65,    66,    67,
     427,     0,    68,    69,    70,    71,    72,     0,    73,  -179,
      74,    75,    76,    77,     0,     0,     0,     0,    78,     0,
      79,    80,    81,    82,    83,    60,    84,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    61,     0,     0,
       0,    62,    63,    64,     0,    65,    66,    67,     0,     0,
      68,    69,    70,    71,    72,     0,    73,  -179,    74,    75,
      76,    77,     0,     0,     0,     0,    78,     0,    79,    80,
      81,    82,    83,   420,    84,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    61,     0,     0,     0,    62,
      63,    64,     0,    65,    66,    67,     0,     0,    68,    69,
      70,    71,    72,     0,    73,  -179,    74,    75,    76,    77,
       0,   180,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,    84,    61,     0,     0,     0,    85,     0,     0,
      86,   196,   197,   198,   199,   200,   201,    69,    70,     0,
       0,     0,    73,  -179,    74,    75,    76,    77,   346,     0,
       0,     0,    78,     0,    79,    80,    81,    82,    83,     0,
      61,     0,     0,     0,     0,    85,     0,     0,   238,   197,
     198,   199,   200,   201,    69,    70,     0,     0,     0,    73,
    -179,    74,    75,    76,    77,     0,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,     0,    85,   188,     0,   238,     6,    36,     8,     9,
       0,     0,     0,   328,    11,    61,  -108,  -108,  -108,  -108,
       0,   329,   330,   331,  -108,     0,  -108,     0,   172,    69,
      70,     0,     0,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,  -108,    79,    80,    81,    82,
      83,     0,     0,   271,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,  -206,   282,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,   -87,     0,   315,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,  -206,   271,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,   -87,     0,   425,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,  -206,   271,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,  -206,   476,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,  -206,     0,   180,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,  -206,     0,   271,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,     0,   275,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,     0,   278,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,     0,   280,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,     0,   288,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,     0,   290,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,     0,   296,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,     0,   300,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
      61,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,     0,   319,    69,    70,     0,    85,     0,    73,
    -179,    74,    75,    76,    77,    61,     0,     0,     0,    78,
       0,    79,    80,    81,    82,    83,     0,     0,     0,    69,
      70,     0,    85,     0,    73,  -179,    74,    75,    76,    77,
     450,     0,     0,     0,    78,     0,    79,    80,    81,    82,
      83,     0,     0,   151,     0,     0,     0,    85,   152,   153,
     154,   155,   156,   157,   158,   159,     0,     0,   160,     0,
     161,   162,   163,   164,   151,   165,     0,     0,     0,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,   160,
       0,   371,   162,   163,   164,     0,   165,     0,     0,   151,
       0,     0,     0,   372,   152,   153,   154,   155,   156,   157,
     158,   159,     0,     0,   160,     0,   161,   162,   163,   164,
       0,   165,   151,     0,     0,   250,     0,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,   160,     0,   161,
     162,   163,   164,     0,   165,   151,     0,     0,   252,     0,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
     160,     0,   161,   162,   163,   164,     0,   165,   151,     0,
       0,   256,     0,   152,   153,   154,   155,   156,   157,   158,
     159,     0,     0,   160,     0,   161,   162,   163,   164,     0,
     165,   151,     0,     0,   258,     0,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,     0,   161,   162,
     163,   164,     0,   165,   151,     0,     0,   307,     0,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,   160,
       0,     0,   162,   411,     0,     0,   165,   151,     0,     0,
     412,     0,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,   160,     0,     0,   162,   163,   164,   151,   165,
     305,     0,     0,   152,   153,   154,   155,   156,   157,   158,
     159,     0,     0,   160,     0,     0,   162,   163,   164,   151,
     165,   379,     0,     0,   152,   153,   154,   155,   156,   157,
     158,   159,     0,     0,   160,     0,   161,   162,   163,   164,
     151,   165,     0,     0,     0,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,   160,     0,   285,   162,   163,
     164,   151,   165,     0,     0,     0,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,   302,     0,   162,
     163,   164,   151,   165,     0,     0,     0,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,   160,   356,     0,
     162,   163,   164,   151,   165,     0,     0,     0,   152,   153,
     154,   155,   156,   157,   158,   159,     0,     0,   160,   358,
       0,   162,   163,   164,   151,   165,     0,     0,     0,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,   160,
       0,   360,   162,   163,   164,   151,   165,     0,     0,     0,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
     160,   363,     0,   162,   163,   164,   151,   165,     0,     0,
       0,   152,   153,   154,   155,   156,   157,   158,   159,     0,
       0,   160,   365,     0,   162,   163,   164,   151,   165,     0,
       0,     0,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,   160,   375,     0,   162,   163,   164,   151,   165,
       0,     0,     0,   152,   153,   154,   155,   156,   157,   158,
     159,     0,     0,   160,   377,     0,   162,   163,   164,   151,
     165,     0,     0,     0,   152,   153,   154,   155,   156,   157,
     158,   159,     0,     0,   160,     0,   453,   162,   163,   164,
     151,   165,     0,     0,     0,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,   160,   493,     0,   162,   163,
     164,   151,   165,     0,     0,     0,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,     0,     0,   162,
     163,   164,   151,   165,     0,     0,     0,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,   160,     0,     0,
     162,   151,   164,     0,   165,     0,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,     0,     0,   162,
       0,     0,     0,   165
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-396))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-244))

static const yytype_int16 yycheck[] =
{
       2,    17,    94,     5,   170,    96,    35,    17,   118,   349,
     230,   351,   213,   333,   260,   160,   238,   263,    13,    50,
      24,    37,    51,    52,    48,    54,    55,     1,     1,    24,
      25,    62,   427,   120,    58,     1,    68,     1,     0,   126,
       4,     5,     6,     7,     9,    10,    11,    49,    12,    13,
       1,    83,    31,    85,    58,     1,    16,    86,   203,    33,
      24,    25,     1,   458,    59,    94,    51,    13,     1,    33,
      55,    17,    18,    19,   394,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    58,    32,    33,    34,    35,
      36,    37,    58,    95,    59,    59,    42,    57,    44,    45,
      46,    47,    48,   349,    50,   215,    48,    58,     1,    55,
     120,   113,    58,   129,     1,    54,   126,    50,    60,    58,
     211,   322,    55,    16,     4,     5,     6,     7,   160,    16,
     463,   163,    12,   165,   164,   245,   168,   169,   170,   171,
      33,   143,    52,    50,   176,   177,    33,   179,   150,    59,
      34,    33,   485,    33,    61,   187,    78,    79,    80,    81,
      33,     1,    49,   503,    57,    52,   499,   500,    55,    50,
      57,   203,    56,    13,   206,   205,   208,    58,    33,    59,
      24,    25,     1,    78,    79,    33,    81,   407,   408,   411,
      33,   413,    32,    33,   360,   361,    51,    16,    52,    50,
      55,   123,    50,   213,    52,    59,     1,    47,   210,     4,
       5,     6,     7,   223,    33,    49,     1,    12,    52,     4,
       5,     6,     7,   225,    50,    33,    33,    12,   123,    55,
     152,   153,   154,   155,   156,   157,   158,    48,    33,     1,
       1,   243,    50,    50,    52,    52,   248,     1,    33,    51,
      52,    13,    54,    55,    49,    16,   178,   152,   153,   154,
     155,   156,   157,   158,    49,   356,   357,   358,   359,    52,
      32,    33,    33,    56,   196,   197,   198,   199,   200,   201,
      34,    35,    36,    37,    86,    47,   452,   453,   454,     1,
      58,    33,     4,     5,     6,     7,    49,    48,     1,    52,
      12,   196,   197,   198,   199,   200,   201,   417,    50,     1,
      52,    58,   322,    16,     1,     1,   238,     4,     5,     6,
       7,    33,    52,     1,    16,    12,    56,    52,   360,   361,
      33,   333,    49,   349,    59,   351,    53,    49,    16,    58,
     372,    33,   374,   238,    49,    16,    33,    52,    34,    35,
      36,    37,    50,    49,    52,    33,    52,     1,   449,   450,
     451,    50,    49,    52,     1,    48,     3,     4,     5,     6,
       7,     8,    16,    33,   384,    12,   386,    14,    15,     1,
     396,    53,     4,     5,     6,     7,   396,   478,   479,    33,
      12,   483,   394,    52,    49,    49,    33,    52,    52,   428,
     491,   492,   493,   494,   478,   479,    45,   499,   500,    48,
     501,    33,    51,    48,    53,    49,    55,   508,    52,   510,
     452,   453,   454,    50,     4,     5,     6,     7,    48,    50,
       1,   460,    12,    45,    14,    49,    48,    48,    52,    51,
      48,   443,    13,    55,    49,    48,   368,    52,   370,    49,
      33,    48,    52,    33,   470,    49,    27,    28,    52,   461,
      61,    32,    33,    34,    35,    36,    37,    50,    51,    62,
      48,    42,    55,    44,    45,    46,    47,    48,    61,   368,
      49,   370,   484,    52,    55,    56,    59,   503,   490,   411,
      50,   413,    52,     4,     5,     6,     7,     4,     5,     6,
       7,    12,    50,     1,    52,    12,     4,     5,     6,     7,
      40,    41,    42,    43,    12,    13,   411,    33,   413,    17,
      18,    19,    33,    21,    22,    23,    33,    49,    26,    27,
      28,    29,    30,    50,    32,    33,    34,    35,    36,    37,
      40,    41,    42,    43,    42,    33,    44,    45,    46,    47,
      48,    50,    50,    49,    58,    49,    52,    55,    52,     1,
      58,    59,     4,     5,     6,     7,    50,   372,    52,   374,
      12,    13,    50,    50,    50,    17,    18,    19,    50,    21,
      22,    23,    33,    33,    26,    27,    28,    29,    30,    59,
      32,    33,    34,    35,    36,    37,    59,    59,    59,    33,
      42,    33,    44,    45,    46,    47,    48,    33,    50,    52,
      33,    50,    43,    55,    49,     1,    58,    59,     4,     5,
       6,     7,    59,    56,    33,     0,    12,    13,    55,    59,
      58,    17,    18,    19,    49,    21,    22,    23,    50,    49,
      26,    27,    28,    29,    30,    50,    32,    33,    34,    35,
      36,    37,    59,    54,    54,    54,    42,    33,    44,    45,
      46,    47,    48,    33,    50,    48,    50,    56,    20,    55,
      20,     1,    58,    59,     4,     5,     6,     7,    50,    50,
      23,    50,    12,    13,    50,    33,    54,    17,    18,    19,
      54,    21,    22,    23,    59,    54,    26,    27,    28,    29,
      30,    59,    32,    33,    34,    35,    36,    37,    48,    48,
      54,    49,    42,    49,    44,    45,    46,    47,    48,    54,
      50,    49,     1,    49,   394,    55,    83,     1,    58,    59,
       4,     5,     6,     7,   332,   225,     2,   395,    12,    13,
       2,     2,   512,    17,    18,    19,   428,    21,    22,    23,
     460,    -1,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    55,    -1,     1,    58,    59,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    55,    -1,     1,
      58,    59,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    23,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,    44,    45,    46,    47,    48,     1,    50,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    13,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,     1,    50,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    13,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    48,     1,    50,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    13,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,     1,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    13,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,     1,
      50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    23,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,    44,    45,    46,    47,    48,     1,    50,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    13,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,     1,    50,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    13,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    23,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    48,     1,    50,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    13,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,     1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    50,    13,    -1,    -1,    -1,    55,    -1,    -1,
      58,    38,    39,    40,    41,    42,    43,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,     1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,    -1,
      13,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    39,
      40,    41,    42,    43,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,     1,    -1,    58,     4,     5,     6,     7,
      -1,    -1,    -1,     1,    12,    13,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    -1,     1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    33,    44,    45,    46,    47,
      48,    -1,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    50,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    49,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    50,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    49,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    50,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    50,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    49,    -1,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    49,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,     1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      13,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,     1,    27,    28,    -1,    55,    -1,    32,
      33,    34,    35,    36,    37,    13,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    27,
      28,    -1,    55,    -1,    32,    33,    34,    35,    36,    37,
      20,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    33,    -1,    -1,    -1,    55,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    33,    55,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    -1,    55,    -1,    -1,    33,
      -1,    -1,    -1,    62,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      -1,    55,    33,    -1,    -1,    59,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    -1,    55,    33,    -1,    -1,    59,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    -1,    55,    33,    -1,
      -1,    59,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    50,    51,    52,    53,    -1,
      55,    33,    -1,    -1,    59,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    -1,    55,    33,    -1,    -1,    59,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      -1,    -1,    51,    52,    -1,    -1,    55,    33,    -1,    -1,
      59,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    48,    -1,    -1,    51,    52,    53,    33,    55,
      56,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    33,
      55,    56,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      33,    55,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    33,    55,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    33,    55,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    49,    -1,
      51,    52,    53,    33,    55,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    33,    55,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    33,    55,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    33,    55,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    33,    55,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    33,    55,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    48,    49,    -1,    51,    52,    53,    33,
      55,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      33,    55,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    48,    49,    -1,    51,    52,
      53,    33,    55,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    33,    55,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,
      51,    33,    53,    -1,    55,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,     1,     3,     4,     5,     6,     7,
       8,    12,    14,    15,    33,    67,    68,    69,    70,    74,
      87,   102,   103,   104,   107,   108,   109,   112,   113,   114,
     115,   119,   143,   144,    48,    58,     5,    69,    31,    33,
      33,    33,     1,    16,    71,    96,   110,   111,    50,    48,
      50,    58,    58,    48,    58,    58,     1,    49,    69,   117,
       1,    13,    17,    18,    19,    21,    22,    23,    26,    27,
      28,    29,    30,    32,    34,    35,    36,    37,    42,    44,
      45,    46,    47,    48,    50,    55,    58,    79,    80,    81,
      82,    84,    85,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   130,   136,   137,   142,    71,    48,     1,    54,
      88,    89,     1,    58,    98,     1,    58,    75,    33,    50,
      52,    33,   116,    53,    77,    50,    52,     1,    49,    69,
     105,   117,     1,   120,     1,   120,     1,    49,   117,     1,
     120,     1,   120,    52,     1,    57,    71,    96,   118,    49,
      52,    33,    38,    39,    40,    41,    42,    43,    44,    45,
      48,    50,    51,    52,    53,    55,    50,    50,    48,    48,
      48,    48,     1,    81,   122,   129,    48,    48,    61,    62,
       1,    79,    80,    79,     1,    80,    79,    48,     1,    70,
      81,     1,    81,    83,     1,   120,    38,    39,    40,    41,
      42,    43,    45,    48,    51,    53,    55,    50,    52,    59,
     122,   123,    33,    69,   124,    33,    49,    50,    33,    50,
      58,    50,     1,    69,    94,    99,   100,    50,    50,     1,
      33,    76,    50,    72,   111,    60,    72,    33,    58,    78,
      79,   111,    49,    52,    57,    71,   106,    49,    52,    49,
      59,    59,    59,    59,    49,    49,    59,    59,    59,    59,
      69,    33,    33,    69,    79,    79,    79,    79,    79,    79,
      79,     1,    83,    33,    81,     1,    82,    81,     1,    81,
       1,    81,     1,   129,    81,    50,    33,    50,     1,    81,
       1,    81,     1,    80,   138,   139,     1,    81,   140,   141,
       1,    81,    49,    49,    49,    56,    56,    59,    59,    79,
      79,    79,    79,    79,    79,     1,    83,    33,    82,     1,
      81,    81,    69,     1,    95,    96,     1,    72,     1,     9,
      10,    11,    90,    91,    59,     1,    95,    59,   100,    52,
      59,    77,    52,    59,    55,    73,     1,    78,    86,    69,
      72,    69,   118,   118,    49,    56,    49,    49,    49,    49,
      50,    50,    49,    49,    49,    49,    49,    50,    61,    50,
      61,    50,    62,    50,    62,    49,    49,    49,    49,    56,
      56,     1,    95,    50,    52,    50,    52,    50,    50,    59,
      54,    54,    54,    59,    91,    14,    69,    92,    93,    94,
      97,   101,   102,   104,   107,    50,    50,    33,    33,    34,
      56,    52,    59,    52,    59,   106,    57,    71,   106,   124,
       1,   124,   124,   124,   129,     1,   129,    24,    58,   131,
     135,   139,   139,   141,   141,    50,    50,    96,    96,    92,
       1,    98,    71,    48,    77,    77,    56,    78,    78,    20,
      20,    20,    50,    50,    50,     1,    84,     1,    24,    25,
     121,   122,   132,   133,   134,    23,    50,    50,    33,     1,
      69,   124,   124,   124,   129,   129,     1,   129,    54,    54,
      59,     1,    84,    54,   122,   133,    59,   134,    48,    49,
      52,    49,    49,    49,    49,   124,   135,   124,   135,    54,
      54,   123,     1,    69,   124,   124,   124,   124,   123,   134,
     123,   134,    49,   131
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:

/* Line 1806 of yacc.c  */
#line 113 "syntax.y"
    {yyerrok; yyerror("expected dims");}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 140 "syntax.y"
    {yyerrok; yyerror("error in enum_body");}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 144 "syntax.y"
    {yyerrok; yyerror("error in id_list");}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 148 "syntax.y"
    {yyerrok; yyerror("error in id_list");}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 158 "syntax.y"
    {yyerrok; yyerror("error in init_values");}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 162 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 164 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 166 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 168 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 170 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 172 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 174 "syntax.y"
    {yyerrok; yyerror("error declaring expression");}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 179 "syntax.y"
    {yyerrok; yyerror("error declaring variable");}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 182 "syntax.y"
    {yyerrok; yyerror("error declaring variable");}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 183 "syntax.y"
    {yyerrok; yyerror("error in expression_list");}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 185 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 187 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 191 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression or standard_type");}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 196 "syntax.y"
    {yyerrok; yyerror("error declaring variable");}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 197 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 199 "syntax.y"
    {yyerrok; yyerror("error declaring variable");}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 201 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 203 "syntax.y"
    {yyerrok; yyerror("error in decltype");}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 208 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 213 "syntax.y"
    {yyerrok; yyerror("error declaring variable");}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 228 "syntax.y"
    {yyerrok; yyerror("error in expression_list");}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 232 "syntax.y"
    {yyerrok; yyerror("error in init_values");}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 237 "syntax.y"
    {yyerrok; yyerror("error in class_body");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 241 "syntax.y"
    {yyerrok; yyerror("error in members_methods");}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 267 "syntax.y"
    {yyerrok; yyerror("error in variabledefs");}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 271 "syntax.y"
    {yyerrok; yyerror("error in variabledefs");}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 276 "syntax.y"
    {yyerrok; yyerror("error in listspec");}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 280 "syntax.y"
    {yyerrok; yyerror("error in union_body");}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 284 "syntax.y"
    {yyerrok; yyerror("error in fields");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 302 "syntax.y"
    {yyerrok; yyerror("error in parameter_types");}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 309 "syntax.y"
    {yyerrok; yyerror("error in parameter_types");}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 321 "syntax.y"
    {yyerrok; yyerror("error in union_body");}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 325 "syntax.y"
    {yyerrok; yyerror("error in init_variabledefs");}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 329 "syntax.y"
    {yyerrok; yyerror("error in init_variabledefs");}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 341 "syntax.y"
    {yyerrok; yyerror("error in decl_statements");}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 343 "syntax.y"
    {yyerrok; yyerror("error in decl_statements");}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 345 "syntax.y"
    {yyerrok; yyerror("error in decl_statements");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 346 "syntax.y"
    {yyerrok; yyerror("error in full or nopar_class_func_header or nopar_func_header");}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 350 "syntax.y"
    {yyerrok; yyerror("error in parameter_list");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 352 "syntax.y"
    {yyerrok; yyerror("error in parameter_list");}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 353 "syntax.y"
    {yyerrok; yyerror("error in class_func_header_start or func_header_start");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 363 "syntax.y"
    {yyerrok; yyerror("error in parameter_list");}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 372 "syntax.y"
    {yyerrok; yyerror("error in class_func_header_start");}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 382 "syntax.y"
    {yyerrok; yyerror("error in variabledefs");}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 384 "syntax.y"
    {yyerrok; yyerror("error in variabledefs");}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 409 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 413 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 414 "syntax.y"
    {yyerrok; yyerror("error in statement");}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 419 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 423 "syntax.y"
    {yyerrok; yyerror("error in optexpr");}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 424 "syntax.y"
    {yyerrok; yyerror("error in optexpr");}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 425 "syntax.y"
    {yyerrok; yyerror("error in optexpr");}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 433 "syntax.y"
    {yyerrok; yyerror("error declaring general_expression");}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 437 "syntax.y"
    {yyerrok; yyerror("error in decl_cases");}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 452 "syntax.y"
    {yyerrok; yyerror("error declaring constant");}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 454 "syntax.y"
    {yyerrok; yyerror("error declaring constant");}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 459 "syntax.y"
    {yyerrok; yyerror("error declaring constant");}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 461 "syntax.y"
    {yyerrok; yyerror("error declaring constant");}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 465 "syntax.y"
    {yyerrok; yyerror("error in optexpr");}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 469 "syntax.y"
    {yyerrok; yyerror("error in in_list");}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 471 "syntax.y"
    {yyerrok; yyerror("error in out_list");}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 475 "syntax.y"
    {yyerrok; yyerror("error in in_list");}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 483 "syntax.y"
    {yyerrok; yyerror("error in out_list");}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 491 "syntax.y"
    {yyerrok; yyerror("error in decl_statements");}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 495 "syntax.y"
    {yyerrok; yyerror("error declaring main_header");}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 496 "syntax.y"
    {yyerrok; yyerror("error in decl_statements");}
    break;



/* Line 1806 of yacc.c  */
#line 2780 "syntax.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 501 "syntax.y"


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

