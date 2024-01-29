#include<stdio.h>
#include<stdlib.h>
int main(){ 
    //aquivo ponteiro fp
    FILE*fp = fopen("entrada.txt","wt");;//vai abrir ou criar um arquivo do tipo texto(txt), que posso escrever"w" e é de texto"t"
    
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }else{
        printf("Arquivo criado\n");
    }
    fclose(fp);// fecha o arquivo criado
    if (fclose(fp)){
        printf("Arquivo fechado com sucesso");
    }

    return 0;
}
