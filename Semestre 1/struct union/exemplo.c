#include<stdio.h>

typedef union tipodados{
    int meu_int;
    float meu_float;
}Dados;

int main(){
    Dados uniao;
    printf("Digite os dados: \t");
    scanf("%f %d",&uniao.meu_float, &uniao.meu_int);
    printf("Os dados informados: meu_float %f meu_int = %d ", uniao.meu_float,uniao.meu_int);
    //ele armazena o ultimo dado colocado, o outro vira lixo de memoria.
    return 0;
}