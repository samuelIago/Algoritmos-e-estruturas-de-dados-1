#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Cria o arquivo entrada_escrita.txt
    FILE *fp = fopen("entrada_escrita.txt", "w"); // vai abrir ou criar um arquivo do tipo texto(txt), que posso apenas ler"r" e é de texto"t"
    // int c; o fgetc podia ser int

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo criado\n");
    }

    fputc('A',fp);//cria apenas um caractere

    fclose(fp); // fecha o arquivo criado
    if (fclose(fp))
    {
        printf("Arquivo fechado com sucesso");
    }

    return 0;
}
