#include <stdio.h>
#include "linked_list.h"

int main(){
	
	scope * ptr = malloc(sizeof(scope));
	ptr->name= "global";
	ptr->next=NULL;
	ptr->variables=NULL;
	add(0,"x",ptr);
	add(1,"f1",ptr);
	add(0,"y",ptr);
	add(0,"z",ptr);
	add(0,"x",ptr);
	add(1,"f2",ptr);
	add(0,"a",ptr);
	add(1,"f3",ptr);
	print_list(ptr);
	remove_scope(ptr);
	print_list(ptr);

return 0;
}