/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "c.y" /* yacc.c:339  */

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



#line 106 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    ID = 260,
    FOR = 261,
    WHILE = 262,
    IF = 263,
    ELSE = 264,
    NUMBER = 265,
    mu = 266,
    AND = 267,
    OR = 268,
    LE = 269,
    GE = 270,
    EQ = 271,
    NE = 272,
    LT = 273,
    GT = 274,
    NO_ELSE = 275
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define ID 260
#define FOR 261
#define WHILE 262
#define IF 263
#define ELSE 264
#define NUMBER 265
#define mu 266
#define AND 267
#define OR 268
#define LE 269
#define GE 270
#define EQ 271
#define NE 272
#define LT 273
#define GT 274
#define NO_ELSE 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "c.y" /* yacc.c:355  */

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
    

#line 203 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   94

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  95

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    17,    15,    30,    16,     2,    18,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      19,    11,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    12,    13,    14,    21,
      22,    23,    24,    25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    83,    86,    87,    88,    90,    95,
      99,   100,   103,   110,   119,   120,   121,   122,   123,   124,
     125,   129,   139,   161,   163,   164,   168,   177,   180,   183,
     190,   193,   197,   200,   205,   209,   210,   214,   216,   219,
     241,   244,   250,   256,   263,   274,   281,   290,   299,   307,
     310,   319,   328,   331,   332,   333,   334,   345
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ID", "FOR", "WHILE",
  "IF", "ELSE", "NUMBER", "'='", "mu", "AND", "OR", "'+'", "'-'", "'*'",
  "'/'", "'<'", "'>'", "LE", "GE", "EQ", "NE", "LT", "GT", "NO_ELSE",
  "'('", "')'", "','", "';'", "'{'", "'}'", "$accept", "start", "Function",
  "ArgList", "Arg", "Declaration", "Type", "IdentList", "Stmt", "ForStmt",
  "Sv", "St", "OptExpr", "WhileStmt", "M1", "M2", "IfStmt", "Ma",
  "ElsePart", "Mb", "CompoundStmt", "StmtList", "Expr", "Rvalue",
  "Compare", "Mag", "Term", "Factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    61,   266,   267,   268,    43,    45,    42,    47,    60,
      62,   269,   270,   271,   272,   273,   274,   275,    40,    41,
      44,    59,   123,   125
};
# endif

#define YYPACT_NINF -32

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-32)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,   -32,   -32,     2,   -32,   -32,    12,   -32,    -2,   -32,
       9,    26,     0,   -32,    48,    31,   -32,   -18,     9,   -32,
     -32,   -32,   -32,    17,    51,    35,   -32,    42,   -32,    50,
      50,    64,   -32,   -32,   -32,    26,   -32,   -32,   -32,   -32,
     -32,   -32,   -16,    19,    39,   -32,    64,    64,    43,    64,
     -32,   -32,   -32,    44,   -32,   -32,   -32,   -32,   -32,   -32,
      50,    50,    50,    50,    50,   -32,   -32,    64,    47,   -32,
      19,    39,    39,   -32,   -32,    46,    52,   -32,    64,   -32,
      36,    53,   -32,    36,    74,    64,   -32,   -32,   -32,   -32,
      36,    57,   -32,    36,   -32
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,    11,     0,     2,     3,     0,     1,    13,     9,
       7,     0,     0,     6,     0,    13,    12,     0,     0,     8,
      36,     4,     5,     0,    56,     0,    27,     0,    57,     0,
       0,     0,    20,    34,    16,     0,    35,    14,    15,    18,
      17,    19,    38,    40,    49,    52,     0,     0,     0,     0,
      56,    55,    54,     0,    45,    44,    41,    46,    42,    43,
       0,     0,     0,     0,     0,    37,    23,     0,     0,    53,
      39,    47,    48,    50,    51,     0,     0,    30,    25,    28,
       0,     0,    24,     0,    32,    25,    26,    33,    29,    22,
       0,     0,    31,     0,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -32,   -32,    69,    88,     1,    78,    -8,   -32,
     -32,   -32,     5,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
      76,   -32,   -31,   -32,   -32,    34,    -3,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    12,    13,    34,    35,     9,    36,    37,
      91,    75,    81,    38,    48,    83,    39,    80,    88,    90,
      40,    23,    41,    42,    60,    43,    44,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,     6,     7,    51,    52,    54,    55,    56,    57,    58,
      59,    14,     1,     2,    20,    65,    66,     8,    68,    14,
       1,     2,    24,    25,    26,    27,    10,    28,    11,    17,
      18,    15,    29,    30,    61,    62,    76,    73,    74,     1,
       2,    24,    25,    26,    27,    31,    28,    82,    32,    20,
      33,    29,    30,    19,    82,    50,    63,    64,    71,    72,
      28,    11,    46,    47,    31,    29,    30,    32,    20,    24,
      49,    67,    84,    69,    28,    86,    77,    78,    31,    29,
      30,    79,    92,    87,    85,    94,    93,    22,     5,    16,
      89,     0,    31,    21,    70
};

static const yytype_int8 yycheck[] =
{
      31,     0,     0,    29,    30,    21,    22,    23,    24,    25,
      26,    10,     3,     4,    32,    46,    47,     5,    49,    18,
       3,     4,     5,     6,     7,     8,    28,    10,    30,    29,
      30,     5,    15,    16,    15,    16,    67,    63,    64,     3,
       4,     5,     6,     7,     8,    28,    10,    78,    31,    32,
      33,    15,    16,     5,    85,     5,    17,    18,    61,    62,
      10,    30,    11,    28,    28,    15,    16,    31,    32,     5,
      28,    28,    80,    29,    10,    83,    29,    31,    28,    15,
      16,    29,    90,     9,    31,    93,    29,    18,     0,    11,
      85,    -1,    28,    17,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    35,    36,    39,    40,     0,     5,    41,
      28,    30,    37,    38,    40,     5,    41,    29,    30,     5,
      32,    54,    38,    55,     5,     6,     7,     8,    10,    15,
      16,    28,    31,    33,    39,    40,    42,    43,    47,    50,
      54,    56,    57,    59,    60,    61,    11,    28,    48,    28,
       5,    61,    61,    56,    21,    22,    23,    24,    25,    26,
      58,    15,    16,    17,    18,    56,    56,    28,    56,    29,
      59,    60,    60,    61,    61,    45,    56,    29,    31,    29,
      51,    46,    56,    49,    42,    31,    42,     9,    52,    46,
      53,    44,    42,    29,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    35,    36,    37,    37,    37,    38,    39,
      40,    40,    41,    41,    42,    42,    42,    42,    42,    42,
      42,    43,    44,    45,    46,    46,    47,    48,    49,    50,
      51,    52,    52,    53,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    61,    61,    61,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     6,     3,     1,     0,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,    11,     0,     0,     1,     0,     7,     0,     0,     7,
       0,     3,     0,     0,     3,     2,     0,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     2,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:
#line 103 "c.y" /* yacc.c:1646  */
    { int i;
                              i=search_symbol((yyvsp[-2].string));
                              if(i!=-1)
                                  printf("\n Multiple Declaration of Variable");
                              else
                                  make_symtab_entry((yyvsp[-2].string),(yyvsp[-3].string),0);
                            }
#line 1366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "c.y" /* yacc.c:1646  */
    { int i;
                              i=search_symbol((yyvsp[0].string));
                              if(i!=-1)
                                  printf("\n Multiple Declaration of Variable");
                              else
                                  make_symtab_entry((yyvsp[0].string),(yyvsp[-1].string),0);
                            }
#line 1378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 129 "c.y" /* yacc.c:1646  */
    { char buff1[10];
                                                       Generate_Quad((yyvsp[-2].QuadTmp1)[1].operator,(yyvsp[-2].QuadTmp1)[1].operand2,(yyvsp[-2].QuadTmp1)[1].operand1,(yyvsp[-2].QuadTmp1)[1].dest);
                                                       Generate_Quad("=",(yyvsp[-2].QuadTmp1)[0].operand2,(yyvsp[-2].QuadTmp1)[0].operand1,(yyvsp[-2].QuadTmp1)[0].dest);
                                                       sprintf(buff1, "%d", QuadCourant+1);
                                                       strcpy(QUAD[(yyvsp[-2].ival)].operand2,buff1);
                                                       sprintf(buff1, "%d", (yyvsp[-7].ival));
                                                       Generate_Quad("JMP",buff1,"","");
                                                          }
#line 1391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 139 "c.y" /* yacc.c:1646  */
    {   QuadCourant--;
        strcpy((yyval.QuadTmp1)[0].operand2,QUAD[QuadCourant].operand2);
        strcpy((yyval.QuadTmp1)[0].operand1,QUAD[QuadCourant].operand1);
        strcpy((yyval.QuadTmp1)[0].operator,QUAD[QuadCourant].operator);
        strcpy((yyval.QuadTmp1)[0].dest,QUAD[QuadCourant].dest); 

        QuadCourant--; 
        strcpy((yyval.QuadTmp1)[1].operand2,QUAD[QuadCourant].operand2);
        strcpy((yyval.QuadTmp1)[1].operand1,QUAD[QuadCourant].operand1);
        strcpy((yyval.QuadTmp1)[1].operator,QUAD[QuadCourant].operator);
        strcpy((yyval.QuadTmp1)[1].dest,QUAD[QuadCourant].dest);
        (yyval.ival) = QuadCourant; 

        Generate_Quad("JZ","","","");

        




 }
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 161 "c.y" /* yacc.c:1646  */
    { (yyval.ival) = QuadCourant;}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 168 "c.y" /* yacc.c:1646  */
    { char buff[10]; char buff1[10]; 
                                        sprintf(buff, "%d", (yyvsp[-5].ival)); 
                                        Generate_Quad("JMP",buff,"","");
                                        sprintf(buff1, "%d", QuadCourant);
                                        strcpy(QUAD[(yyvsp[-1].ival)].operand2,buff1);   
                                        }
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 177 "c.y" /* yacc.c:1646  */
    {(yyval.ival) = QuadCourant; }
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 180 "c.y" /* yacc.c:1646  */
    { (yyval.ival) = QuadCourant; Generate_Quad("JZ","","","");  }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "c.y" /* yacc.c:1646  */
    {  char buff1[10];
                                                sprintf(buff1, "%d", (yyvsp[0].ival) );
                                                strcpy(QUAD[(yyvsp[-2].ival)].operand2,buff1);  

                                             }
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 190 "c.y" /* yacc.c:1646  */
    {(yyval.ival) = QuadCourant; Generate_Quad("JZ","","","");}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 193 "c.y" /* yacc.c:1646  */
    {                        (yyval.ival) = (yyvsp[-1].ival) + 1; 
                                                char buff1[10];
                                                sprintf(buff1, "%d", QuadCourant );
                                                strcpy(QUAD[(yyvsp[-1].ival)].operand2,buff1);   }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 197 "c.y" /* yacc.c:1646  */
    {(yyval.ival) = QuadCourant;}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 200 "c.y" /* yacc.c:1646  */
    { (yyval.ival) = QuadCourant; Generate_Quad("JMP","","","");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 214 "c.y" /* yacc.c:1646  */
    { (yyval.ival) = QuadCourant; Generate_Quad("=","",(yyvsp[0].string),(yyvsp[-2].string)); }
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 216 "c.y" /* yacc.c:1646  */
    { strcpy((yyval.string) , (yyvsp[0].string)); }
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 219 "c.y" /* yacc.c:1646  */
    {(yyval.ival) = QuadCourant; 
                            char str[5],str1[5]="t", str3[10],str6[10];
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                               strcpy((yyval.string),str1);              
                               temp_var++;

                               sprintf(str3, "%d", QuadCourant+4);

                               Generate_Quad("CMP",(yyvsp[-2].string),(yyvsp[0].string),""); 


                               Generate_Quad((yyvsp[-1].string1),"",str3,""); 
                               Generate_Quad("=","1",str1,"");                            
                               sprintf(str6, "%d", QuadCourant+2);
                               Generate_Quad("JMP",str6,"","");

                               Generate_Quad("=","0",str1,"");
                               

                         
}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 241 "c.y" /* yacc.c:1646  */
    {strcpy((yyval.string),(yyvsp[0].string));}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 244 "c.y" /* yacc.c:1646  */
    { char buff1[10];
              sprintf(buff1, "%s","="  );
              strcpy((yyval.string),buff1);              
              char buff2[10];
              sprintf(buff2, "%s","NE"  );
              strcpy((yyval.string1),buff2);}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "c.y" /* yacc.c:1646  */
    { char buff1[10];
              sprintf(buff1, "%s","<"  );
              strcpy((yyval.string),buff1);
              char buff2[10];
              sprintf(buff2, "%s","GE"  );
              strcpy((yyval.string1),buff2);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 256 "c.y" /* yacc.c:1646  */
    { char buff1[10];
              sprintf(buff1, "%s",">"  );
              strcpy((yyval.string),buff1);
              char buff2[10];
              sprintf(buff2, "%s","LE"  );
              strcpy((yyval.string1),buff2);
              }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 263 "c.y" /* yacc.c:1646  */
    { 
                               
                char buff1[10];

              sprintf(buff1, "%s",">="  );
              strcpy((yyval.string),buff1);
              char buff2[10];
              sprintf(buff2, "%s","LT"  );
              strcpy((yyval.string1),buff2);

              }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 274 "c.y" /* yacc.c:1646  */
    { char buff1[10];
              sprintf(buff1, "%s","<="  );
              strcpy((yyval.string),buff1);
              char buff2[10];
              sprintf(buff2, "%s","LE"  );
              strcpy((yyval.string1),buff2);        
}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 281 "c.y" /* yacc.c:1646  */
    { char buff1[10];
              sprintf(buff1, "%s","!="  );
              strcpy((yyval.string),buff1);
              char buff2[10];
              sprintf(buff2, "%s","GT"  );
              strcpy((yyval.string1),buff2);            
    }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 290 "c.y" /* yacc.c:1646  */
    { 
                                char str[5],str1[5]="t";
                                sprintf(str, "%d", temp_var);
                                strcat(str1,str);
                                strcpy((yyval.string),str1); 
                                temp_var++;
                                Generate_Quad("+",(yyvsp[-2].string),(yyvsp[0].string),str1);

                             }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 299 "c.y" /* yacc.c:1646  */
    {
                                char str[5],str1[5]="t";
                                sprintf(str, "%d", temp_var);
                                strcat(str1,str);
                                strcpy((yyval.string),str1); 
                                temp_var++;
                                Generate_Quad("-",(yyvsp[-2].string),(yyvsp[0].string),str1);
                             }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 307 "c.y" /* yacc.c:1646  */
    {strcpy((yyval.string),(yyvsp[0].string));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 310 "c.y" /* yacc.c:1646  */
    {
                               char str[5],str1[5]="t";
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                                strcpy((yyval.string),str1); 
                               temp_var++;
                               Generate_Quad("*",(yyvsp[-2].string),(yyvsp[0].string),str1);

                      }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 319 "c.y" /* yacc.c:1646  */
    {
                               char str[5],str1[5]="t";
                               sprintf(str, "%d", temp_var);
                               strcat(str1,str);
                               strcpy((yyval.string),str1); 
                               temp_var++;
                               Generate_Quad("/",(yyvsp[-2].string),(yyvsp[0].string),str1);

                             }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 328 "c.y" /* yacc.c:1646  */
    { strcpy((yyval.string),(yyvsp[0].string));}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 334 "c.y" /* yacc.c:1646  */
    { int i;
                               i=search_symbol((yyvsp[0].string));
                               if(i==-1)
                               printf("\n Undefined Variable");
                               else

                               strcpy((yyval.string),(yyvsp[0].string));
                                 //thoura
    
                             }
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 345 "c.y" /* yacc.c:1646  */
    { char temp[10];
                               snprintf(temp,10,"%f",(yyvsp[0].dval));
                               strcpy((yyval.string),temp);

                             }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1698 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 351 "c.y" /* yacc.c:1906  */

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

