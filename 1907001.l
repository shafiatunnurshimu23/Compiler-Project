%{
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include "1907001.tab.h"
%}


id  [_A-Za-z][_A-Za-z0-9]*
number [+|-]?[0-9]+(.[0-9]+)?
ws [ \t\n]
delim ({ws})*

%%
{delim} {}

"@insert["{id}".set]"                            { return DEP;}

"!!"[^\n]*"!!"                                   { return CMNT;}
"!*"([ \t\n]*.[ \t\n]*)*"*!"                     { return MULTI_CMNT;}

"int" {return INT;}

"dbl" {return DBL;}

"char" {return CHAR;}

"string" {return STR;}

"var" {return VAR;}

["].*["] {
    yytext++;
    int lenght = strlen(yytext);
    strcpy(yylval.string, yytext);
    yylval.string[lenght-1] = '\0';
    return STRING;
}
['].['] {
    yytext++;
    int lenght = strlen(yytext);
    strcpy(yylval.string, yytext);
    yylval.string[lenght-1] = '\0';
    return CHARACTER;
}


":" {return SIGN;}

"base_function" {return BASE;}

"==>" {return START;}

"<==" {return END;}

"[" {return LTP;}

"]" {return RTP;}

"(" {return LFP;}
")" {return RFP;}

"{" {return LSP;}
"}" {return RSP;}





"@" {return AT;}


"jog" {return PLUS;}

"biyog" {return MINUS;}

"gun" {return MUL;}

"vag" {return DIV;}

"mod" {return MOD;}

"++" {return INCREMENT;}

"--" {return DECREMENT;}

"=" {return ASSIGN;}

"==" {return EQ;}

"!=" {return NE;}

"<" {return LT;}

">" {return GT;}

"<=" {return LE;}

">=" {return GE;}

"call" {return CALL;}

"scan" {return CIN;}

"show" {return COUT;}

"given" {return DEFAULT;}

"throw" {return RETURN;}

"value" {return CASE;}

"halt" {return BREAK;}

"skip" {return CONTINUE;}

"whether" {return IF;}

"else whether" {return ELIF;}

"else" {return ELSE;}

"toggle" {return SWITCH;}

"loop" {return LOOP;}

"while" {return WHILE;}

"pow" {return POW;}

"log" {return LOG;}

"ln" {return LON;}

"factorial" {return FACTORIAL;}

"sqrt" {return SQRT;}

"sin" {return SIN;}
"cos" {return COS;}
"tan" {return TAN;}

"func" {return FUNCTION;}


"&" {return AND;}

"|" {return OR;}

"^" {return NOT;}

"," {return COMMA;}


"arr "("int"|"dbl"|"char"){id}"["{number}"]" {printf("Array\n");}

{number} { yylval.val = atoi(yytext); return INTEGER;}

"#" {return ENDLINE;}

{id} {
    strcpy(yylval.string, yytext);
    return VARIABLE;
}

. {printf("Undefined syntax\n");}

%%

