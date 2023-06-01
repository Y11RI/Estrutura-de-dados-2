#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct letras{
    //{
        char caracter[256];
        int qtd;
    //}Simbolo;
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
    char *data;
    char result[100];
    int cont = 0;
    int v = 1;
    printf("Insira o arquivo texto que será lido: ");
    scanf("%s",arquivo);
    FILE *arq = fopen(arquivo, "r");

    if(arq == NULL){
        printf("arquivo de palavras vazio");
    }
    else{
        
          while( (c=fgetc(arq))!= EOF ){ // pega caracter por caracter do arquivo
            if(cont==0){
                LETRAS *data = (LETRAS*)malloc(sizeof(LETRAS));   //alocamento de espaço na memoria
                c = data->caracter[0]; //fgets(result,100,arq);
                data->qtd++;
                cont++;
            }else{
                for(int i=0; i<256 ;i++){
                    if(data->caracter[i]== c){
                        data->qtd++;
                        cont++;
                        v = 0;
                    }

                }



                if(v == 0){
                    LETRAS *data = (LETRAS*)malloc(sizeof(LETRAS));   
                    c = data->caracter[0];
                    data->qtd++;
                    cont++;
                    v = 1;
                }

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
        } 







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
            }while(c!= "\n");*/
    }
         
    

}