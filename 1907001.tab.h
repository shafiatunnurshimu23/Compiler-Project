
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
     VAR = 258,
     SIN = 259,
     COS = 260,
     TAN = 261,
     STR = 262,
     WHILE = 263,
     CASE = 264,
     SWITCH = 265,
     CALL = 266,
     MULTI_CMNT = 267,
     FUNCTION = 268,
     AT = 269,
     DEP = 270,
     CMNT = 271,
     INT = 272,
     DBL = 273,
     CHAR = 274,
     SIGN = 275,
     BASE = 276,
     START = 277,
     END = 278,
     PLUS = 279,
     MINUS = 280,
     MUL = 281,
     DIV = 282,
     MOD = 283,
     INCREMENT = 284,
     DECREMENT = 285,
     ASSIGN = 286,
     EQ = 287,
     NE = 288,
     LT = 289,
     LE = 290,
     GT = 291,
     GE = 292,
     CIN = 293,
     COUT = 294,
     DEFAULT = 295,
     POW = 296,
     LOG = 297,
     LON = 298,
     FACTORIAL = 299,
     SQRT = 300,
     AND = 301,
     OR = 302,
     NOT = 303,
     COMMA = 304,
     RETURN = 305,
     BREAK = 306,
     CONTINUE = 307,
     IF = 308,
     ELIF = 309,
     ELSE = 310,
     LOOP = 311,
     ENDLINE = 312,
     LFP = 313,
     LSP = 314,
     LTP = 315,
     RFP = 316,
     RSP = 317,
     RTP = 318,
     VARIABLE = 319,
     STRING = 320,
     CHARACTER = 321,
     INTEGER = 322
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 48 "1907001.y"

    int val;
    char string[100];



/* Line 1676 of yacc.c  */
#line 126 "1907001.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


