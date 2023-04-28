#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabalho.h"

typedef struct palavra{
    char letras[48];
}palavra;

/*void printCliente(void *data) {
    palavra *digito = (palavra*)data;
    printf("{%s} - ", digito->letras);
}*/


int main() {
    int i = 0;
    char p;
    int guardahash;

    HashStruct hashes;
    initHash(&hashes);

    

    FILE *file =  fopen("ListaDePalavrasPT.txt","r");

      if(file == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    do{
        //palavra* p =(palavra*) malloc(sizeof(palavra));
        char vetpalavras[50];
        p = fgetc(file);

       strcpy( vetpalavras[50],p);
       put(&hashes, vetpalavras, p);

        //showHashStruct(&hashes, printpalavra); 

    }while(palavra!= EOF);
    
    fclose(file);

    return 0;

}

