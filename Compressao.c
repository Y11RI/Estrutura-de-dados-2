#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct letras{
    //simbolo{
    char caracter[256];
    int qtd;
    //}Simbolo;
}LETRAS;

 int stlen(char * str){
    int total =0;
        while(str[total]!= '\0')
                    total++;
                return total;
            }

int main() {
    char arquivo[50];//,a=0,e=0,i=0,o=0,u=0;
    char c;
    char *dados;
    char result[100];
    

    printf("Insira o arquivo texto que será lido: ");
    scanf("%s",arquivo);
    FILE *arq = fopen(arquivo, "r");

    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
    else{
        
         while(!feof(arq)){
            dados = fgets(result,100,arq);

            //int tamanho = strlen(dados);
            //printf("%d",tamanho);
            
            for (int i=0;dados[i]!='\0';i++){
                for(int j=33;j<=256;j++){
                    if(dados[i]== j){
                    
                         LETRAS *L = (LETRAS*)malloc(sizeof(LETRAS)); 
                         strcpy(L->caracter,dados);
                         L->qtd++;
                    }
                }
            }
           // printf("%d\n",tamanho);
            //printf("%d",total);
            //printf("%s",dados);
            /*do{
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
            }while(c!= "\n");*/

         }
    }

}