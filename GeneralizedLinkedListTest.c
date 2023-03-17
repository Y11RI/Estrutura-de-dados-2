#include <stdlib.h>
#include <stdio.h>
#include "GeneralizedLinkedList.h"
#include "log.h"

int main() {
    FILE *file = fopen("program.log","w");
    log_set_level(LOG_INFO);
	log_add_fp(file, LOG_TRACE);

    Node *listaGeneralizada = NULL;
    
    printf("Lista: ");
    //showGeneralizedList(listaGeneralizada);
    addAtom(&listaGeneralizada, 3);
    addAtom(&listaGeneralizada, 5);

    //Node *lista2 = NULL;
    //addAtom(&lista2, 7);
    //addAtom(&lista2, 9);

    //addList(&listaGeneralizada, &lista2);
    //addList(&listaGeneralizada, &lista3);
    showGeneralizedList(listaGeneralizada);
    return 0;
}
