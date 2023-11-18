
/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOID = 258,
     CHARACTER = 259,
     PRINTFF = 260,
     SCANFF = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     FOR = 265,
     IF = 266,
     ELSE = 267,
     TRUE = 268,
     FALSE = 269,
     NUMBER = 270,
     FLOAT_NUM = 271,
     ID = 272,
     LE = 273,
     GE = 274,
     EQ = 275,
     NE = 276,
     GT = 277,
     LT = 278,
     AND = 279,
     OR = 280,
     STR = 281,
     ADD = 282,
     MULTIPLY = 283,
     DIVIDE = 284,
     SUBTRACT = 285,
     UNARY = 286,
     INCLUDE = 287,
     RETURN = 288
   };
#endif
/* Tokens.  */
#define VOID 258
#define CHARACTER 259
#define PRINTFF 260
#define SCANFF 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define FOR 265
#define IF 266
#define ELSE 267
#define TRUE 268
#define FALSE 269
#define NUMBER 270
#define FLOAT_NUM 271
#define ID 272
#define LE 273
#define GE 274
#define EQ 275
#define NE 276
#define GT 277
#define LT 278
#define AND 279
#define OR 280
#define STR 281
#define ADD 282
#define MULTIPLY 283
#define DIVIDE 284
#define SUBTRACT 285
#define UNARY 286
#define INCLUDE 287
#define RETURN 288




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 52 "bison_yacc.y"
 struct var_name {
			char name[100];
			struct node* nd;
		} nd_obj;

		struct var_name2 {
			char name[100];
			struct node* nd;
			char type[5];
		} nd_obj2;

		struct var_name3 {
			char name[100];
			struct node* nd;
			char if_body[5];
			char else_body[5];
		} nd_obj3;
	


/* Line 1676 of yacc.c  */
#line 139 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;