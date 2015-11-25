#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef struct node{

	char * name;
	struct node * next;

}node_variable;

typedef struct node_scope{

	char * name; 
	node_variable * variables;
	struct node_scope * next;

}scope;



void print_list(scope *ptr){

	if(ptr!=NULL){
		scope * ptr_aux = ptr;
		while(ptr_aux!=NULL){
			printf("%s ->",ptr_aux->name );
			node_variable * ptr_var= ptr_aux->variables;
			while(ptr_var!=NULL){
				printf("%s ",ptr_var->name );
				ptr_var= ptr_var->next;
			}
			printf("\n");
			ptr_aux= ptr_aux->next;
		
		}
	}
} 


//if bool=1 adding new scope

void add( int bool, char * name, scope * ptr ){

	scope * ptr_aux=ptr;
	//char * path = malloc(100*sizeof(char));
    //strcpy(path,"");
	char * path = malloc(100*sizeof(char*));
	while(ptr_aux->next!=NULL){
			char * point_str = malloc(100*sizeof(char*));
			strcpy(point_str,ptr_aux->name);
			strcat(point_str,".");
			strcat(path,point_str);
			ptr_aux = ptr_aux->next;
	}
		char * point_str = malloc(100*sizeof(char*));
		strcpy(point_str,ptr_aux->name);
		strcat(point_str,".");
		strcat(path,point_str);
	if (bool==1){
		ptr_aux->next= malloc(sizeof(scope));
		ptr_aux->next->name= name;
		ptr_aux->next->next= NULL;
		ptr_aux->next->variables=NULL;
	}else{
	 	if(ptr_aux->variables==NULL){
	 		node_variable * p = malloc(sizeof(node_variable));
	 		strcat(path,name);
	 		p->name= path;
	 		p->next=NULL;
	 		ptr_aux->variables =p;
	
	 	}else{

		 	node_variable * iterator = ptr_aux->variables;
		 	while(iterator->next!=NULL){
		 		iterator= iterator->next;
		 	}
		 	node_variable * p = malloc(sizeof(node_variable));
		 	strcat(path,name);
		 	p->name= path;
		 	p->next=NULL;
		 	iterator->next =p;

	 	}
	}	

}

void remove_scope(scope * ptr){

	scope * ptr_aux = ptr;
	if(ptr->next==NULL){
		free(ptr);
		ptr=NULL;
		return ;
		
	}
	while(ptr_aux->next->next!=NULL){
		ptr_aux=ptr_aux->next;
	}
	free(ptr_aux->next);
	ptr_aux->next=NULL;
	
}

