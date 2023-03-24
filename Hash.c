#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hash.h"

void initHash(HashStruct *hashStruct){
    for(int i =0;i<MAX;i++){
        
        init(&(hashStruct-> hashes[i]));
    }
hashStruct ->size = 0;
}

int hash(char *key){
    int sum = 0;
    
    for(int i=0;key[i]!= 0;i++){
        sum += key[i]*(i+1); 
    }
    return sum%MAX;
}

/*bool containsKey(HashStruct *hashStruct, char *key, compare equal) {

    int hashValue = hash(key);

    int pos = indexOf(&hashStruct->hashes[hashValue], key, equal);
    return (pos!=-1)?true:false;
}*/


