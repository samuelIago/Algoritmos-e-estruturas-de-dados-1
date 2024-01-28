/*01. Escreva uma função que receba dois vetores como entrada e retorne um novo vetor que contenha a soma dos elementos correspondentes dos vetores de entrada.
*/
#include <stdio.h>
#include <stdlib.h>
//uma função ponteiro foi criada que vai receber 2 vetores como entrada e um int.
int *somarVetor(int vet1[], int vet2[], int tamanho){
    int i;
    //um ponteiro sera criado e alocado
    int *resultado = (int*) malloc(tamanho * sizeof(int));
    if(resultado == NULL){
        exit(1);
    }
    for(i = 0; i < tamanho; i++){
        //esse ponteiro vai recever os valores das somas dos vetores
        resultado[i] = vet1[i] + vet2[i];
    }
    return resultado;
    
}

int main(){
    int i;
    int vetor1[] = {1,2,3};
    int vetor2[] = {4,5,6};
    int Tamanho = 3;

    int *soma = somarVetor(vetor1, vetor2, Tamanho);
    for(i = 0; i < Tamanho; i++){
        printf("\nSoma dos vetores na posicao: %d\n", i+1);
        printf("%d ", soma[i]);
    }
    printf("\n");
    free(soma);
    return 0;
}