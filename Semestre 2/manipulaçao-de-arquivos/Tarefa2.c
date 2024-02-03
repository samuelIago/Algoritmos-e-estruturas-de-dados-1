/*2. Implemente um programa em C para ler o nome e as notas de um número N de alunos e armazená-los em um arquivo.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[20];
    float nota[3];
    int matricula;
    float media;
} Aluno;

int main(){
    int N = 0;
    printf("Insira quantos estudantes serao matriculados:\n");
    scanf("%d",&N);
    Aluno *estudante = malloc(N * sizeof(Aluno));
    if (estudante == NULL){
        printf("Erro na alocação de memória!\n");
        exit(1);
    }
    FILE *informacoes = fopen("estudantes-info.txt", "wt"); //abrindo um arquivo apenas pra escrever 'w'

    if (informacoes == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto!\n");
    }
    int i = 0, j = 0, soma = 0;
    for (i = 0; i < N; i++){
        printf("Insira o nome do aluno: %d\n",i+1);
        scanf(" %[^\n]s",estudante[i].nome);
        printf("Insira a matricula do aluno: %d\n", i + 1);
        scanf(" %d", &estudante[i].matricula);
        printf("Insira as notas do aluno %d\n", i + 1);
        for(j = 0; j < 3; j++){
            printf("Nota: %d\n",j+1);
            scanf("%f",&estudante[i].nota[j]);
            soma += estudante[i].nota[j];
            }
        estudante[i].media = soma/3;
        soma = 0;

        if (estudante[i].media >= 7.0){
            // no            aqui '%s estudande[i].nome vai imprimir a parte de string e vai parar no \t e estudante[i].media vai imprimir a media
            fprintf(informacoes,"%s\tMatricula: %d\tMedia: %.2f\tAprovado\n", estudante[i].nome,estudante[i].matricula, estudante[i].media);
        }
        else
        {
            fprintf(informacoes,"%s\tMatricula: %d\tMedia: %.2f\tReprovado\n", estudante[i].nome, estudante[i].matricula, estudante[i].media);
        }
    }

    fclose(informacoes);
    free(estudante);
    return 0;
}
