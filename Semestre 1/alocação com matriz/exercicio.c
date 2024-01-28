/*aloque dinamicamente uma matriz de inteiros 5x5 e preencha cada elemento
da matriz com o seu respectivo indice (matriz[i][j]=i*5+j). Em
seguida imprima a matriz
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int linhas = 5, colunas = 5, i, j;
//alocando um espaço na memoria um vetor de ponteiros chamado matriz
//as 5 linhas iniciais deve ser ponteiros
    int **matriz = (int**) malloc(linhas * sizeof(int*));
//aqui está criando as colunas
    for(i = 0; i < linhas; i++){
        matriz[i]=(int*)malloc(colunas * sizeof(int));
        
    }

    for (i = 0; i < linhas; i++){
    for (j = 0; j < colunas; j++){
        matriz[i][j] = i * 5 + j;
    }
    }

    for (i = 0; i < linhas; i++){ 
        for (j = 0; j < colunas; j++){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
    }
    for (i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}