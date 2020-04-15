%{ 
/* Definition section */
#include <stdio.h> 
#include <stdlib.h> 
%} 

%token ID 
%left '+' '-'
%left '*' '/'
%left UMINUS 

/* Rule Section */
%% 

S : E 
E : E'+'{push();}T{pop();} 
| E'-'{push();}T{pop();} 
| T 
; 
T : T'*'{push();}F{pop();} 
| T'/'{push();}F{pop();} 
| F 
; 
F : '('E{pop();}')'
| '-'{push();}F{pop();} 
| ID{show();} 
; 

%% 

#include"lex.yy.c" 
char st[100]; 
int top=0; 

//driver code 
int main() 
{ 
	printf("Enter infix expression: "); 
	yyparse(); 
	printf("\n"); 
	return 0; 
} 
push() 
{ 
	st[top++]=yytext[0]; 
} 

pop() 
{ 
	printf("%c", st[--top]); 
} 

show() 
{ 
	printf("%c", yytext[0]); 
} 

