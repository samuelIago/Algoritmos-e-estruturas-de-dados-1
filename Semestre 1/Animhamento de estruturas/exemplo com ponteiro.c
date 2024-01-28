#include <stdio.h>
#include <stdlib.h>
/*Exemplo de animhamento de estruturas*/
// ou seja estrutura dentro de estrutura
typedef struct disciplina
{
    char nome[20];
    float media;
    int codigo;
} Disciplina;

typedef struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    // variavel | tipo da variavel
    Disciplina *materias; // eis o bendito aninhamento
    // ou seja a estruc Disciplina foi declarada dentro da struct Aluno
    // da forma que ela é um ponteiro de nome materias
} Aluno;

int main(void)
{ // a variavel aluno é do tipo struct Aluno
//alocando o ponteiro aluno
    Aluno *aluno = (Aluno*) malloc(sizeof(Aluno));
    if(aluno == NULL){
        exit(1);
    }//alocar as 2 disciplinas 
    aluno->materias = (Disciplina*) malloc(2* sizeof(Disciplina));
    if(aluno->materias == NULL){
        exit(1);
    }
    //na posicao 0 vamos ter uma struct materias e na posicao 1 vamos ter outra struct materias
    printf("Digite os dados do aluno: nome, idade e matricula\n");
    scanf(" %[^\n]s",aluno->nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);
    int i;
    for(i = 0; i < 2; i++){
        printf("Digite os dados da disciplina %d\n", i+1);
        scanf(" %[^\n]s",aluno->materias[i].nome);
        //a aluno é um ponteiro do tipo struct por isso usa ->, ja materias é uma variavel normal do tipo struct por isso para acessar a variavel nome usa . e não ->
        scanf("%d", &aluno->materias[i].codigo);
        scanf("%f", &aluno->materias[i].media);
    }
    free(aluno->materias);
    free(aluno);
    return 0;
}