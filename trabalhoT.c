#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabalho.h"
#define TAM 1025
//#define MAX 3225
    typedef struct Words {
    char letras[50];
}Words;
    /*typedef struct arquivo{
        char copia;
    }arquivo;*/


bool comparaChaves(void*key,void* data){
    char*chave =(char*)key;
    Words *w = (Words*)data;
    return(strcmp(chave,w->letras) == 0)?true:false;
}

void printletras(void *data) {
    Words *palavras = (Words*)data;
    printf(" {%s } - ", palavras->letras);
}

int main() {
    HashStruct hashes;

    initHash(&hashes); 
    char *data;

    char result[TAM];
    
     FILE *arq = fopen("ListaDePalavrasPT.txt", "r"); // abertura do arquivo.

    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
    //printf("funciona");
    else{
        // int i=0;
        while(!feof(arq)){ //loop para leitura do arquivo
            //arquivo*a = (arquivo*)malloc(sizeof(arquivo));
            
             data = fgets(result,100,arq); // leitura do arquivo
            if(data!=NULL){
            Words *w = (Words*)malloc(sizeof(Words));
            //printf("%s",data);
            strcpy(w->letras,data);
            //printf("funciona");

            hash(w->letras);
 
            put(&hashes, w->letras, w,comparaChaves);
            //i++;
           // showHashStruct(&hashes, printletras);
    
            }
            //showHashStruct(&hashes, printletras);
        } // fim do loop
        
            showHashStruct(&hashes, printletras);

    }//fim da condicional if
    
        printf("%d",Mcolisao(&hashes));
        
    //int c = 256/Mcolisao(&hashes);

    //printf("%d",Mcolisao(&hashes));
    //gravacao(&hashes, c);

fclose(arq); // função que fecha o arquivo


    return 0;
} // fim do programa




