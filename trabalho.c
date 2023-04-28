#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hash.h"

typedef struct palavra{
    char letras[48];
}palavra;

int main() {

    HashStruct hashes;
    initHash(&hashes);
    char palavra;

    FILE *file =  fopen("ListaDePalavrasPT.txt","r");

      if(file == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    do{
        palavra* p =(palavra*) malloc(sizeof(palavra));
        p= fgetc(file);
        //printf("%c" , palavra);
        hash(p);        
        //printf("%d ",hash(p));
       put(&hashes,p->letras, p, comparaChaves);
       

    }while(palavra!= EOF);
    
    fclose(file);

    return 0;

}

