/* emitter.c */

#include "global.h"

void emit (int t, char* tval)  /*  generates output  */
{
  switch(t) {
  // case ADD_OP : case SUB_OP : case MULT_OP : case DIV_OP:
  //   printf("%c\n", t); break;
  // case MOD_OP:
  //   printf("MOD\n"); break;
  // case INT_NUMBER:
  //   printf("%s\n", tval); break;
  default:     
    printf("token %d, tokenval %s\n", t, tval);
  }
}
