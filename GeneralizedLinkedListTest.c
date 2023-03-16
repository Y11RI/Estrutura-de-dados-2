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
    showGeneralizedList(listaGeneralizada);
    addAtom(&listaGeneralizada, 3);
    //addAtom(&listaGeneralizada, 5);
    return 0;
}
