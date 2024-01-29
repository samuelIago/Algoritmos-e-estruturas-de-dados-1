#include <stdio.h>
#include <stdlib.h>
int main(){
    // aquivo ponteiro fp
    FILE *fp = fopen("entrada.txt", "rt"); // vai abrir ou criar um arquivo do tipo texto(txt), que posso apenas ler"r" e é de texto"t"
    int c;
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado\n");
    }
    c = fgetc(fp); //o fgetc pega apenas  caractere do arquivo fp e o armazena no c.

    

    printf("%c\n",c);
    fclose(fp); // fecha o arquivo criado
    if (fclose(fp)){
        printf("Arquivo fechado com sucesso");
    }

    return 0;
}
