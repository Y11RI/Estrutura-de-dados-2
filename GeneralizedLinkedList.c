#include <stdio.h>
#include <stdlib.h>
#include "GeneralizedLinkedList.h"
#include "log.h"

int addAtom(Node **list, int atom){
    Node *no =(Node*)malloc(sizeof(Node));
    if(no == NULL)return -1;
        no->type = 0;
        no->atomList.atom = atom;
        no->next = NULL;

        if(*list == NULL)
           *list = no;
        else{
            //Node *aux =(Node*)malloc(sizeof(Node));
             Node *aux = NULL;
             for(aux = *list; aux->next != NULL; aux = aux->next);
        
             aux->next = no;
        }

    return 1;
}
int addList(Node **list, Node **subList){
    Node *no =(Node*)malloc(sizeof(Node));
    if(no == NULL)return -1;
        no->type = 1;
        no->atomList.list = *subList ;
        no->next = NULL;

        if(*list == NULL)
           *list = no;
        else{
            //Node *aux =(Node*)malloc(sizeof(Node));
             Node *aux = NULL;
             for(aux = *list; aux->next != NULL; aux = aux->next)
                
        aux->next = no;
        }
    return 1;
}

/*Node* next(Node *list) {
    return (list)->next;
}*/

void showGeneralizedList(Node *list){
   Node *aux3 = ;
    //aux3 = list;
   //while(aux3->next != NULL){
        
        if(aux3->type == 0)
            printf("%d ",aux3->atomList.atom);
    aux3 = aux3->next;
     
   }
}