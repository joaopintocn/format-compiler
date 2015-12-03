#include <stdio.h>
#include <stdlib.h>
#include <string.h>








/*Se bool=1 , será adicionado um novo escopo
Se bool=0 será adicionado uma variável no último escopo válido
E key receberá o valor que indica os escopos da variável

*/
Scope *  generateKeyFor( int bool, char * name, Scope * ptr, char * key ){


   Scope * ptr_aux = ptr;
   printf("0\n");
  if(bool){


        Scope * p = malloc(sizeof(Scope*));
        char * path = malloc(100*sizeof(char));
        strcpy(path,ptr->prev_scope);
        strcat(path,".");
        strcat(path,name);
        p->name = name;
        p->next = ptr_aux;
        p->prev_scope=path;
        p->variables=NULL;
        key=name;
        print_list(ptr);
        return p;       
        
    }else{

      if(ptr_aux->variables==NULL){

        node_variable * p = malloc(sizeof(node_variable));
        char * path = malloc(100*sizeof(char));
        strcpy(path,ptr_aux->prev_scope);
        strcat(path,".");
        strcat(path,name);
        p->path= path;
        p->name=name;
        p->next=NULL;
        ptr_aux->variables =p;
        strcpy(key, p->path);

      }else{

        node_variable * iterator = ptr_aux->variables;
        while(iterator->next!=NULL){
          iterator= iterator->next;
        }
        char * path = malloc(100*sizeof(char *));
        strcpy(path,ptr_aux->prev_scope);
        strcat(path,".");
        node_variable * p = malloc(sizeof(node_variable));
        strcat(path,name);
        p->path= path;
        p->name=name;
        p->next=NULL;
        iterator->next = p;
        strcpy(key, p->path);

      }
      return NULL;
    } 
}

char * getKeyFor(Scope * ptr ,char * name){

    Scope * ptr_aux= ptr;
    if (ptr_aux->next==NULL){
      node_variable * p= ptr_aux->variables;
      while(p->next!=NULL){
        p=p->next;
        if (p->name==name)
             return p->path;
      }
      
    }else{
    while(ptr_aux!=NULL){
      node_variable * p= ptr_aux->variables;
      if (ptr_aux->variables!=NULL){
        if(p->next==NULL){
          if (p->name==name)
             return p->path;
         
        }else{
          while(p->next!=NULL){
          p=p->next;
          if (p->name==name)
             return p->path;
        }
      }

      }
      ptr_aux=ptr_aux->next;
    }
  }
    return NULL;

}
