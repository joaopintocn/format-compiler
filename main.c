/* main.c */

#include "global.h"


int main(argc,argv)
int argc;
char **argv;
{
	if (argc > 1) {
		parse(argv[1]);
	}	
	return 0;
 }