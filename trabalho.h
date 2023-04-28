#ifndef EstruturaDeDados_Hash_h
#define EstruturaDeDados_Hash_h
#include "DoublyLinkedList.h"
#define MAX 3225

typedef struct HashStruct {
    DoublyLinkedList hashes[MAX];
    int size;
}HashStruct;

void initHash(HashStruct *hashStruct);
bool isHashEmpty(HashStruct *hashStruct);
int hash(char *key);
int put(HashStruct *hashStruct, char *key, void *data);
bool containsKey(HashStruct *hashStruct, char *key);
void* get(HashStruct *hashStruct, char *key);
void* removeKey(HashStruct *hashStruct, char *key);
void showHashStruct(HashStruct *hashStruct);

#endif