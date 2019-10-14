/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ERROR = 258,
     ADD = 259,
     SUB = 260,
     MUL = 261,
     DIV = 262,
     LT = 263,
     LTE = 264,
     GT = 265,
     GTE = 266,
     EQ = 267,
     NEQ = 268,
     ASSIN = 269,
     SEMICOLON = 270,
     COMMA = 271,
     LPARENTHESE = 272,
     RPARENTHESE = 273,
     LBRACKET = 274,
     RBRACKET = 275,
     LBRACE = 276,
     RBRACE = 277,
     ELSE = 278,
     IF = 279,
     INT = 280,
     RETURN = 281,
     VOID = 282,
     WHILE = 283,
     ID = 284,
     NUMBER = 285,
     LETTER = 286,
     ARRAY = 287,
     EOL = 288,
     COMMENT = 289,
     BLANK = 290,
     LOWER_THAN_ELSE = 291
   };
#endif
/* Tokens.  */
#define ERROR 258
#define ADD 259
#define SUB 260
#define MUL 261
#define DIV 262
#define LT 263
#define LTE 264
#define GT 265
#define GTE 266
#define EQ 267
#define NEQ 268
#define ASSIN 269
#define SEMICOLON 270
#define COMMA 271
#define LPARENTHESE 272
#define RPARENTHESE 273
#define LBRACKET 274
#define RBRACKET 275
#define LBRACE 276
#define RBRACE 277
#define ELSE 278
#define IF 279
#define INT 280
#define RETURN 281
#define VOID 282
#define WHILE 283
#define ID 284
#define NUMBER 285
#define LETTER 286
#define ARRAY 287
#define EOL 288
#define COMMENT 289
#define BLANK 290
#define LOWER_THAN_ELSE 291




/* Copy the first part of user declarations.  */
#line 1 "syntax_analyzer.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common/common.h"
#include "syntax_tree/SyntaxTree.h"

#include "lab1_lexical_analyzer/lexical_analyzer.h"

// external functions from lex
extern int yylex();
extern int yyparse();
extern int yyrestart();
extern FILE * yyin;

// external variables from lexical_analyzer module
extern int lines;
extern char * yytext;

// Global syntax tree.
SyntaxTree * gt;

void yyerror(const char * s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "syntax_analyzer.y"
{
/********** TODO: Fill in this union structure *********/
    SyntaxTreeNode * node;
}
/* Line 193 of yacc.c.  */
#line 199 "/Users/mac/Compilers/compiler_cminus/build/lab2_syntax_analyzer/syntax_analyzer.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 212 "/Users/mac/Compilers/compiler_cminus/build/lab2_syntax_analyzer/syntax_analyzer.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   98

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  104

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      27,    29,    36,    38,    40,    44,    46,    49,    53,    58,
      61,    63,    66,    68,    70,    72,    74,    76,    78,    81,
      83,    89,    97,   103,   106,   110,   114,   116,   118,   123,
     127,   129,   131,   133,   135,   137,   139,   141,   145,   147,
     149,   151,   155,   157,   159,   161,   165,   167,   169,   171,
     176,   178,   180,   184,   186
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,    39,    -1,    39,    40,    -1,    40,    -1,
      41,    -1,    43,    -1,    42,    29,    15,    -1,    42,    29,
      19,    30,    20,    15,    -1,    25,    -1,    27,    -1,    42,
      29,    17,    44,    18,    47,    -1,    45,    -1,    27,    -1,
      45,    16,    46,    -1,    46,    -1,    42,    29,    -1,    42,
      29,    32,    -1,    21,    48,    49,    22,    -1,    48,    41,
      -1,    67,    -1,    49,    50,    -1,    67,    -1,    51,    -1,
      47,    -1,    52,    -1,    53,    -1,    54,    -1,    55,    15,
      -1,    15,    -1,    24,    17,    55,    18,    50,    -1,    24,
      17,    55,    18,    50,    23,    50,    -1,    28,    17,    55,
      18,    50,    -1,    26,    15,    -1,    26,    55,    15,    -1,
      56,    14,    55,    -1,    57,    -1,    29,    -1,    29,    19,
      55,    20,    -1,    59,    58,    59,    -1,    59,    -1,     9,
      -1,     8,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    59,    60,    61,    -1,    61,    -1,     4,    -1,     5,
      -1,    61,    62,    63,    -1,    63,    -1,     6,    -1,     7,
      -1,    17,    55,    18,    -1,    56,    -1,    64,    -1,    30,
      -1,    29,    17,    65,    18,    -1,    66,    -1,    67,    -1,
      66,    16,    55,    -1,    55,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    43,    44,    46,    47,    49,    50,    52,
      53,    55,    57,    58,    60,    61,    63,    64,    66,    68,
      69,    71,    72,    74,    75,    76,    77,    78,    80,    81,
      83,    84,    86,    88,    89,    91,    92,    94,    95,    97,
      98,   100,   101,   102,   103,   104,   105,   107,   108,   110,
     111,   113,   114,   116,   117,   119,   120,   121,   122,   124,
     126,   127,   129,   130,   132
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ERROR", "ADD", "SUB", "MUL", "DIV",
  "LT", "LTE", "GT", "GTE", "EQ", "NEQ", "ASSIN", "SEMICOLON", "COMMA",
  "LPARENTHESE", "RPARENTHESE", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE",
  "ELSE", "IF", "INT", "RETURN", "VOID", "WHILE", "ID", "NUMBER", "LETTER",
  "ARRAY", "EOL", "COMMENT", "BLANK", "LOWER_THAN_ELSE", "$accept",
  "program", "declaration_list", "declaration", "var_declaration",
  "type_specifier", "fun_declaration", "params", "param_list", "param",
  "compound_stmt", "local_declarations", "statement_list", "statement",
  "expression_stmt", "selection_stmt", "iteration_stmt", "return_stmt",
  "expression", "var", "simple_expression", "relop", "additive_expression",
  "addop", "term", "mulop", "factor", "call", "args", "arg_list",
  "epsilon", 0
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    41,    41,    42,
      42,    43,    44,    44,    45,    45,    46,    46,    47,    48,
      48,    49,    49,    50,    50,    50,    50,    50,    51,    51,
      52,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    63,    63,    64,
      65,    65,    66,    66,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     6,     1,     1,     3,     1,     2,     3,     4,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     7,     5,     2,     3,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     1,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    10,     0,     2,     4,     5,     0,     6,     1,
       3,     0,     7,     0,     0,    10,     0,     0,    12,    15,
       0,    16,     0,     0,     0,    17,    64,    11,    14,     8,
      64,    20,    19,     0,     0,    22,     0,    29,     0,    18,
       0,     0,     0,    37,    58,    24,    21,    23,    25,    26,
      27,     0,    56,    36,    40,    48,    52,    57,     0,     0,
      33,     0,     0,    64,     0,    28,     0,    49,    50,    42,
      41,    43,    44,    45,    46,     0,     0,    53,    54,     0,
      55,     0,    34,     0,    63,     0,    60,    61,     0,    35,
      56,    39,    47,    51,     0,     0,    59,     0,    38,    30,
      32,    62,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    17,    18,    19,
      45,    30,    34,    46,    47,    48,    49,    50,    51,    52,
      53,    75,    54,    76,    55,    79,    56,    57,    85,    86,
      31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int8 yypact[] =
{
       5,   -90,   -90,    20,     5,   -90,   -90,    -2,   -90,   -90,
     -90,    -8,   -90,    22,    16,    33,    26,    40,    51,   -90,
      53,    42,    54,     5,    61,   -90,   -90,   -90,   -90,   -90,
       5,   -90,   -90,    48,    14,   -90,    18,   -90,   -13,   -90,
      62,    -7,    64,    49,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,    65,    68,   -90,    52,    63,   -90,   -90,    60,   -13,
     -90,    69,   -13,   -13,   -13,   -90,   -13,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -13,   -13,   -90,   -90,   -13,
     -90,    70,   -90,    71,   -90,    72,    75,   -90,    66,   -90,
     -90,    67,    63,   -90,    24,    24,   -90,   -13,   -90,    73,
     -90,   -90,    24,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -90,   -90,   -90,    79,    55,   -11,   -90,   -90,   -90,    74,
      76,   -90,   -90,   -89,   -90,   -90,   -90,   -90,   -38,   -61,
     -90,   -90,    12,   -90,    17,   -90,    13,   -90,   -90,   -90,
     -29
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -14
static const yytype_int8 yytable[] =
{
      58,    35,    16,    61,    38,    99,   100,    12,    60,    13,
      38,    14,    16,   103,    90,    90,    43,    44,    90,    33,
       9,    81,    43,    44,    83,    84,    88,    11,    89,    37,
       1,    38,     2,    12,    87,    26,    39,    14,    40,    37,
      41,    38,    42,    43,    44,    26,    20,     1,    40,    15,
      41,   -13,    42,    43,    44,    21,    67,    68,    22,   101,
      69,    70,    71,    72,    73,    74,    63,    23,    64,    77,
      78,    67,    68,    24,    25,    26,    29,    36,    80,    59,
      65,    62,    66,    10,    82,    32,    98,    91,    94,    95,
      96,    97,    93,    92,     0,     0,   102,    28,    27
};

static const yytype_int8 yycheck[] =
{
      38,    30,    13,    41,    17,    94,    95,    15,    15,    17,
      17,    19,    23,   102,    75,    76,    29,    30,    79,    30,
       0,    59,    29,    30,    62,    63,    64,    29,    66,    15,
      25,    17,    27,    15,    63,    21,    22,    19,    24,    15,
      26,    17,    28,    29,    30,    21,    30,    25,    24,    27,
      26,    18,    28,    29,    30,    29,     4,     5,    18,    97,
       8,     9,    10,    11,    12,    13,    17,    16,    19,     6,
       7,     4,     5,    20,    32,    21,    15,    29,    18,    17,
      15,    17,    14,     4,    15,    30,    20,    75,    18,    18,
      18,    16,    79,    76,    -1,    -1,    23,    23,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    27,    38,    39,    40,    41,    42,    43,     0,
      40,    29,    15,    17,    19,    27,    42,    44,    45,    46,
      30,    29,    18,    16,    20,    32,    21,    47,    46,    15,
      48,    67,    41,    42,    49,    67,    29,    15,    17,    22,
      24,    26,    28,    29,    30,    47,    50,    51,    52,    53,
      54,    55,    56,    57,    59,    61,    63,    64,    55,    17,
      15,    55,    17,    17,    19,    15,    14,     4,     5,     8,
       9,    10,    11,    12,    13,    58,    60,     6,     7,    62,
      18,    55,    15,    55,    55,    65,    66,    67,    55,    55,
      56,    59,    61,    63,    18,    18,    18,    16,    20,    50,
      50,    55,    23,    50
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 41 "syntax_analyzer.y"
    {gt->root = newSyntaxTreeNode("program"); SyntaxTreeNode_AddChild(gt->root, (yyvsp[(1) - (1)].node));;}
    break;

  case 3:
#line 43 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("declaration-list"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (2)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (2)].node));;}
    break;

  case 4:
#line 44 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("declaration-list"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 5:
#line 46 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("declaration");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 6:
#line 47 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("declaration");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 7:
#line 49 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("var-declaration"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 8:
#line 50 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("var-declaration"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (6)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(5) - (6)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(6) - (6)].node));;}
    break;

  case 9:
#line 52 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("type-specifier"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 10:
#line 53 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("type-specifier"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 11:
#line 55 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("fun-declaration"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(5) - (6)].node)); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(6) - (6)].node));;}
    break;

  case 12:
#line 57 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("params"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 13:
#line 58 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("params"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 14:
#line 60 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("param-list"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 15:
#line 61 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("param-list"); SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 16:
#line 63 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("param");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (2)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (2)].node));;}
    break;

  case 17:
#line 64 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("param");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 18:
#line 66 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("compound-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (4)].node));;}
    break;

  case 19:
#line 68 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("local-declarations");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (2)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (2)].node));;}
    break;

  case 20:
#line 69 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("local-declarations");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 21:
#line 71 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement-list");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (2)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (2)].node));;}
    break;

  case 22:
#line 72 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement-list");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 23:
#line 74 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 24:
#line 75 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 25:
#line 76 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 26:
#line 77 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 27:
#line 78 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("statement");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 28:
#line 80 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("expression-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (2)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (2)].node));;}
    break;

  case 29:
#line 81 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("expression-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 30:
#line 83 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("selection-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(5) - (5)].node));;}
    break;

  case 31:
#line 84 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("selection-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (7)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (7)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (7)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (7)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(5) - (7)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(6) - (7)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(7) - (7)].node));;}
    break;

  case 32:
#line 86 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("iteration-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (5)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(5) - (5)].node));;}
    break;

  case 33:
#line 88 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("return-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (2)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (2)].node));;}
    break;

  case 34:
#line 89 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("return-stmt");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 35:
#line 91 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("expression");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 36:
#line 92 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("expression");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 37:
#line 94 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("var");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 38:
#line 95 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("var");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (4)].node));;}
    break;

  case 39:
#line 97 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("simple-expression");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 40:
#line 98 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("simple-expression");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 41:
#line 100 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("relop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 42:
#line 101 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("relop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 43:
#line 102 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("relop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 44:
#line 103 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("relop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 45:
#line 104 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("relop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 46:
#line 105 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("relop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 47:
#line 107 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("additive-expression");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 48:
#line 108 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("additive-expression");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 49:
#line 110 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("addop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 50:
#line 111 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("addop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 51:
#line 113 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("term");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 52:
#line 114 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("term");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 53:
#line 116 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("mulop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 54:
#line 117 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("mulop");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 55:
#line 119 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("factor");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 56:
#line 120 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("factor");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 57:
#line 121 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("factor");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 58:
#line 122 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("factor");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 59:
#line 124 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("call");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (4)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(4) - (4)].node));;}
    break;

  case 60:
#line 126 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("args");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 61:
#line 127 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("args");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 62:
#line 129 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("arg-list");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(2) - (3)].node));SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(3) - (3)].node));;}
    break;

  case 63:
#line 130 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("arg-list");SyntaxTreeNode_AddChild((yyval.node), (yyvsp[(1) - (1)].node));;}
    break;

  case 64:
#line 132 "syntax_analyzer.y"
    {(yyval.node) = newSyntaxTreeNode("epsilon");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1819 "/Users/mac/Compilers/compiler_cminus/build/lab2_syntax_analyzer/syntax_analyzer.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 134 "syntax_analyzer.y"


void yyerror(const char * s)
{
	// TODO: variables in Lab1 updates only in analyze() function in lexical_analyzer.l
	//       You need to move position updates to show error output below
	fprintf(stderr, "%s:%d syntax error for %s\n", s, lines, yytext);
}

/// \brief Syntax analysis from input file to output file
///
/// \param input basename of input file
/// \param output basename of output file
void syntax(const char * input, const char * output)
{
	gt = newSyntaxTree();

	char inputpath[256] = "./testcase/";
	char outputpath[256] = "./syntree/";
	strcat(inputpath, input);
	strcat(outputpath, output);

	if (!(yyin = fopen(inputpath, "r"))) {
		fprintf(stderr, "[ERR] Open input file %s failed.", inputpath);
		exit(1);
	}
	yyrestart(yyin);
	printf("[START]: Syntax analysis start for %s\n", input);
	FILE * fp = fopen(outputpath, "w+");
	if (!fp)	return;

	// yyerror() is invoked when yyparse fail. If you still want to check the return value, it's OK.
	// `while (!feof(yyin))` is not needed here. We only analyze once.
	yyparse();

	printf("[OUTPUT] Printing tree to output file %s\n", outputpath);
	printSyntaxTree(fp, gt);
	deleteSyntaxTree(gt);
	gt = 0;

	fclose(fp);
	printf("[END] Syntax analysis end for %s\n", input);
}

/// \brief starting function for testing syntax module.
///
/// Invoked in test_syntax.c
int syntax_main(int argc, char ** argv)
{
	char filename[50][256];
	char output_file_name[256];
	const char * suffix = ".syntax_tree";
	int fn = getAllTestcase(filename);
	for (int i = 0; i < fn; i++) {
			int name_len = strstr(filename[i], ".cminus") - filename[i];
			strncpy(output_file_name, filename[i], name_len);
			strcpy(output_file_name+name_len, suffix);
			syntax(filename[i], output_file_name);
	}
	return 0;
}

