/* error.c */

#include "global.h"

void error(char* m)  /* generates all error messages  */
{
  fprintf(stderr, "line %d: %s\n", yylineno, m);
  exit(EXIT_FAILURE);  /*  unsuccessful termination  */
}
