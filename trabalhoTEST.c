#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabalho.h"


int main() {
    HashStruct hashes;
    initHash(&hashes);

    FILE *file;
    char palavra[50];

    file = fopen("ListaDePalavrasPT.txt","r"); 
    
    do{
        palavra = fgets(file);
        hash('palavra');
        //put(&hashes,palavra,);
        //printf("%c" , palavra);

    }while(file !=EOF);

    fclose(pont_arq);

    return 0;
}

