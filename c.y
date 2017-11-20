%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
   
int yylex();
int yyerror();
extern int yylineno;


struct Symbol_Table
{
    char sym_name[10];
    char sym_type[10];
    double value;
}Sym[10];

int sym_cnt=0;
int QuadCourant=0;
int temp_var=0;



int search_symbol(char []);
void make_symtab_entry(char [],char [],double);
void display_sym_tab();
void Generate_Quad(char [],char [],char [],char []);
void display_Quadruple();

struct Quadruple
{
    char operator[5];
    char operand1[10];
    char operand2[10];
    char dest[10];
}QUAD[25];


%}

%union
{
    struct Quadruple1
        {
          char operator[5];
          char operand1[10];
          char operand2[10];
          char dest[10];
        }QuadTmp1[2];

        
    int ival;
    double dval;
    char string[10];
    char string1[10];
    
}

%token <string> INT 
%token <string> FLOAT
%token <string> ID
%token FOR WHILE
%token IF ELSE
%token <dval> NUMBER

%right '='
%right mu
%left AND OR 
%left '+' '-'
 '*' '/'
%left '<' '>' LE GE EQ NE LT GT

%nonassoc NO_ELSE
%%

start:	Function 
	| Declaration 
	;



/* Function block */
Function: Type ID '(' ArgList ')' CompoundStmt
	;

ArgList:  ArgList ',' Arg 
	| Arg 
    |
	;
Arg: Type ID 
	;

/* Declaration block */

Declaration: Type IdentList 
    ;

/* Type Identifier block */
Type:	INT  
	| FLOAT 
	;

IdentList: ID ',' IdentList { int i;
                              i=search_symbol($1);
                              if(i!=-1)
                                  printf("\n Multiple Declaration of Variable");
                              else
                                  make_symtab_entry($1,$<string>0,0);
                            }
    | ID                    { int i;
                              i=search_symbol($1);
                              if(i!=-1)
                                  printf("\n Multiple Declaration of Variable");
                              else
                                  make_symtab_entry($1,$<string>0,0);
                            }
    ;

Stmt:	ForStmt
    | WhileStmt
    | Declaration
    | CompoundStmt
    | IfStmt
    | Expr
    | ';'
    ;

/* For Block */
ForStmt: FOR '(' Expr St ';' OptExpr  ';' OptExpr Sv ')' Stmt { char buff1[10];
                                                       Generate_Quad($<QuadTmp1>9[1].operator,$<QuadTmp1>9[1].operand2,$<QuadTmp1>9[1].operand1,$<QuadTmp1>9[1].dest);
                                                       Generate_Quad("=",$<QuadTmp1>9[0].operand2,$<QuadTmp1>9[0].operand1,$<QuadTmp1>9[0].dest);
                                                       sprintf(buff1, "%d", QuadCourant+1);
                                                       strcpy(QUAD[$<ival>9].operand2,buff1);
                                                       sprintf(buff1, "%d", $<ival>4);
                                                       Generate_Quad("JMP",buff1,"","");
                                                          }
    ;

Sv: {   QuadCourant--;
        strcpy($<QuadTmp1>$[0].operand2,QUAD[QuadCourant].operand2);
        strcpy($<QuadTmp1>$[0].operand1,QUAD[QuadCourant].operand1);
        strcpy($<QuadTmp1>$[0].operator,QUAD[QuadCourant].operator);
        strcpy($<QuadTmp1>$[0].dest,QUAD[QuadCourant].dest); 

        QuadCourant--; 
        strcpy($<QuadTmp1>$[1].operand2,QUAD[QuadCourant].operand2);
        strcpy($<QuadTmp1>$[1].operand1,QUAD[QuadCourant].operand1);
        strcpy($<QuadTmp1>$[1].operator,QUAD[QuadCourant].operator);
        strcpy($<QuadTmp1>$[1].dest,QUAD[QuadCourant].dest);
        $<ival>$ = QuadCourant; 

        Generate_Quad("JZ","","","");

        




 } ;

St: { $<ival>$ = QuadCourant;};

OptExpr: Expr
    |
    ;

/* Loop Blocks */
WhileStmt: WHILE M1 '(' Expr ')' M2 Stmt { char buff[10]; char buff1[10]; 
                                        sprintf(buff, "%d", $<ival>2); 
                                        Generate_Quad("JMP",buff,"","");
                                        sprintf(buff1, "%d", QuadCourant);
                                        strcpy(QUAD[$<ival>6].operand2,buff1);   
                                        }

    ;

M1: {$<ival>$ = QuadCourant; } 
    ;

M2: { $<ival>$ = QuadCourant; Generate_Quad("JZ","","","");  }
    ;
/* IfStmt Block */
IfStmt : IF '(' Expr ')' Ma Stmt ElsePart {  char buff1[10];
                                                sprintf(buff1, "%d", $<ival>7 );
                                                strcpy(QUAD[$<ival>5].operand2,buff1);  

                                             }
    ;

Ma: {$<ival>$ = QuadCourant; Generate_Quad("JZ","","","");}
    ;

ElsePart: ELSE Mb Stmt {                        $<ival>$ = $<ival>2 + 1; 
                                                char buff1[10];
                                                sprintf(buff1, "%d", QuadCourant );
                                                strcpy(QUAD[$<ival>2].operand2,buff1);   }
    | %prec NO_ELSE {$<ival>$ = QuadCourant;}
    ;

Mb: { $<ival>$ = QuadCourant; Generate_Quad("JMP","","","");}
    ;



CompoundStmt: '{' StmtList '}'  
    ;


StmtList:	StmtList Stmt 
	|
	;

/*Expression Block*/
Expr: ID '=' Expr  { $<ival>$ = QuadCourant; Generate_Quad("=","",$<string>3,$1); }

    | Rvalue { strcpy($<string>$ , $<string>1); }
    ;

Rvalue:  Rvalue Compare Mag {$<ival>$ = QuadCourant; 
                            char str[5],str1[5]="t", str3[10],str6[10];
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                               strcpy($<string>$,str1);              
                               temp_var++;

                               sprintf(str3, "%d", QuadCourant+4);

                               Generate_Quad("CMP",$<string>1,$<string>3,""); 


                               Generate_Quad($<string1>2,"",str3,""); 
                               Generate_Quad("=","1",str1,"");                            
                               sprintf(str6, "%d", QuadCourant+2);
                               Generate_Quad("JMP",str6,"","");

                               Generate_Quad("=","0",str1,"");
                               

                         
}
    | Mag {strcpy($<string>$,$<string>1);}
    ;

Compare: EQ { char buff1[10];
              sprintf(buff1, "%s","="  );
              strcpy($<string>$,buff1);              
              char buff2[10];
              sprintf(buff2, "%s","NE"  );
              strcpy($<string1>$,buff2);} 
    | LT { char buff1[10];
              sprintf(buff1, "%s","<"  );
              strcpy($<string>$,buff1);
              char buff2[10];
              sprintf(buff2, "%s","GE"  );
              strcpy($<string1>$,buff2);} 
    | GT { char buff1[10];
              sprintf(buff1, "%s",">"  );
              strcpy($<string>$,buff1);
              char buff2[10];
              sprintf(buff2, "%s","LE"  );
              strcpy($<string1>$,buff2);
              } 
    | GE { 
                               
                char buff1[10];

              sprintf(buff1, "%s",">="  );
              strcpy($<string>$,buff1);
              char buff2[10];
              sprintf(buff2, "%s","LT"  );
              strcpy($<string1>$,buff2);

              } 
    | LE { char buff1[10];
              sprintf(buff1, "%s","<="  );
              strcpy($<string>$,buff1);
              char buff2[10];
              sprintf(buff2, "%s","LE"  );
              strcpy($<string1>$,buff2);        
} 
    | NE { char buff1[10];
              sprintf(buff1, "%s","!="  );
              strcpy($<string>$,buff1);
              char buff2[10];
              sprintf(buff2, "%s","GT"  );
              strcpy($<string1>$,buff2);            
    } 
    ;

Mag: Mag '+' Term             { 
                                char str[5],str1[5]="t";
                                sprintf(str, "%d", temp_var);
                                strcat(str1,str);
                                strcpy($<string>$,str1); 
                                temp_var++;
                                Generate_Quad("+",$<string>1,$<string>3,str1);

                             }
    | Mag '-' Term           {
                                char str[5],str1[5]="t";
                                sprintf(str, "%d", temp_var);
                                strcat(str1,str);
                                strcpy($<string>$,str1); 
                                temp_var++;
                                Generate_Quad("-",$<string>1,$<string>3,str1);
                             }
    | Term  {strcpy($<string>$,$<string>1);}
    ;

Term: Term '*' Factor        {
                               char str[5],str1[5]="t";
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                                strcpy($<string>$,str1); 
                               temp_var++;
                               Generate_Quad("*",$<string>1,$<string>3,str1);

                      }
    | Term '/' Factor        {
                               char str[5],str1[5]="t";
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                               strcpy($<string>$,str1); 
                               temp_var++;
                               Generate_Quad("/",$<string>1,$<string>3,str1);

                             }
    | Factor { strcpy($<string>$,$<string>1);}
    ;

Factor: '(' Expr ')'
    | '-' Factor  %prec mu  
    | '+' Factor
    | ID                     { int i;
                               i=search_symbol($1);
                               if(i==-1)
                               printf("\n Undefined Variable");
                               else

                               strcpy($<string>$,$1);
                                 //thoura
    
                             }

    | NUMBER                 { char temp[10];
                               snprintf(temp,10,"%f",$1);
                               strcpy($<string>$,temp);

                             }
    ;
%%
extern FILE *yyin;
int main()
{
    

    yyin = fopen("input.txt","r");
    yyparse();
    display_sym_tab();
    printf("\n\n");
    display_Quadruple();
    printf("\n\n");
    return(0);
}

int search_symbol(char sym[10])
{
    int i,flag=0;
    for(i=0;i<sym_cnt;i++)
    {
        if(strcmp(Sym[i].sym_name,sym)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    return(-1);
    else
    return(i);
}

void make_symtab_entry(char sym[10],char dtype[10],double val)
{
    strcpy(Sym[sym_cnt].sym_name,sym);
    strcpy(Sym[sym_cnt].sym_type,dtype);
    Sym[sym_cnt].value=val;
    sym_cnt++;
}


void display_sym_tab()
{
    int i;
    printf("\n\n The Symbol Table  \n\n");
    printf(" Name   Type    Value");
    for(i=0;i<sym_cnt;i++)
    printf("\n %s       %s          %f",Sym[i].sym_name,Sym[i].sym_type,Sym[i].value);
}

void display_Quadruple()
{
    int i;
    FILE * fp;
    fp = fopen ("file.txt", "w+");
    fprintf(fp, " The Symbol Table \n");
    fprintf(fp, " Name   Type    Value \n");

    for(i=0;i<sym_cnt;i++){
    fprintf(fp, " %s   %s    %f \n",Sym[i].sym_name , Sym[i].sym_type ,Sym[i].value);    
    }
 
    fprintf(fp, "\n \n \n \n");
    printf("\n\n The INTERMEDIATE CODE Is : \n\n");
    //printf("\n\n The Quadruple Table \n\n");
    printf("\n     Result  Operator  Operand1  Operand2  ");
    for(i=0;i<QuadCourant;i++){
    printf("\n %d     %s          %s          %s          %s",i,QUAD[i].dest,QUAD[i].operator,QUAD[i].operand1,QUAD[i].operand2);
    fprintf(fp, "%d   %s  %s  %s  %s \n",i ,QUAD[i].dest , QUAD[i].operator ,QUAD[i].operand1,QUAD[i].operand2 );
   
   
    }
fclose(fp);
   
}



int yyerror()
{
  printf(" ERROR check line :  %d  \n",  yylineno-1);
  return 1;
}



void Generate_Quad(char op[10],char op2[10],char op1[10],char res[10])
{
    strcpy(QUAD[QuadCourant].operator,op);
    strcpy(QUAD[QuadCourant].operand2,op2);
    strcpy(QUAD[QuadCourant].operand1,op1);
    strcpy(QUAD[QuadCourant].dest,res);
    QuadCourant++;
}

