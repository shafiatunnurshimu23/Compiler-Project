%{
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

   

	
%}


%union {
    int val;
    char string[100];
}

%token  VAR SIN COS TAN STR WHILE CASE SWITCH CALL MULTI_CMNT FUNCTION AT DEP CMNT INT DBL CHAR SIGN BASE START END PLUS MINUS MUL DIV MOD INCREMENT DECREMENT ASSIGN EQ NE LT LE GT GE CIN COUT DEFAULT POW LOG LON FACTORIAL SQRT AND OR NOT COMMA RETURN BREAK CONTINUE IF ELIF ELSE LOOP ENDLINE LFP LSP LTP RFP RSP RTP
%token<string> VARIABLE STRING CHARACTER
%token<val> INTEGER
%left SIN COS TAN
%left AND OR NOT
%left EQ NE LT GT LE GE
%left PLUS MINUS
%left MUL DIV MOD
%left POW
%type<val>expression
%type<val>statement
%type<val>statement2
%type<val>condition
%type<val>elif





%%
start:DEP start {printf("dependency added\n\n");}
| BASE SIGN START line END {printf("main function\n\n");}
|function start
|ENDLINE
|CMNT
|MULTI_CMNT
;

function: FUNCTION  SIGN datatype VARIABLE LFP param RFP START line END {
                 int tmp = addNewVar($4);
        if(tmp == 0) {
            printf("Error!! Duplicate Function name\n\n");
            exit(-1);
        }

                  printf("User defined function ===> %s \n\n",$4);
            }
            | ;

param: param COMMA paramDeclare
        | paramDeclare ;

paramDeclare: datatype VARIABLE
                | ;
param2: expression
|expression COMMA param2
| ;




line:line VAR SIGN datatype id ENDLINE {printf("Variable declared\n\n");}
|line VAR SIGN datatype statement2 
|line statement
| line arrayDeclare ENDLINE {printf("Array declared\n\n");}
| ;

arrayDeclare:VAR SIGN datatype id LTP INTEGER RTP;

arrayExpr: expression
            | expression COMMA arrayExpr;

datatype: INT
            | DBL
            | CHAR
            |STR
    
			
             
;

id:VARIABLE {
        int tmp = addNewVar($1);
        if(tmp == 0) {
            printf("Variable already Declared\n\n");
            exit(-1);
        }
    }
|id COMMA VARIABLE {
        int tmp = addNewVar($3);
        if(tmp == 0) {
            printf("Variable already Declared\n\n");
            exit(-1);
        }
    }
;




statement: ENDLINE
|RETURN expression ENDLINE { printf("return value\n");}
| CMNT {printf("this is single line comment\n");}
|MULTI_CMNT {printf("this is multiple line comment\n");}
|CALL VARIABLE LFP param2 RFP ENDLINE {
     if(isDeclared($2) != 0)
      {
               printf("calling function\n\n");
            }
            else {
                printf("function not defined\n\n");
            }
            }
| expression ENDLINE { 
            printf("Value of expression = %d\n\n", $1); 
            $$ = $1; 
        }
|VARIABLE ASSIGN expression ENDLINE{
            if(isDeclared($1) != 0) {
                setVal($1, $3);
                $$ = $3;
				printf("Value assigned\n\n");
            }
            else {
                printf("Variable not declared\n\n");
            }
        }
|VARIABLE ASSIGN CHARACTER ENDLINE {
      if(isDeclared($1) == 0)
      {
        printf("Variable not declared\n\n");
      }
      printf(" character Value assigned\n\n");

}
|VARIABLE ASSIGN STRING ENDLINE {
      if(isDeclared($1) == 0)
      {
        printf("Variable not declared\n\n");
      }
       printf(" string Value assigned\n\n");



}
|VARIABLE ASSIGN LTP arrayExpr RTP ENDLINE {
           if(isDeclared($1) == 0) {
                
                 printf("ARRAY not declared\n\n");
				
            }
            else {
                printf("Value assigned to array\n\n");
            }
            
        }

| IF LTP condition RTP LSP line  RSP
           {
            if($3) {
                printf("Whether Condition true.\n\n");
            }
            else {
                printf("whether Condition not true.\n\n");
            }
           }
| IF LTP condition RTP LSP line RSP ELSE LSP line RSP
 {if($3) {
                printf("whether Condition true.\n\n");
            }
            else {
                printf("else Condition true.\n\n");
            }
           }
| IF LTP condition RTP LSP line RSP elif  
       {if($3) {
                printf("whether Condition true.\n\n");
            }
            else {
                
            }
           }
|IF LTP condition RTP LSP line RSP ELIF LTP condition RTP LSP line RSP elif ELSE LSP line RSP
       {if($3) {
                printf("whether Condition true.\n\n");
            }
            else if($10)
            {
                printf("else whether Condition true.\n\n");
            }
            else
            {
                printf("else Condition true.\n\n");

            }
            
           }
| SWITCH LTP value RTP LSP case RSP {
          
            printf("--- Switch Case ---\n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE LE INTEGER SIGN VARIABLE INCREMENT RTP LSP line RSP {
   
            for(int i = $5; i<= $9; i=i+1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE LT INTEGER SIGN VARIABLE INCREMENT RTP LSP line RSP {
   
            for(int i = $5; i< $9; i=i+1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE GE INTEGER SIGN VARIABLE DECREMENT RTP LSP line RSP {
   
            for(int i = $5; i>= $9; i=i-1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE GT INTEGER SIGN VARIABLE DECREMENT RTP LSP line RSP {
   
            for(int i = $5; i> $9; i=i+1) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE LE INTEGER SIGN VARIABLE ASSIGN VARIABLE PLUS INTEGER RTP LSP line RSP {
            for(int i = $5; i<= $9; i = i + $15) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE LT INTEGER SIGN VARIABLE ASSIGN VARIABLE PLUS INTEGER RTP LSP line RSP {
            for(int i = $5; i< $9; i = i + $15) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
 | LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE GE INTEGER SIGN VARIABLE ASSIGN VARIABLE MINUS INTEGER RTP LSP line RSP {
            for(int i = $5; i>= $9; i = i - $15) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }
| LOOP LTP VARIABLE ASSIGN INTEGER SIGN VARIABLE GT INTEGER SIGN VARIABLE ASSIGN VARIABLE MINUS INTEGER RTP LSP line RSP {
            for(int i = $5; i> $9; i = i - $15) {
                printf("Expression value = %d\n", i);
            }
            printf("\n");
            printf("--- For Loop Ends --- \n\n");
        }

| COUT LFP expression RFP ENDLINE {
            printf("Print: %d\n\n", $3);
        }
| COUT LFP STRING RFP ENDLINE {
            printf("Print: %s\n\n", $3);
        }
| COUT LFP STRING AT expression RFP ENDLINE {
            printf("Print: %s%d\n\n", $3,$5);
        }
| CIN LFP VARIABLE RFP ENDLINE {
           
            if(isDeclared($3) != 0) {

                setVal($3,scanf("%d",&($3)));
                $$ = scanf("%d",&($3));
				printf("Value assigned\n");
            }
            else {
                printf("Variable not declared\n\n");
            }
        }
| WHILE LTP expression RTP LSP line RSP {
            printf("--- While Loop Starts --- \n\n");
            if($3) {
                printf("Inside While Loop\n\n");
            }
            printf("--- While Loop Ends --- \n\n");
        }
;

value:INTEGER {
      flag = 0;
      cvar = $1;
}
case: cases DEFAULT SIGN LSP line RSP{
     if(flag == 0) {
				printf("matched for default case\n\n");
			}
}
;
cases:CASE INTEGER SIGN LSP line BREAK ENDLINE RSP cases {
     if(cvar == $2) {
                printf("Matched for Case: %d\n\n",$2);
				flag = 1;
            }
}
|
;


elif: ELIF LTP condition RTP LSP line RSP elif  {if($3) {
                printf("else whether Condition true.\n\n");
            }
           }
| ;




statement2:VARIABLE ASSIGN expression statement2 {
	
	int tmp = addNewVar($1);
        if(tmp == 0) {
            printf("Variable already Declared\n\n");
            exit(-1);
        }
		else
		{
			  if(isDeclared($1) != 0) {
                setVal($1, $3);
                $$ = $3;
				printf("variable initialized\n\n");
            }

		}
	

}

|COMMA statement2
|ENDLINE ;

expression:INTEGER {$$ = $1;}
        | VARIABLE {$$ = getVal($1);}
		| expression PLUS expression {printf("Addition: %d + %d = %d\n", $1, $3, $1+$3); $$ = $1 + $3;}
        | expression MINUS expression {printf("Subtraction: %d - %d = %d\n", $1, $3, $1-$3); $$ = $1 - $3;}
        | expression MUL expression {printf("Multiplication: %d x %d = %d\n", $1, $3, $1*$3); $$ = $1 * $3;}
		| expression DIV expression {
            if($3) {
                printf("Division: %d / %d = %d\n\n", $1, $3, $1/$3); 
                $$ = $1 / $3;
            }
            else {
                $$ = 0;
                printf("Invalid !! Divisor is zero\n\n");
            }
        }
        | expression MOD expression {
            if($3) {
                printf("Modulus: %d mod %d = %d\n\n", $1, $3, $1%$3); 
                $$ = $1 % $3;
            }
            else {
                $$ = 0;
                printf("Invalid !! Modulus by zero\n\n");
            }
        }
         | expression AND expression {
             if($3 && $1) {
                printf("logical AND: %d & %d = True\n\n", $1, $3); 
        
            }
            else {
                printf("logical AND: %d & %d = False\n\n", $1, $3); 
        
            }
           
        }
        | expression OR expression {
             if($3 || $1) {
                printf("logical OR: %d | %d = True\n\n", $1, $3); 
        
            }
            else {
                printf("logical OR: %d | %d = False\n\n", $1, $3); 
        
            }
           
        } 
        |NOT expression {
             if(!$2) {
                printf("logical NOT: ^%d  = True\n\n", $2); 
        
            }
            else {
                printf("logical AND: ^%d= False\n\n", $2); 
        
            }
           
        }
        | expression GT expression {
            printf("Greater Than: %d > %d?\n", $1, $3); 
            $$ = $1 > $3;
            if($$) {
                printf("Yes, %d Greater\n\n",$1); 
            }
            else {
                printf("No, %d Not Greater\n\n",$1); 
            }
        }
        | expression LT expression {
            printf("Less Than: %d < %d?\n", $1, $3); 
            $$ = $1 < $3;
            if($$) {
                printf("Yes,%d Less\n\n",$1); 
            }
            else {
                printf("No, %d Not Less\n\n",$1); 
            }
        }
        | expression GE expression {
            printf("Greater Than or Equal: %d >= %d?\n", $1, $3); 
            $$ = $1 >= $3;
            if($$) {
                printf("Yes, %d Greater Than or Equal\n\n",$1); 
            }
            else {
                printf("No, %d Not Greater Than or Equal\n\n",$1); 
            }
        }
        | expression LE expression {
            printf("Less Than or Equal: %d <= %d?\n", $1, $3); 
            $$ = $1 <= $3;
            if($$) {
                printf("Yes, %d Less Than or Equal\n\n",$1); 
            }
            else {
                printf("No, %d Not Less Than or Equal\n\n",$1); 
            }
        }
        | expression EQ expression {
            printf("Equal: %d == %d?\n", $1, $3); 
            $$ = $1 == $3;
            if($$) {
                printf("Yes, %d Equal\n\n",$1); 
            }
            else {
                printf("No, Not Equal\n\n"); 
            }
        }
        | expression NE expression {
            printf("Not Equal: %d != %d?\n", $1, $3); 
            $$ = $1 != $3;
            if($$) {
                printf("Yes, %d Not Equal\n\n",$1); 
            }
            else {
                printf("No, %d Equal\n\n",$1); 
            }
        }
		 |POW LFP expression COMMA expression RFP {
            int ans = pow($3, $5);
            printf("Power: %d ^ %d = %d\n\n", $3, $5, ans); 
            $$ = pow($3, $5);
        }
        | expression INCREMENT {
            $$ = $1 + 1;
        }
        |expression DECREMENT {
            $$ = $1 - 1;
        }
         | SIN LFP expression RFP {
            printf("sin(%d) = %.2lf\n\n", $3, sin(3.1416 * $3 / 180));
            $$ = sin(3.1416 * $3 / 180);
        }
        | COS LFP expression RFP {
            printf("cose(%d) = %.2lf\n\n", $3, cos(3.1416 * $3 / 180));
            $$ = cos(3.1416 * $3 / 180);
        }
        | TAN LFP expression RFP {
            printf("tan(%d) = %.2lf\n\n", $3, tan(3.1416 * $3 / 180));
            $$ = tan(3.1416 * $3 / 180);
        }
        | LOG LFP expression RFP {
            printf("log(%d) = %.6lf\n", $3, log($3) / log(10.0));
            $$ = log($3) / log(10.0);
        }
        | LON LFP expression RFP {
            printf("ln(%d) = %.6lf\n", $3, log($3));
            $$ = log($3);
        }
        | FACTORIAL LFP expression RFP {
            int fact = 1;
            for(int i = 1; i<=$3; i++) {
                fact *= i;
            }
            printf("Factorial of %d = %d\n\n", $3, fact);
        }
        | SQRT LFP expression RFP {
            printf("Square Root of %d = %.4lf\n\n", $3, sqrt($3 * 1.0));
            $$ = sqrt($3 * 1.0);
        }
        | LFP expression RFP {$$ = $2;}

;

condition:INTEGER {$$ = $1;}
        | VARIABLE {$$ = getVal($1);}
		| expression GT expression {
            printf("Greater Than: %d > %d?\n", $1, $3); 
            $$ = $1 > $3;
            if($$) {
                printf("Yes, %d Greater\n\n",$1); 
            }
            else {
                printf("No, %d Not Greater\n\n",$1); 
            }
        }
        | expression LT expression {
            printf("Less Than: %d < %d?\n", $1, $3); 
            $$ = $1 < $3;
            if($$) {
                printf("Yes,%d Less\n\n",$1); 
            }
            else {
                printf("No, %d Not Less\n\n",$1); 
            }
        }
        | expression GE expression {
            printf("Greater Than or Equal: %d >= %d?\n", $1, $3); 
            $$ = $1 >= $3;
            if($$) {
                printf("Yes, %d Greater Than or Equal\n\n",$1); 
            }
            else {
                printf("No, %d Not Greater Than or Equal\n\n",$1); 
            }
        }
        | expression LE expression {
            printf("Less Than or Equal: %d <= %d?\n", $1, $3); 
            $$ = $1 <= $3;
            if($$) {
                printf("Yes, %d Less Than or Equal\n\n",$1); 
            }
            else {
                printf("No, %d Not Less Than or Equal\n\n",$1); 
            }
        }
        | expression EQ expression {
            printf("Equal: %d == %d?\n", $1, $3); 
            $$ = $1 == $3;
            if($$) {
                printf("Yes, %d Equal\n\n",$1); 
            }
            else {
                printf("No, Not Equal\n\n"); 
            }
        }
        | expression NE expression {
            printf("Not Equal: %d != %d?\n", $1, $3); 
            $$ = $1 != $3;
            if($$) {
                printf("Yes, %d Not Equal\n\n",$1); 
            }
            else {
                printf("No, %d Equal\n\n",$1); 
            }
        }
		;



%%
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
