%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    

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
void push(char*);
char* pop();

struct Quadruple
{
    char operator[5];
    char operand1[10];
    char operand2[10];
    char dest[10];
}QUAD[25];

struct Stack
{
    char *items[10];
    int top;
}Stk;

%}

%union
{
    int ival;
    double dval;
    char string[10];
}

%token <string> INT 
%token <string> FLOAT
%token <string> ID
%token FOR WHILE
%token IF ELSE
%token <dval> NUMBER



%right '='
%right mu
%left AND OR '+' '-' '*' '/'
%left '<' '>' LE GE EQ NE LT GT
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

Declaration: Type IdentList { printf(" Declaration \n");}
    ;

/* Type Identifier block */
Type:	INT  {printf("Type int \n");}
	| FLOAT {printf("Type float \n");}
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
ForStmt: FOR '(' Expr ';' OptExpr ';' OptExpr ')' Stmt { printf("Boucle For \n");}
    ;


OptExpr: Expr
    |
    ;

/* Loop Blocks */
WhileStmt: WHILE '(' Expr ')' Stmt { printf("Boucle while \n");}
    ;

/* IfStmt Block */
IfStmt : IF '(' Expr ')' Stmt ElsePart {printf("if statement\n");}
    ;

ElsePart: ELSE Stmt {printf("else statement \n");}
    |
    ;


CompoundStmt: '{' StmtList '}'  {printf("Compound statement!!!! \n");}
    ;


StmtList:	StmtList Stmt {printf("StmtList\n");}
	|
	;

/*Expression Block*/
Expr: ID '=' Expr  {Generate_Quad("=","",pop(),$1); }

    | Rvalue      
    ;

Rvalue: Rvalue Compare Mag
    | Mag
    ;

Compare: EQ
    | LT
    | GT
    | GE
    | LE
    | NE
    ;

Mag: Mag '+' Term            { 
                                char str[5],str1[5]="t";
                                sprintf(str, "%d", temp_var);
                                strcat(str1,str);
                                temp_var++;
                                Generate_Quad("+",pop(),pop(),str1);
                                push(str1);
                             }
    | Mag '-' Term           {
                                char str[5],str1[5]="t";
                                sprintf(str, "%d", temp_var);
                                strcat(str1,str);
                                temp_var++;
                                Generate_Quad("-",pop(),pop(),str1);
                                push(str1);
                             }
    | Term
    ;

Term: Term '*' Factor        {
                               char str[5],str1[5]="t";
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                               temp_var++;
                               Generate_Quad("*",pop(),pop(),str1);
                               push(str1);
                      }
    | Term '/' Factor        {
                               char str[5],str1[5]="t";
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                               temp_var++;
                               Generate_Quad("/",pop(),pop(),str1);
                               push(str1);
                             }
    | Factor
    ;

Factor: '(' Expr ')'
    | '-' Factor  %prec mu
    | '+' Factor
    | ID                     { int i;
                               i=search_symbol($1);
                               if(i==-1)
                               printf("\n Undefined Variable");
                               else
                               push($1);
    
                             }

    | NUMBER                 { char temp[10];
                               snprintf(temp,10,"%f",$1);
                               push(temp);
    
                             }
    ;

%%
extern FILE *yyin;
int main()
{
    
    Stk.top = -1;
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
    printf("\n\n The INTERMEDIATE CODE Is : \n\n");
    printf("\n\n The Quadruple Table \n\n");
    printf("\n     Result  Operator  Operand1  Operand2  ");
    for(i=0;i<QuadCourant;i++)
    printf("\n %d     %s          %s          %s          %s",i,QUAD[i].dest,QUAD[i].operator,QUAD[i].operand1,QUAD[i].operand2);
}

int yyerror()
{
    printf("\nERROR!! \n");
    return 1;
}


void push(char *str)
{
    Stk.top++;
    Stk.items[Stk.top]=(char *)malloc(strlen(str)+1);
    strcpy(Stk.items[Stk.top],str);
}
char * pop()
{
    int i;
    if(Stk.top==-1)
    {
        printf("\nStack Empty!! \n");
        exit(0);
    }
    char *str=(char *)malloc(strlen(Stk.items[Stk.top])+1);;
    strcpy(str,Stk.items[Stk.top]);
    Stk.top--;
    return(str);
}
void Generate_Quad(char op[10],char op2[10],char op1[10],char res[10])
{
    strcpy(QUAD[QuadCourant].operator,op);
    strcpy(QUAD[QuadCourant].operand2,op2);
    strcpy(QUAD[QuadCourant].operand1,op1);
    strcpy(QUAD[QuadCourant].dest,res);
    QuadCourant++;
}

