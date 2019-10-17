/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "syntax_analyzer.y"
{
/********** TODO: Fill in this union structure *********/
    SyntaxTreeNode * node;
}
/* Line 1529 of yacc.c.  */
#line 126 "/studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer/syntax_analyzer.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

