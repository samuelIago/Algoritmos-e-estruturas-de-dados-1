/*Questão 1) Escreva um programa em C que leia de um arquivo as notas dos alunos de uma turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação (aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída, considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo de saída “saída_q3.txt”, como ilustrado a seguir.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct aluno{
    char nome[20];
    int nota[3];
    float media;
}Aluno;

int main(){
    Aluno *estudante = malloc(sizeof(Aluno));
    FILE*arquivo = fopen("entrada_q3.txt","rt");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto!\n");
    }
    int i = 0;
    //vai armazernar na struct na parte nome, com 20 caracteres de espaço e vai procurar no arquivo.
    do{
        fgets(estudante[i].nome,20,arquivo); 
        if(arquivo == '\n'){
            i++;
        }
        } while (!feof(arquivo));//o feof serve para indicar o fim do arquivo
        for(i = 0; i < 3; i++){
            printf("%s\n",estudante[i].nome);
        }
    
    fclose(arquivo);
    free(estudante);
    return 0;
}