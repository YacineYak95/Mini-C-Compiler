%{
    #include<stdio.h>
    #include<string.h>
    #include "y.tab.h"
    
%}

alpha [a-zA-Z]
digit [0-9]

%%
[ \t] ;
[ \n] {yylineno++;};
int {strcpy(yylval.string,yytext); return INT; }
float {strcpy(yylval.string,yytext); return FLOAT; }
for 	return FOR;
while	return WHILE;
if	return IF;
else	return ELSE;
{digit}+ |
{digit}+\.{digit}+   {
          yylval.dval=atof(yytext);
          return NUMBER;
                 }
{alpha}({alpha}|{digit})* {strcpy(yylval.string,yytext);return ID; }
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
">"	return GT;
"<"	return LT;
.       return yytext[0];
%%
int yywrap(){
    return 1;
}
