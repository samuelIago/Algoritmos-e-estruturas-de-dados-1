#include<stdio.h>
// Maneira de definir constantes em C
#define TRUE 0
#define FALSE 1

int main(){
    int resposta;
    printf("Voce gosta de algoritmos? \n 0- true\n 1- false\n");
    scanf("%d", &resposta);

    if (resposta == TRUE){
        printf("Boa escolha");
    }else if(resposta == FALSE){
        printf("Que Pena! \n");
    }
    return 0;

}