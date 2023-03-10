#include <stdio.h>
#include <stdlib.h>
#include "GeneralizedLinkedList.h"
#include "log.h"

int addAtom(Node **list, int atom){
    Node *no =(Node*)malloc(sizeof(Node));
    if(no == NULL)return -1;
         no.atomlist->atom = atom;
          no->next = NULL;
        }
    if(list->list!=NULL){
        Node *aux = (*Node)malloc(sizeof(Node));
        aux = list->list;
            while(aux->next!= NULL){
            aux = aux->next;
            }
        aux->next = no.atomList->atom;
    return 1;
    }



}

void show(Node *list){
    return NULL;
}