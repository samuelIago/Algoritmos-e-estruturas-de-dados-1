#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[20];
    float nota[3];
    float media;
} Aluno;

int main()
{
    Aluno *estudante = malloc(4 * sizeof(Aluno));
    if (estudante == NULL)
    {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }
//             abrindo um arquivo"entrada_q3" que sera apenas pra ler'r'
    FILE *arquivo = fopen("entrada_q3.txt", "rt");
    FILE *saida = fopen("saida_q3.txt", "wt");//e abrindo um arquivo apenas pra escrever 'w'

    if (arquivo == NULL || saida == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto!\n");
    }
    int i ,j;
    for (i = 0; i < 4; i++){
        //escaneia o arquivo, as strings serao colocadas no estudante [i].nome
        //     'nome do arquivo', 'tipo', 'onde sera armazenado'
        fscanf(arquivo, "%s", estudante[i].nome);
        for (j = 0; j < 3; j++){//colocando as notas
            fscanf(arquivo, "%f", &estudante[i].nota[j]);
        }//calculando a media
        estudante[i].media = (estudante[i].nota[0] + estudante[i].nota[1] + estudante[i].nota[2])/ 3;

        if (estudante[i].media >= 7.0){
            //no            aqui '%s estudande[i].nome vai imprimir a parte de string e vai parar no \t e estudante[i].media vai imprimir a media
            fprintf(saida, "%s\t%.2f\tAprovado\n", estudante[i].nome, estudante[i].media);
        }
        else
        {
            fprintf(saida, "%s\t%.2f\tReprovado\n", estudante[i].nome, estudante[i].media);
        }
    }

    fclose(arquivo);
    fclose(saida);
    free(estudante);
    return 0;
}
