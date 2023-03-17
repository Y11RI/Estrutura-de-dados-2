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
        if(list == NULL)
         list = &no;
        else{
            Node *aux = &list->next;
            while(aux->next != NULL)
                aux= aux-> next;
        aux->next = no;
        }
    /*if(list -> list!=NULL){
        Node *aux = (Node*)malloc(sizeof(Node));
        aux = list->next;
            while(aux->next!= NULL){
            aux = aux->next;
            }
        aux->next = no;*/
    return 1;
}

/*void show(Node *list){
   Node *aux2 = list->next;
   aux2->type = 1;
   while(aux2 != list){
        printf(aux2->atomList.list);
    aux2 = aux2->next; 
   }
}*/