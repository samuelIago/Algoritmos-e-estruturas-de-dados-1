#include<stdio.h>
#include<stdlib.h>
/*Exemplo de animhamento de estruturas*/
//ou seja estrutura dentro de estrutura
typedef struct disciplina{
    char nome[20];
    float media;
    int codigo;
}Disciplina;


typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    //variavel | tipo da variavel
    Disciplina materias;//eis o bendito aninhamento
    //ou seja a struc Disciplina foi declarada dentro da struct Aluno
    //da forma que ela é um ponteiro de nome materias
}Aluno;

int main(void){//a variavel aluno é do tipo struct Aluno
    Aluno aluno;
    aluno.idade = 19;
    aluno.matricula = 20430;
    aluno.materias.codigo = 43421;//acessa a variavel aluno, na variavel materias do tipo struct com o nome de Disciplina e dentro dela acessa a parte codigo.
    printf("%d, %d, %d \n", aluno.idade,aluno.matricula,aluno.materias.codigo);
    return 0;
}