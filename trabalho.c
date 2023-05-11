#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabalho.h"

void initHash(HashStruct *hashStruct) {
    for (int i=0;i<MAX;i++) {
    //chamando init de DoublyLinkedList para inicializar cada lista do vetor
        init(&(hashStruct->hashes[i]));
    }
    hashStruct->size = 0;
}

bool isHashEmpty(HashStruct *hashStruct) {
    return hashStruct->size==0;
}

int hash(char *key) {
    int sum = 0;
    // percorremos todos os caracteres da string passada
    for (int i = 0; key[i]!=0;i++) {
        //acumulamos os códigos ascii de cada letra com um peso
        sum+=key[i]*(i+1);
    }
    return sum%MAX; //retorna o resto da divisão
}

int put(HashStruct *hashStruct, char *key, void *data, compare equal){
    if (!containsKey(hashStruct, key)){
        //adiciona na fila que está na posição devolvida pela função hash
        int res = enqueue(&hashStruct->hashes[hash(key)],data);
        //incrementa a qtde de elementos baseado na quantidade inserida por enqueue
        hashStruct->size+=res;
        return res;
    }
    return 0;
}

bool containsKey(HashStruct *hashStruct, char *key) {
    //calcula a posição
    int hashValue = hash(key);
    //busca na fila a posição da chave
    int pos = indexOf(&hashStruct->hashes[hashValue], key);
    return (pos!=-1)?true:false;
}

void* get(HashStruct *hashStruct, char *key) {
    // descobre em qual fila/lista está o dado
    int hashValue = hash(key);
    //first é nó sentinela, começamos do segundo nó
    Node *aux = hashStruct->hashes[hashValue].first->next;
    // procuramos o dado na lista
    while(aux!=hashStruct->hashes[hashValue].first)
        aux=aux->next;
    return aux->data;
}

void* removeKey(HashStruct *hashStruct, char *key) {
    int hashValue = hash(key);
    int pos = indexOf(&hashStruct->hashes[hashValue], key);
    void* result = removePos(&hashStruct->hashes[hashValue], pos);
    if (result!=NULL) hashStruct->size--;
    return result;
}

void showHashStruct(HashStruct *hashStruct, printNode print) {
    printf("There are %d elements in the Hash\n\n",hashStruct->size);
    for (int i=0; i < MAX; i++) {
        printf("Hash %d has %d elements: ",i,hashStruct->hashes[i].size);
        show(&hashStruct->hashes[i],print);
        printf("\n");
    }
}
int Mcolisao(HashStruct *hashStruct){
    int i=0,j=0;
    while(i != MAX){
        if(hashStruct->hashes[i].size>j){
            j=hashStruct->hashes[i].size;
        }
    i++;
    }
    return j;
}
void gravacao(HashStruct *hashStruct, int c){
    FILE *grav = fopen("gravacao.ppm","w");
    if(grav == NULL){
        printf("arquivo de gravacao nao abriu!!!");
    }else{
    fprintf(grav,"P3 30 30 255");
        for(int i = 0; i<MAX; i++){
            fprintf(grav," %d 0 0 ",c*hashStruct->hashes[i].size);
            
        }
        fclose(grav);
}
}