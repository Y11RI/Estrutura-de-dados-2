#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "log.h"

int main(){
    log_set_level(LOG_TRACE);
    LinkedList lista;
    init(&lista);

int *numero = malloc(sizeof(int));
	*numero = 10;
	enqueue(&lista, numero);
	numero = malloc(sizeof(int));
	*numero = 20;
	enqueue(&lista, numero);
    return EXIT_SUCCESS;
}