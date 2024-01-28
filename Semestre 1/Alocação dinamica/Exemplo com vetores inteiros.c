#include<stdio.h>//scanf
#include<stdlib.h>//malloc,calloc,free,exit

int main(){
    int tamanho = 5;
    int contador;
    int *vetor = (int*) malloc(tamanho*sizeof(int));
    if(vetor == NULL){
        exit(1); //aborda a execucao do programa 
    }else{
        printf("Alocacao boa\n");
    }
    //ler os dados do vetor:
    printf("Digite os valores do vetor\n");
    for(contador = 0; contador<tamanho; contador++){
        scanf("%d",&vetor[contador]);//ou pode ser vetor+contador

    }
    for (contador = 0; contador < tamanho; contador++)
    {
        printf("%d\n", vetor[contador]);
    }
    free(vetor);
}