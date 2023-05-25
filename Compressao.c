#include <stdio.h>
#include <stdlib.h>

int main() {
    char arquivo,a=0,e=0,i=0,o=0,u=0;
    char c;
    char *dados;
    printf("Insira o arquivo texto que será lido: ");
    scanf("%s",&arquivo);
    FILE *arq = fopen(&arquivo, "r");

    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
    else{
        
         while(!feof(arq)){
            dados = fgets(result,100,arq);
            do{
                c = getc(dados);
                switch(c){
                case a:
                    a++;
                    break;
                case e:
                    e++;
                    break;
                case i:
                    i++;
                    break;
                case o:
                    o++;
                    break;
                case u:
                    u++;
                    break;
                }
            }while(c!= "\n");

         }
    }

}