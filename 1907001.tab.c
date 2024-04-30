
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "1907001.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>

	int yylex();
	int yyerror(char *s);

	extern int yyparse();
	char varName[1000][1000];
	int store[1000];
	int count = 1;
    int flag, cvar;

	int isDeclared(char *now){
		for(int i=1; i<count; i++){
			if(strcmp(varName[i], now)==0){
				return i; 
			}
		}
		return 0;
	}

    int setVal(char *now, int v){
		int id = isDeclared(now);
		store[id] = v;
	}
     int addNewVar(char *now){
		if(isDeclared(now) != 0) {
            return 0;
        }

		strcpy(varName[count], now);
		store[count]=0;
		count++;
	}
    int getVal(char *now){
		return store[isDeclared(now)];
	}

   

	


/* Line 189 of yacc.c  */
#line 120 "1907001.tab.c"

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

/* Line 214 of yacc.c  */
#line 48 "1907001.y"

    int val;
    char string[100];



/* Line 214 of yacc.c  */
#line 230 "1907001.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 242 "1907001.tab.c"

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
# if YYENABLE_NLS
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1932

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  326

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    12,    15,    17,    19,    21,    32,
      33,    37,    39,    42,    43,    45,    49,    50,    57,    63,
      66,    70,    71,    79,    81,    85,    87,    89,    91,    93,
      95,    99,   101,   105,   107,   109,   116,   119,   124,   129,
     134,   141,   149,   161,   170,   190,   198,   215,   232,   249,
     266,   286,   306,   326,   346,   352,   358,   366,   372,   380,
     382,   389,   399,   400,   409,   410,   415,   418,   420,   422,
     424,   428,   432,   436,   440,   444,   448,   452,   455,   459,
     463,   467,   471,   475,   479,   486,   489,   492,   497,   502,
     507,   512,   517,   522,   527,   531,   533,   535,   539,   543,
     547,   551,   555
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,    15,    69,    -1,    21,    20,    22,    74,
      23,    -1,    70,    69,    -1,    57,    -1,    16,    -1,    12,
      -1,    13,    20,    77,    64,    58,    71,    61,    22,    74,
      23,    -1,    -1,    71,    49,    72,    -1,    72,    -1,    77,
      64,    -1,    -1,    85,    -1,    85,    49,    73,    -1,    -1,
      74,     3,    20,    77,    78,    57,    -1,    74,     3,    20,
      77,    84,    -1,    74,    79,    -1,    74,    75,    57,    -1,
      -1,     3,    20,    77,    78,    60,    67,    63,    -1,    85,
      -1,    85,    49,    76,    -1,    17,    -1,    18,    -1,    19,
      -1,     7,    -1,    64,    -1,    78,    49,    64,    -1,    57,
      -1,    50,    85,    57,    -1,    16,    -1,    12,    -1,    11,
      64,    58,    73,    61,    57,    -1,    85,    57,    -1,    64,
      31,    85,    57,    -1,    64,    31,    66,    57,    -1,    64,
      31,    65,    57,    -1,    64,    31,    60,    76,    63,    57,
      -1,    53,    60,    86,    63,    59,    74,    62,    -1,    53,
      60,    86,    63,    59,    74,    62,    55,    59,    74,    62,
      -1,    53,    60,    86,    63,    59,    74,    62,    83,    -1,
      53,    60,    86,    63,    59,    74,    62,    54,    60,    86,
      63,    59,    74,    62,    83,    55,    59,    74,    62,    -1,
      10,    60,    80,    63,    59,    81,    62,    -1,    56,    60,
      64,    31,    67,    20,    64,    35,    67,    20,    64,    29,
      63,    59,    74,    62,    -1,    56,    60,    64,    31,    67,
      20,    64,    34,    67,    20,    64,    29,    63,    59,    74,
      62,    -1,    56,    60,    64,    31,    67,    20,    64,    37,
      67,    20,    64,    30,    63,    59,    74,    62,    -1,    56,
      60,    64,    31,    67,    20,    64,    36,    67,    20,    64,
      30,    63,    59,    74,    62,    -1,    56,    60,    64,    31,
      67,    20,    64,    35,    67,    20,    64,    31,    64,    24,
      67,    63,    59,    74,    62,    -1,    56,    60,    64,    31,
      67,    20,    64,    34,    67,    20,    64,    31,    64,    24,
      67,    63,    59,    74,    62,    -1,    56,    60,    64,    31,
      67,    20,    64,    37,    67,    20,    64,    31,    64,    25,
      67,    63,    59,    74,    62,    -1,    56,    60,    64,    31,
      67,    20,    64,    36,    67,    20,    64,    31,    64,    25,
      67,    63,    59,    74,    62,    -1,    39,    58,    85,    61,
      57,    -1,    39,    58,    65,    61,    57,    -1,    39,    58,
      65,    14,    85,    61,    57,    -1,    38,    58,    64,    61,
      57,    -1,     8,    60,    85,    63,    59,    74,    62,    -1,
      67,    -1,    82,    40,    20,    59,    74,    62,    -1,     9,
      67,    20,    59,    74,    51,    57,    62,    82,    -1,    -1,
      54,    60,    86,    63,    59,    74,    62,    83,    -1,    -1,
      64,    31,    85,    84,    -1,    49,    84,    -1,    57,    -1,
      67,    -1,    64,    -1,    85,    24,    85,    -1,    85,    25,
      85,    -1,    85,    26,    85,    -1,    85,    27,    85,    -1,
      85,    28,    85,    -1,    85,    46,    85,    -1,    85,    47,
      85,    -1,    48,    85,    -1,    85,    36,    85,    -1,    85,
      34,    85,    -1,    85,    37,    85,    -1,    85,    35,    85,
      -1,    85,    32,    85,    -1,    85,    33,    85,    -1,    41,
      58,    85,    49,    85,    61,    -1,    85,    29,    -1,    85,
      30,    -1,     4,    58,    85,    61,    -1,     5,    58,    85,
      61,    -1,     6,    58,    85,    61,    -1,    42,    58,    85,
      61,    -1,    43,    58,    85,    61,    -1,    44,    58,    85,
      61,    -1,    45,    58,    85,    61,    -1,    58,    85,    61,
      -1,    67,    -1,    64,    -1,    85,    36,    85,    -1,    85,
      34,    85,    -1,    85,    37,    85,    -1,    85,    35,    85,
      -1,    85,    32,    85,    -1,    85,    33,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    74,    75,    76,    77,    78,    81,    90,
      92,    93,    95,    96,    97,    98,    99,   104,   105,   106,
     107,   108,   110,   112,   113,   115,   116,   117,   118,   124,
     131,   143,   144,   145,   146,   147,   156,   160,   170,   178,
     188,   200,   209,   217,   225,   240,   244,   252,   260,   268,
     276,   283,   290,   297,   305,   308,   311,   314,   326,   335,
     339,   345,   351,   355,   359,   364,   384,   385,   387,   388,
     389,   390,   391,   392,   402,   412,   423,   434,   445,   455,
     465,   475,   485,   495,   505,   510,   513,   516,   520,   524,
     528,   532,   536,   543,   547,   551,   552,   553,   563,   573,
     583,   593,   603
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "SIN", "COS", "TAN", "STR",
  "WHILE", "CASE", "SWITCH", "CALL", "MULTI_CMNT", "FUNCTION", "AT", "DEP",
  "CMNT", "INT", "DBL", "CHAR", "SIGN", "BASE", "START", "END", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "INCREMENT", "DECREMENT", "ASSIGN", "EQ",
  "NE", "LT", "LE", "GT", "GE", "CIN", "COUT", "DEFAULT", "POW", "LOG",
  "LON", "FACTORIAL", "SQRT", "AND", "OR", "NOT", "COMMA", "RETURN",
  "BREAK", "CONTINUE", "IF", "ELIF", "ELSE", "LOOP", "ENDLINE", "LFP",
  "LSP", "LTP", "RFP", "RSP", "RTP", "VARIABLE", "STRING", "CHARACTER",
  "INTEGER", "$accept", "start", "function", "param", "paramDeclare",
  "param2", "line", "arrayDeclare", "arrayExpr", "datatype", "id",
  "statement", "value", "case", "cases", "elif", "statement2",
  "expression", "condition", 0
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
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    74,
      74,    74,    75,    76,    76,    77,    77,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      81,    82,    82,    83,    83,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     2,     1,     1,     1,    10,     0,
       3,     1,     2,     0,     1,     3,     0,     6,     5,     2,
       3,     0,     7,     1,     3,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     6,     2,     4,     4,     4,
       6,     7,    11,     8,    19,     7,    16,    16,    16,    16,
      19,    19,    19,    19,     5,     5,     7,     5,     7,     1,
       6,     9,     0,     8,     0,     4,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     6,     2,     2,     4,     4,     4,
       4,     4,     4,     4,     3,     1,     1,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     7,     0,     0,     6,     0,     5,     0,     0,     0,
       2,     0,     1,     4,    28,    25,    26,    27,     0,    21,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
      34,    33,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    69,    68,     0,    19,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    77,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    13,     0,    12,     0,     0,     0,     0,     0,
      59,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    69,    68,     0,     0,     0,    94,     0,     0,
       0,     0,    70,    71,    72,    73,    74,    82,    83,    79,
      81,    78,    80,    75,    76,    10,    21,     0,    67,    29,
       0,    18,    87,    88,    89,     0,     0,     0,    14,     0,
       0,     0,     0,     0,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    39,    38,
      37,     0,     0,    66,     0,     0,    17,     0,    21,    62,
       0,    16,    57,     0,    55,    54,     0,    82,    83,    79,
      81,    78,    80,    21,     0,     0,     0,     8,     0,    30,
       0,     0,     0,     0,     0,    35,    15,     0,    84,     0,
       0,    40,    24,    65,    22,    58,     0,    45,     0,    56,
      41,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    21,    21,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
      42,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    64,    21,     0,    21,
       0,    21,     0,    21,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    46,
       0,    49,     0,    48,     0,     0,    21,    21,    21,    21,
      21,     0,     0,     0,     0,     0,     0,    21,    44,    51,
      50,    53,    52,     0,    64,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    51,    52,   147,    21,    48,   166,    53,
     140,    49,   101,   203,   204,   226,   141,    50,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -274
static const yytype_int16 yypact[] =
{
      71,  -274,   -12,    71,  -274,    -6,  -274,    35,    71,    97,
    -274,    20,  -274,  -274,  -274,  -274,  -274,  -274,    -9,  -274,
      10,   121,    97,    52,    27,    37,    45,    47,    49,    53,
    -274,  -274,  -274,    78,    80,    82,    84,    85,    87,    88,
    1287,  1287,    89,    92,  -274,  1287,   117,  -274,    93,  -274,
    1729,   -20,  -274,    94,    97,  1287,  1287,  1287,  1287,   100,
     103,   104,  1259,  1287,  1287,  1287,  1287,  1287,  -274,   380,
    1755,  1305,   106,  1399,    15,  -274,  1287,  1287,  1287,  1287,
    1287,  -274,  -274,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  -274,    97,   150,  -274,    12,  1429,  1459,  1489,  1375,
    -274,   110,  1287,   114,    -8,  1519,  1807,  1549,  1579,  1609,
    1639,  -274,   113,   123,  1885,   124,   158,  -274,  1287,   133,
     135,  1781,   183,   183,     3,     3,     3,   394,   394,   394,
     394,   394,   394,   380,   380,  -274,  -274,    90,  -274,   163,
      17,  -274,  -274,  -274,  -274,   140,   142,   144,  1833,   149,
    1287,   157,   159,  1287,  -274,  -274,  -274,  -274,  1287,  1287,
    1287,  1287,  1287,  1287,   148,   160,   154,  1859,  -274,  -274,
    -274,   192,   163,  -274,  1287,   161,  -274,   162,  -274,   217,
     171,  1287,  -274,  1669,  -274,  -274,  1699,    72,   194,   253,
     260,   318,   325,  -274,   212,   181,  1287,  -274,  1349,  -274,
     176,   257,   174,   182,   203,  -274,  -274,   189,  -274,   322,
     187,  -274,  -274,  -274,  -274,  -274,   227,  -274,   232,  -274,
      16,    54,   195,   199,   193,   205,  -274,   204,   207,   208,
     209,  -274,  -274,  1305,  -274,   246,   250,   252,   271,   387,
     452,   229,   517,   230,   233,   239,   240,   236,  -274,   247,
    -274,   -18,    -1,    63,    81,   249,  -274,   245,   248,   254,
     256,   255,   258,   266,   267,   217,   582,   276,   285,   277,
     313,   280,   315,   282,   331,  -274,   303,  -274,   291,  -274,
     292,  -274,   295,  -274,   301,   309,   316,   647,   310,   712,
     311,   777,   314,   842,   319,  1305,   317,  -274,   324,  -274,
     326,  -274,   328,  -274,   335,   333,  -274,  -274,  -274,  -274,
    -274,   341,   907,   972,  1037,  1102,  1167,  -274,  -274,  -274,
    -274,  -274,  -274,  1232,   303,  -274
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,     4,  -274,  -274,   342,   220,  -126,  -274,   206,     0,
    -274,  -274,  -274,  -274,   146,  -273,  -133,   -40,  -231
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -103
static const yytype_int16 yytable[] =
{
      69,    70,   241,   286,   173,    73,   150,    10,     9,    18,
     171,   257,    13,   258,    11,    96,    97,    98,    99,    24,
      25,    26,   105,   106,   107,   108,   109,   110,   259,    92,
     260,   114,    81,    82,   121,    12,   122,   123,   124,   125,
     126,    93,    19,   127,   128,   129,   130,   131,   132,   133,
     134,   325,   201,   151,    95,    20,    35,    36,    37,    38,
      39,   137,   148,    40,   305,   213,   175,   209,    22,   138,
     224,   225,    54,    45,   176,   118,   139,   177,   167,    68,
     119,   120,    47,     1,     2,    55,     3,     4,   227,   228,
     229,   230,     5,   261,   262,    56,    76,    77,    78,    79,
      80,    81,    82,    57,    14,   239,   240,    58,   242,    59,
     183,   263,   264,   186,    15,    16,    17,    60,   187,   188,
     189,   190,   191,   192,    23,    24,    25,    26,     6,    27,
     266,    28,    29,    30,   198,  -101,    61,    31,    62,   137,
      63,   148,    64,    65,    32,    66,    67,   138,    74,    71,
      75,   287,    72,   289,   172,   291,   167,   293,    94,    33,
      34,   102,    35,    36,    37,    38,    39,   100,   103,    40,
     116,    41,   136,   146,    42,   149,   -96,    43,    44,    45,
     312,   313,   314,   315,   316,    46,   -95,   164,    47,   165,
     168,   323,   169,   114,   174,    23,    24,    25,    26,   178,
      27,   179,    28,    29,    30,   180,   182,   193,    31,    78,
      79,    80,    81,    82,   184,   197,   185,   195,    76,    77,
      78,    79,    80,    81,    82,   199,   202,   194,   205,   200,
      33,    34,   210,    35,    36,    37,    38,    39,   211,   214,
      40,   216,    41,   218,   217,    42,   219,   222,    43,    44,
      45,   221,   223,   233,   231,   114,    46,  -102,   232,    47,
      23,    24,    25,    26,   234,    27,   243,    28,    29,    30,
     244,   235,   245,    31,   236,   237,   238,    76,    77,    78,
      79,    80,    81,    82,    76,    77,    78,    79,    80,    81,
      82,   246,   249,   255,   251,    33,    34,   252,    35,    36,
      37,    38,    39,   253,   254,    40,   256,    41,   267,   278,
      42,   265,   268,    43,    44,    45,   -98,   269,   271,   215,
     270,    46,   272,  -100,    47,    23,    24,    25,    26,   273,
      27,   274,    28,    29,    30,   277,   279,   280,    31,   281,
     282,   283,    76,    77,    78,    79,    80,    81,    82,    76,
      77,    78,    79,    80,    81,    82,   284,   285,   288,   290,
      33,    34,   292,    35,    36,    37,    38,    39,   294,   295,
      40,   296,    41,   298,   300,    42,   306,   302,    43,    44,
      45,   -97,   304,   307,   220,   308,    46,   309,   -99,    47,
      23,    24,    25,    26,   310,    27,   311,    28,    29,    30,
     317,   206,   212,    31,    76,    77,    78,    79,    80,    81,
      82,   275,    83,    84,    85,    86,    87,    88,    76,    77,
      78,    79,    80,    81,    82,    33,    34,     0,    35,    36,
      37,    38,    39,     0,   135,    40,     0,    41,   247,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,     0,     0,     0,   248,     0,    46,     0,     0,    47,
      23,    24,    25,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,    41,     0,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,   250,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,     0,     0,     0,   276,     0,    46,     0,     0,    47,
      23,    24,    25,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,    41,     0,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,   297,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,     0,     0,     0,   299,     0,    46,     0,     0,    47,
      23,    24,    25,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,    41,     0,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,   301,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,     0,     0,     0,   303,     0,    46,     0,     0,    47,
      23,    24,    25,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,    41,     0,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,   318,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,     0,     0,     0,   319,     0,    46,     0,     0,    47,
      23,    24,    25,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,    41,     0,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,   320,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,     0,     0,     0,   321,     0,    46,     0,     0,    47,
      23,    24,    25,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,    41,     0,     0,
      42,     0,     0,    43,    44,    45,     0,     0,     0,   322,
       0,    46,     0,     0,    47,    23,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,     0,     0,     0,     0,
      33,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    42,     0,     0,    43,    44,
      45,    24,    25,    26,   324,     0,    46,     0,     0,    47,
      35,    36,    37,    38,    39,     0,     0,    40,     0,    24,
      25,    26,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,    68,   104,     0,    47,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    35,    36,    37,    38,
      39,    68,     0,    40,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,   112,
       0,     0,   113,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,   137,    76,
      77,    78,    79,    80,    81,    82,   138,    83,    84,    85,
      86,    87,    88,   172,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,     0,   145,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     117,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     142,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     143,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     144,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     152,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     154,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     155,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     156,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     157,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     207,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
     208,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    91,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,     0,     0,    76,    77,    78,    79,    80,
      81,    82,   111,    83,    84,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,     0,
       0,    76,    77,    78,    79,    80,    81,    82,   170,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,     0,   153,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,     0,   181,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,   196,    76,
      77,    78,    79,    80,    81,    82,     0,   158,   159,   160,
     161,   162,   163,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90
};

static const yytype_int16 yycheck[] =
{
      40,    41,   233,   276,   137,    45,    14,     3,    20,     9,
     136,    29,     8,    31,    20,    55,    56,    57,    58,     4,
       5,     6,    62,    63,    64,    65,    66,    67,    29,    49,
      31,    71,    29,    30,    74,     0,    76,    77,    78,    79,
      80,    61,    22,    83,    84,    85,    86,    87,    88,    89,
      90,   324,   178,    61,    54,    64,    41,    42,    43,    44,
      45,    49,   102,    48,   295,   198,    49,   193,    58,    57,
      54,    55,    20,    58,    57,    60,    64,    60,   118,    64,
      65,    66,    67,    12,    13,    58,    15,    16,    34,    35,
      36,    37,    21,    30,    31,    58,    24,    25,    26,    27,
      28,    29,    30,    58,     7,   231,   232,    60,   234,    60,
     150,    30,    31,   153,    17,    18,    19,    64,   158,   159,
     160,   161,   162,   163,     3,     4,     5,     6,    57,     8,
     256,    10,    11,    12,   174,    63,    58,    16,    58,    49,
      58,   181,    58,    58,    23,    58,    58,    57,    31,    60,
      57,   277,    60,   279,    64,   281,   196,   283,    64,    38,
      39,    58,    41,    42,    43,    44,    45,    67,    64,    48,
      64,    50,    22,    63,    53,    61,    63,    56,    57,    58,
     306,   307,   308,   309,   310,    64,    63,    63,    67,    31,
      57,   317,    57,   233,    31,     3,     4,     5,     6,    59,
       8,    59,    10,    11,    12,    61,    57,    59,    16,    26,
      27,    28,    29,    30,    57,    23,    57,    63,    24,    25,
      26,    27,    28,    29,    30,    64,     9,    67,    57,    67,
      38,    39,    20,    41,    42,    43,    44,    45,    57,    63,
      48,    67,    50,    40,    62,    53,    57,    20,    56,    57,
      58,    64,    20,    60,    59,   295,    64,    63,    59,    67,
       3,     4,     5,     6,    59,     8,    20,    10,    11,    12,
      20,    67,    20,    16,    67,    67,    67,    24,    25,    26,
      27,    28,    29,    30,    24,    25,    26,    27,    28,    29,
      30,    20,    63,    57,    64,    38,    39,    64,    41,    42,
      43,    44,    45,    64,    64,    48,    59,    50,    63,    24,
      53,    62,    64,    56,    57,    58,    63,    63,    63,    62,
      64,    64,    64,    63,    67,     3,     4,     5,     6,    63,
       8,    64,    10,    11,    12,    59,    59,    24,    16,    59,
      25,    59,    24,    25,    26,    27,    28,    29,    30,    24,
      25,    26,    27,    28,    29,    30,    25,    54,    67,    67,
      38,    39,    67,    41,    42,    43,    44,    45,    67,    60,
      48,    55,    50,    63,    63,    53,    59,    63,    56,    57,
      58,    63,    63,    59,    62,    59,    64,    59,    63,    67,
       3,     4,     5,     6,    59,     8,    63,    10,    11,    12,
      59,   181,   196,    16,    24,    25,    26,    27,    28,    29,
      30,   265,    32,    33,    34,    35,    36,    37,    24,    25,
      26,    27,    28,    29,    30,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    92,    48,    -1,    50,    51,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    67,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    67,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    67,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    67,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    67,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    67,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    67,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,     4,     5,     6,    62,    -1,    64,    -1,    -1,    67,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    67,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    41,    42,    43,    44,
      45,    64,    -1,    48,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,    24,
      25,    26,    27,    28,    29,    30,    57,    32,    33,    34,
      35,    36,    37,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      61,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    57,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    57,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    57,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    16,    21,    57,    69,    70,    20,
      69,    20,     0,    69,     7,    17,    18,    19,    77,    22,
      64,    74,    58,     3,     4,     5,     6,     8,    10,    11,
      12,    16,    23,    38,    39,    41,    42,    43,    44,    45,
      48,    50,    53,    56,    57,    58,    64,    67,    75,    79,
      85,    71,    72,    77,    20,    58,    58,    58,    60,    60,
      64,    58,    58,    58,    58,    58,    58,    58,    64,    85,
      85,    60,    60,    85,    31,    57,    24,    25,    26,    27,
      28,    29,    30,    32,    33,    34,    35,    36,    37,    46,
      47,    57,    49,    61,    64,    77,    85,    85,    85,    85,
      67,    80,    58,    64,    65,    85,    85,    85,    85,    85,
      85,    57,    64,    67,    85,    86,    64,    61,    60,    65,
      66,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    72,    22,    49,    57,    64,
      78,    84,    61,    61,    61,    63,    63,    73,    85,    61,
      14,    61,    61,    49,    61,    61,    61,    61,    32,    33,
      34,    35,    36,    37,    63,    31,    76,    85,    57,    57,
      57,    74,    64,    84,    31,    49,    57,    60,    59,    59,
      61,    49,    57,    85,    57,    57,    85,    85,    85,    85,
      85,    85,    85,    59,    67,    63,    49,    23,    85,    64,
      67,    74,     9,    81,    82,    57,    73,    61,    61,    74,
      20,    57,    76,    84,    63,    62,    67,    62,    40,    57,
      62,    64,    20,    20,    54,    55,    83,    34,    35,    36,
      37,    59,    59,    60,    59,    67,    67,    67,    67,    74,
      74,    86,    74,    20,    20,    20,    20,    51,    62,    63,
      62,    64,    64,    64,    64,    57,    59,    29,    31,    29,
      31,    30,    31,    30,    31,    62,    74,    63,    64,    63,
      64,    63,    64,    63,    64,    82,    62,    59,    24,    59,
      24,    59,    25,    59,    25,    54,    83,    74,    67,    74,
      67,    74,    67,    74,    67,    60,    55,    62,    63,    62,
      63,    62,    63,    62,    63,    86,    59,    59,    59,    59,
      59,    63,    74,    74,    74,    74,    74,    59,    62,    62,
      62,    62,    62,    74,    62,    83
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
# if YYLTYPE_IS_TRIVIAL
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 2:

/* Line 1455 of yacc.c  */
#line 73 "1907001.y"
    {printf("dependency added\n\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 74 "1907001.y"
    {printf("main function\n\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 81 "1907001.y"
    {
                 int tmp = addNewVar((yyvsp[(4) - (10)].string));
        if(tmp == 0) {
            printf("Error!! Duplicate Function name\n\n");
            exit(-1);
        }

                  printf("User defined function ===> %s \n\n",(yyvsp[(4) - (10)].string));
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "1907001.y"
    {printf("Variable declared\n\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 107 "1907001.y"
    {printf("Array declared\n\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 124 "1907001.y"
    {
        int tmp = addNewVar((yyvsp[(1) - (1)].string));
        if(tmp == 0) {
            printf("Variable already Declared\n\n");
            exit(-1);
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 131 "1907001.y"
    {
        int tmp = addNewVar((yyvsp[(3) - (3)].string));
        if(tmp == 0) {
            printf("Variable already Declared\n\n");
            exit(-1);
        }
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 144 "1907001.y"
    { printf("return value\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 145 "1907001.y"
    {printf("this is single line comment\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 146 "1907001.y"
    {printf("this is multiple line comment\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 147 "1907001.y"
    {
     if(isDeclared((yyvsp[(2) - (6)].string)) != 0)
      {
               printf("calling function\n\n");
            }
            else {
                printf("function not defined\n\n");
            }
            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 156 "1907001.y"
    { 
            printf("Value of expression = %d\n\n", (yyvsp[(1) - (2)].val)); 
            (yyval.val) = (yyvsp[(1) - (2)].val); 
        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 160 "1907001.y"
    {
            if(isDeclared((yyvsp[(1) - (4)].string)) != 0) {
                setVal((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].val));
                (yyval.val) = (yyvsp[(3) - (4)].val);
				printf("Value assigned\n\n");
            }
            else {
                printf("Variable not declared\n\n");
            }
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 170 "1907001.y"
    {
      if(isDeclared((yyvsp[(1) - (4)].string)) == 0)
      {
        printf("Variable not declared\n\n");
      }
      printf(" character Value assigned\n\n");

;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 178 "1907001.y"
    {
      if(isDeclared((yyvsp[(1) - (4)].string)) == 0)
      {
        printf("Variable not declared\n\n");
      }
       printf(" string Value assigned\n\n");



;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 188 "1907001.y"
    {
           if(isDeclared((yyvsp[(1) - (6)].string)) == 0) {
                
                 printf("ARRAY not declared\n\n");
				
            }
            else {
                printf("Value assigned to array\n\n");
            }
            
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 201 "1907001.y"
    {
            if((yyvsp[(3) - (7)].val)) {
                printf("Whether Condition true.\n\n");
            }
            else {
                printf("whether Condition not true.\n\n");
            }
           ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 210 "1907001.y"
    {if((yyvsp[(3) - (11)].val)) {
                printf("whether Condition true.\n\n");
            }
            else {
                printf("else Condition true.\n\n");
            }
           ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 218 "1907001.y"
    {if((yyvsp[(3) - (8)].val)) {
                printf("whether Condition true.\n\n");
            }
            else {
                
            }
           ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 226 "1907001.y"
    {if((yyvsp[(3) - (19)].val)) {
                printf("whether Condition true.\n\n");
            }
            else if((yyvsp[(10) - (19)].val))
            {
                printf("else whether Condition true.\n\n");
            }
            else
            {
                printf("else Condition true.\n\n");

            }
            
           ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 240 "1907001.y"
    {
          
            printf("--- Switch Case ---\n\n");
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 244 "1907001.y"
    {
   
            for(int i = (yyvsp[(5) - (16)].val); i<= (yyvsp[(9) - (16)].val); i=i+1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 252 "1907001.y"
    {
   
            for(int i = (yyvsp[(5) - (16)].val); i< (yyvsp[(9) - (16)].val); i=i+1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 260 "1907001.y"
    {
   
            for(int i = (yyvsp[(5) - (16)].val); i>= (yyvsp[(9) - (16)].val); i=i-1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 268 "1907001.y"
    {
   
            for(int i = (yyvsp[(5) - (16)].val); i> (yyvsp[(9) - (16)].val); i=i+1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 276 "1907001.y"
    {
            for(int i = (yyvsp[(5) - (19)].val); i<= (yyvsp[(9) - (19)].val); i = i + (yyvsp[(15) - (19)].val)) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 283 "1907001.y"
    {
            for(int i = (yyvsp[(5) - (19)].val); i< (yyvsp[(9) - (19)].val); i = i + (yyvsp[(15) - (19)].val)) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 290 "1907001.y"
    {
            for(int i = (yyvsp[(5) - (19)].val); i>= (yyvsp[(9) - (19)].val); i = i - (yyvsp[(15) - (19)].val)) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 297 "1907001.y"
    {
            for(int i = (yyvsp[(5) - (19)].val); i> (yyvsp[(9) - (19)].val); i = i - (yyvsp[(15) - (19)].val)) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 305 "1907001.y"
    {
            printf("Print: %d\n\n", (yyvsp[(3) - (5)].val));
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 308 "1907001.y"
    {
            printf("Print: %s\n\n", (yyvsp[(3) - (5)].string));
        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 311 "1907001.y"
    {
            printf("Print: %s%d\n\n", (yyvsp[(3) - (7)].string),(yyvsp[(5) - (7)].val));
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 314 "1907001.y"
    {
           
            if(isDeclared((yyvsp[(3) - (5)].string)) != 0) {

                setVal((yyvsp[(3) - (5)].string),scanf("%d",&((yyvsp[(3) - (5)].string))));
                (yyval.val) = scanf("%d",&((yyvsp[(3) - (5)].string)));
				printf("Value assigned\n");
            }
            else {
                printf("Variable not declared\n\n");
            }
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 326 "1907001.y"
    {
            printf("--- While Loop Starts --- \n\n");
            if((yyvsp[(3) - (7)].val)) {
                printf("Inside While Loop\n\n");
            }
            printf("--- While Loop Ends --- \n\n");
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 335 "1907001.y"
    {
      flag = 0;
      cvar = (yyvsp[(1) - (1)].val);
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 339 "1907001.y"
    {
     if(flag == 0) {
				printf("matched for default case\n\n");
			}
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 345 "1907001.y"
    {
     if(cvar == (yyvsp[(2) - (9)].val)) {
                printf("Matched for Case: %d\n\n",(yyvsp[(2) - (9)].val));
				flag = 1;
            }
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 355 "1907001.y"
    {if((yyvsp[(3) - (8)].val)) {
                printf("else whether Condition true.\n\n");
            }
           ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 364 "1907001.y"
    {
	
	int tmp = addNewVar((yyvsp[(1) - (4)].string));
        if(tmp == 0) {
            printf("Variable already Declared\n\n");
            exit(-1);
        }
		else
		{
			  if(isDeclared((yyvsp[(1) - (4)].string)) != 0) {
                setVal((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].val));
                (yyval.val) = (yyvsp[(3) - (4)].val);
				printf("variable initialized\n\n");
            }

		}
	

;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 387 "1907001.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 388 "1907001.y"
    {(yyval.val) = getVal((yyvsp[(1) - (1)].string));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 389 "1907001.y"
    {printf("Addition: %d + %d = %d\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)+(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 390 "1907001.y"
    {printf("Subtraction: %d - %d = %d\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)-(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 391 "1907001.y"
    {printf("Multiplication: %d x %d = %d\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 392 "1907001.y"
    {
            if((yyvsp[(3) - (3)].val)) {
                printf("Division: %d / %d = %d\n\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val)); 
                (yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
            }
            else {
                (yyval.val) = 0;
                printf("Invalid !! Divisor is zero\n\n");
            }
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 402 "1907001.y"
    {
            if((yyvsp[(3) - (3)].val)) {
                printf("Modulus: %d mod %d = %d\n\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)%(yyvsp[(3) - (3)].val)); 
                (yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);
            }
            else {
                (yyval.val) = 0;
                printf("Invalid !! Modulus by zero\n\n");
            }
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 412 "1907001.y"
    {
             if((yyvsp[(3) - (3)].val) && (yyvsp[(1) - (3)].val)) {
                printf("logical AND: %d & %d = True\n\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
        
            }
            else {
                printf("logical AND: %d & %d = False\n\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
        
            }
           
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 423 "1907001.y"
    {
             if((yyvsp[(3) - (3)].val) || (yyvsp[(1) - (3)].val)) {
                printf("logical OR: %d | %d = True\n\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
        
            }
            else {
                printf("logical OR: %d | %d = False\n\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
        
            }
           
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 434 "1907001.y"
    {
             if(!(yyvsp[(2) - (2)].val)) {
                printf("logical NOT: ^%d  = True\n\n", (yyvsp[(2) - (2)].val)); 
        
            }
            else {
                printf("logical AND: ^%d= False\n\n", (yyvsp[(2) - (2)].val)); 
        
            }
           
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 445 "1907001.y"
    {
            printf("Greater Than: %d > %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Greater\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Greater\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 455 "1907001.y"
    {
            printf("Less Than: %d < %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes,%d Less\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Less\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 465 "1907001.y"
    {
            printf("Greater Than or Equal: %d >= %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Greater Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Greater Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 475 "1907001.y"
    {
            printf("Less Than or Equal: %d <= %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Less Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Less Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 485 "1907001.y"
    {
            printf("Equal: %d == %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, Not Equal\n\n"); 
            }
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 495 "1907001.y"
    {
            printf("Not Equal: %d != %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) != (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Not Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 505 "1907001.y"
    {
            int ans = pow((yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val));
            printf("Power: %d ^ %d = %d\n\n", (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), ans); 
            (yyval.val) = pow((yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val));
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 510 "1907001.y"
    {
            (yyval.val) = (yyvsp[(1) - (2)].val) + 1;
        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 513 "1907001.y"
    {
            (yyval.val) = (yyvsp[(1) - (2)].val) - 1;
        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 516 "1907001.y"
    {
            printf("sin(%d) = %.2lf\n\n", (yyvsp[(3) - (4)].val), sin(3.1416 * (yyvsp[(3) - (4)].val) / 180));
            (yyval.val) = sin(3.1416 * (yyvsp[(3) - (4)].val) / 180);
        ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 520 "1907001.y"
    {
            printf("cose(%d) = %.2lf\n\n", (yyvsp[(3) - (4)].val), cos(3.1416 * (yyvsp[(3) - (4)].val) / 180));
            (yyval.val) = cos(3.1416 * (yyvsp[(3) - (4)].val) / 180);
        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 524 "1907001.y"
    {
            printf("tan(%d) = %.2lf\n\n", (yyvsp[(3) - (4)].val), tan(3.1416 * (yyvsp[(3) - (4)].val) / 180));
            (yyval.val) = tan(3.1416 * (yyvsp[(3) - (4)].val) / 180);
        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 528 "1907001.y"
    {
            printf("log(%d) = %.6lf\n", (yyvsp[(3) - (4)].val), log((yyvsp[(3) - (4)].val)) / log(10.0));
            (yyval.val) = log((yyvsp[(3) - (4)].val)) / log(10.0);
        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 532 "1907001.y"
    {
            printf("ln(%d) = %.6lf\n", (yyvsp[(3) - (4)].val), log((yyvsp[(3) - (4)].val)));
            (yyval.val) = log((yyvsp[(3) - (4)].val));
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 536 "1907001.y"
    {
            int fact = 1;
            for(int i = 1; i<=(yyvsp[(3) - (4)].val); i++) {
                fact *= i;
            }
            printf("Factorial of %d = %d\n\n", (yyvsp[(3) - (4)].val), fact);
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 543 "1907001.y"
    {
            printf("Square Root of %d = %.4lf\n\n", (yyvsp[(3) - (4)].val), sqrt((yyvsp[(3) - (4)].val) * 1.0));
            (yyval.val) = sqrt((yyvsp[(3) - (4)].val) * 1.0);
        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 547 "1907001.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 551 "1907001.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 552 "1907001.y"
    {(yyval.val) = getVal((yyvsp[(1) - (1)].string));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 553 "1907001.y"
    {
            printf("Greater Than: %d > %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Greater\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Greater\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 563 "1907001.y"
    {
            printf("Less Than: %d < %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes,%d Less\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Less\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 573 "1907001.y"
    {
            printf("Greater Than or Equal: %d >= %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Greater Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Greater Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 583 "1907001.y"
    {
            printf("Less Than or Equal: %d <= %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Less Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Not Less Than or Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 593 "1907001.y"
    {
            printf("Equal: %d == %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, Not Equal\n\n"); 
            }
        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 603 "1907001.y"
    {
            printf("Not Equal: %d != %d?\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); 
            (yyval.val) = (yyvsp[(1) - (3)].val) != (yyvsp[(3) - (3)].val);
            if((yyval.val)) {
                printf("Yes, %d Not Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
            else {
                printf("No, %d Equal\n\n",(yyvsp[(1) - (3)].val)); 
            }
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2936 "1907001.tab.c"
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



/* Line 1675 of yacc.c  */
#line 617 "1907001.y"

int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}

