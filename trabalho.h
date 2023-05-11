#ifndef EstruturaDeDados_Hash_h
#define EstruturaDeDados_Hash_h
#include "DoublyLinkedList.h"
#define MAX 3000

typedef struct HashStruct {
    DoublyLinkedList hashes[MAX];
    int size;
}HashStruct;

void initHash(HashStruct *hashStruct);
bool isHashEmpty(HashStruct *hashStruct);
int hash(char *key);
int put(HashStruct *hashStruct, char *key, void *data, compare equal);
bool containsKey(HashStruct *hashStruct, char *key);
void* get(HashStruct *hashStruct, char *key);
void* removeKey(HashStruct *hashStruct, char *key);
void showHashStruct(HashStruct *hashStruct, printNode print);
int Mcolisao(HashStruct *hashStruct);
void gravacao(HashStruct *hashStruct,int c);
#endif