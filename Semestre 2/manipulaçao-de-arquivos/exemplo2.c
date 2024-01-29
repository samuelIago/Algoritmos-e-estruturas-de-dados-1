#include <stdio.h>

int main(){
    int c;
    int nlinhas = 0;
    FILE *fp;
    //abre o arquivo para leitura
    fp = fopen("entrada.txt","rt");
    if(fp == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }
    //le caractere a caractere//EOF end of file
    //se fgetc le algum caractere ele sera armazenado em c ate que o arquivo acabe EOF
    while ((c = fgetc(fp))!= EOF){
        if(c == '\n')//e se o caractere for uma quebra de linha o n de linhas sera incrementado
        nlinhas++;
    }
    //fecha arquivo
    fclose(fp);
    //exibe resultado na tela
    printf("Numero de linhas = %d\n",nlinhas);
    return 0;
}