#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct LETRAS{
       // char caracter[256];
        int qtd[256];
//}LETRAS;

/* int stlen(char * str){
    int total =0;
        while(str[total]!= '\0')
                    total++;
                return total;
            }*/

int main() {
    char arquivo[50];
    char c;
    int ALFABETO[256];
    //char result[100];
    int cont = 0;
    int v = 1;
    printf("Insira o arquivo texto que será lido: ");
    scanf("%s",arquivo);
    FILE *arq = fopen(arquivo, "r");

    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
    else{
        for(int i = 0;i<=256;i++){
        ALFABETO[i]= 0;
        }

          while( (c=fgetc(arq))!= EOF ){ // pega caracter por caracter do arquivo
            
            for(int i = 0;i<=256;i++){
                if(c == i){
                    ALFABETO[i]++;
                    //printf("%d",ALFABETO[i]);
                    //printf("\n");
                }
            }
        
            
            //putchar(c);
           // LETRAS *data = (LETRAS*)malloc(sizeof(LETRAS));
            
           /* if(cont==0){
                data->caracter[0] = c; 
                data->qtd[0] = 1;
                
                cont=1;
                //printf("%d",data->qtd[0]);
                //printf("%c",data->caracter[0]);
            }*/
            /*if(cont!= 0){
                for(int i=0; i<256 ;i++){
                    if(data->caracter[i] == c){
                        
                        if(data->qtd[i] == 0){
                             data->qtd[i] = 1;
                        }else{
                            data->qtd[i]++; 
                        }
                        cont = 1;
                    }

                    if(data->caracter[i]!= c){
                        if(data->qtd[i] == 0){
                             data->qtd[i] = 1;
                        }else{
                            data->qtd[i]++; 
                        }
                        cont = 1;
                    }


                }

            }*/

            /*for(int j=0; j<2;j++){
                printf("\n");
                printf("Letra: %c",data->caracter[j]);
                printf("\n");
                printf("numero de repetições: %d",data->qtd[j]);
            }*/

            //int tamanho = strlen(dados);
            //printf("%d",tamanho);
            
            /*for (int i=0;dados[i]!='\0';i++){
                for(int j=33=;j<=256;j++){
                    if(dados[i]== j){
                    
                         LETRAS *L = (LETRAS*)malloc(sizeof(LETRAS)); 
                         strcpy(L->caracter,dados);
                         L->qtd++;
                    }
                }
            }*/
        
        
         
    

    }
    

    }
    for(int j = 0;j<256;j++){
                if(ALFABETO[j]!= 0){
                    printf("LETRA:" "%c "  "FREQUENCIA: %d",j,ALFABETO[j]);
                    printf("\n");
                
            }
}
}
