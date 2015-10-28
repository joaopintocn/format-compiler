/* emitter.c */

#include "y.tab.h"

void emit (int t, char* tval)  /*  generates output  */
{
  switch(t) {
    case COMMENT:
      printf("%s\n", tval); break; 
    case STRING:
      printf("%s", tval); break; 
    case INT:
      printf("int "); break; 
    case REAL:
      printf("real "); break; 
    case COMPLEX:
      printf("complex "); break;
    case DOUBLE:
      printf("double "); break;
    case ENUM:
      printf("enum "); break;
    case STRUCT:
      printf("struct "); break;
    case SET_OF:
      printf("set_of "); break;
    case MATRIX_OF:
      printf("matrix_of "); break;
    case END_STRUCT:
      printf("end_struct"); break;
    case END_ENUM:
      printf("end_enum"); break;
    case CONST:
      printf("const "); break;
    case REF:
      printf("ref "); break;
    case IF:
      printf("if "); break;
    case ELSE:
      printf("else "); break; 
    case FOR:
      printf("for "); break;
    case WHILE:
      printf("while "); break;
    case SWITCH:
      printf("switch "); break;
    case BREAK:
      printf("break"); break;
    case OTHER:
      printf("OTHER\n"); break; 
    case END_IF:
      printf("END_IF\n"); break; 
    case END_FOR:
      printf("END_FOR\n"); break;
    case END_WHILE:
      printf("END_WHILE\n"); break;
    case END_SWITCH:
      printf("END_SWITCH\n"); break;
    case END_PROCEDURE:
      printf("END_PROCEDURE\n"); break;
    case END_FUNCTION:
      printf("END_FUNCTION"); break;
    case END_MODULE:
      printf("END_MODULE"); break;
    case FALSE:
      printf("FALSE"); break;
    case TRUE:
      printf("TRUE"); break;
    case PROCEDURE:
      printf("\nPROCEDURE\n"); break;
    case FUNCTION:
      printf("\nfunction "); break;
    case IMPORT:
      printf("\nimport "); break;
    case RETURN:
      printf("return "); break;
    case VARIABLES_SECTION:
      printf("\n\nvariables"); break;
    case SUBPROGRAMS_SECTION:
      printf("\n\nsubprograms"); break;
    case SEMICOLON:
      printf(";\n"); break;      
    case COMMA:
      printf(", "); break;
    case COLON:
      printf(":\n"); break;        
    case OPEN_PARENTHESIS:
      printf("( "); break;
    case CLOSE_PARENTHESIS:
      printf(" )"); break;
    case OPEN_BRACKETS:
      printf("[ "); break;
    case CLOSE_BRACKETS:
      printf(" ]"); break;
    case  RANGE:
      printf(".."); break;
    case  ID:
      printf("%s ", tval); break; 


    case INT_NUMBER:
      printf("%s", tval); break;
    case IMAGINARY_PART:
      printf("%s", tval); break;
    case REAL_NUMBER:
      printf("%s", tval); break;


    case LEQ_OP:
      printf("<= "); break;
    case  BEQ_OP:
      printf(">= "); break;
    case  EQ_OP:
      printf("== "); break;
    case  NEQ_OP:
      printf("!= "); break;

    case ASSIGN_OP:
      printf("= "); break;  



    case SUB_OP:
      printf("- "); break;
    case ADD_OP:
      printf("+ "); break;
    case MULT_OP:
      printf("* "); break;
    case DIV_OP:
     printf("/ "); break;
    case MOD_OP:
      printf("%% "); break;
    case LT_OP:
      printf("< "); break;
    case BT_OP:
      printf("> "); break;
    case EXPO_OP:
      printf("ˆ "); break;

    default:     
      printf("\ntoken %d, tokenval %s\n", t, tval);
  }
}

/*


"+=" case  ADD_ASSIGN_OP;}       
"-=" case  SUB_ASSIGN_OP;} 
"*=" case  MULT_ASSIGN_OP:
     printf("MOD\n"); break; 
"/=" case  DIV_ASSIGN_OP:
     printf("MOD\n"); break;  
"%=" case  MOD_ASSIGN_OP:
     printf("MOD\n"); break;  
"++" case  INCREMENT_OP:
     printf("MOD\n"); break; 
"--" case  DECREMENT_OP:
     printf("MOD\n"); break;
"&&" case  AND_OP:
     printf("MOD\n"); break;
"||" case  OR_OP:
     printf("MOD\n"); break;      

*/