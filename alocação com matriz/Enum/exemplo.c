#include <stdio.h>
// Enumeração (enum)
// bool é apenas o nome, pode ser qualquer outro nome
typedef enum bool{
    true, // 0
    false // 1
} Bool;
int main(){
    Bool resposta;
    printf("Voce gosta de algoritmos? \n 0- true\n 1- false\n");
    scanf("%d", &resposta);

    if (resposta == true){
        printf("Boa escolha");
    }
    else if (resposta == false)
    {
        printf("Que Pena! \n");
    }
    return 0;
}
