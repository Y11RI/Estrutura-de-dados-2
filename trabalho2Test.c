#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabalho2.h"




int main() {
    //int op, chave;
    //Pessoa *p;
    char data;
    inicializarTabela();
    FILE *arq = fopen("ListaDePalavrasPT.txt", "r");
    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
        do{
            data= fgetc(arq);
            
            
            //printf("%c",data);
            
            
            
        /*printf("1 - Inserir\n2 - Buscar\n3 - Imprimir\n0 - Sair\n");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            inserir();
            break;
        case 2:
            printf("Digite a matricula a ser buscada: ");
            scanf("%d", &chave);
            p = buscar(chave);

            if(p)
                printf("\n\tMatricula: %d \tNome: %s\n", p->matricula, p->nome);
            else
                printf("\nMatricula nao encontrada!\n");
            break;
        case 3:
            imprimir();
            break;
        default:
            printf("Opcao invalida!\n");
            
            
        }*/

        }while(data != EOF);
    return 0;
}

