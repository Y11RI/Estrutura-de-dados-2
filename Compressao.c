#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LETRAS{
        char caracter[256];
        int qtd[256];
}LETRAS;

/* int stlen(char * str){
    int total =0;
        while(str[total]!= '\0')
                    total++;
                return total;
            }*/

int main() {
    char arquivo[50];
    char c;
    char result[100];
    int cont = 0;
    int v = 1;
    printf("Insira o arquivo texto que será lido: ");
    scanf("%s",arquivo);
    FILE *arq = fopen(arquivo, "r");
    LETRAS *data = (LETRAS*)malloc(sizeof(LETRAS));

    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
    else{
        
          while( (c=fgetc(arq))!= EOF ){ // pega caracter por caracter do arquivo
            //putchar(c);
            
            
            if(cont==0){
                   //alocamento de espaço na memoria
                data->caracter[0] = c; //fgets(result,100,arq);
                data->qtd[0] = 1;
                
                cont=1;
            }else{
                for(int i=0; i<256 ;i++){
                    if(data->caracter[i]== c){
                        if(data->qtd[i] == 0){
                            data->qtd[i] = 1;
                        }else{
                            return data->qtd[i]++;
                             
                        }
                        cont = 1;
                        //v = 0;
                    }

                }



                /*if(v == 1){
                    LETRAS *data = (LETRAS*)malloc(sizeof(LETRAS));   
                    c = data->caracter[0];
                    data->qtd++;
                    cont++;
                    v = 1;
                }*/

            }

             /*while(data != NULL){
                switch(data){
                    case 65:
                        data-> caracter[65];
                        qtd++;
                        break;                
                        
                    case 69:
                       data-> caracter[69];
                         qtd++;
                        break;

                    case 73:
                        data-> caracter[73];
                        qtd++;
                    
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
            }while(c!= "\n");
        }
         
    */

    }
    printf("%c",data->caracter[1]);
    }
}
