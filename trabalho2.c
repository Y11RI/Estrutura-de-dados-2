#include <stdio.h>
#include <stdlib.h>
#include "trabalho2.h"
// constante repesenta o tamanho da tabela
#define M 3225

// estrutura Pessoa com nome e uma matrícula
/*typedef struct{
    char letras[50];
}palavras;*/

// nossa tabela hash do tipo Pessoa
palavras tabelaHash[M];

// inicializa nossa tabela com o valor de codigo -1
void inicializarTabela(){
    int i;
    for(i = 0; i < M; i++)
        tabelaHash[i].letras = NULL;
}

// função de espalhamento (resto da divisão da chave por M)
/*int gerarCodigoHash(int chave){
    return chave % M;
}*/

// função para ler e retornar uma pessoa
/*Pessoa lerPessoa(){
    Pessoa p;
    printf("Digite a matricula: ");
    scanf("%d", &p.matricula);
    scanf("%*c");
    printf("Digite o nome: ");
    fgets(p.nome, 50, stdin);
    return p;
}*/

// inserir uma pessoa na tabela
/*void inserir(){
    Pessoa pes = lerPessoa();
    int indice = gerarCodigoHash(pes.matricula);
    while(tabelaHash[indice].matricula != -1)
        indice = gerarCodigoHash(indice + 1);
    tabelaHash[indice] = pes;
}*/

/*Pessoa* buscar(int chave){
    int indice = gerarCodigoHash(chave);
    while(tabelaHash[indice].matricula != -1){
        if(tabelaHash[indice].matricula == chave)
            return &tabelaHash[indice];
        else
            indice = gerarCodigoHash(indice + 1);
    }
    return NULL;
}*/

/*void imprimir(){
    int i;
    printf("\n------------------------TABELA---------------------------\n");
    for(i = 0; i < M; i++){
        if(tabelaHash[i].matricula != -1)
            printf("%2d = %3d \t %s", i, tabelaHash[i].matricula, tabelaHash[i].nome);
        else
            printf("%2d =\n", i);
    }
    printf("\n----------------------------------------------------------\n");
}*/