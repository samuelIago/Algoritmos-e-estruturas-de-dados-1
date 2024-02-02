#include<stdio.h>
#include"operacao.h"
int main(){
    float num1 = 0;
    float num2 = 0;
    int operacao = 0;
    float resultado = 0;
    printf("Insira o numero 1:\n");
    scanf("%f",&num1);
    printf("Insira o numero 2:\n");
    scanf("%f", &num2);
    printf("Escolha aperacao: 1-soma, 2-subtracao, 3-multiplicacao, 4-divisao \n");
    scanf("%d",&operacao);
    switch (operacao){
    case 1://resultado vai receber o return da funcao soma.
        resultado = soma(num1,num2);
        printf("Resultado da soma: %.2f\n",resultado);

        break;
    case 2:
        resultado = subtracao(num1,num2);
        printf("Resultado da subtracao: %.2f\n", resultado);
        break;
    case 3:
    resultado = multiplicacao(num1,num2);
    printf("Resultado da multiplicacao: %.2f\n",resultado);
        break;
    case 4:
    resultado = divisao(num1,num2);
    printf("Resultado da divisao: %.2f\n",resultado);
        break;
    default:
        break;
    }
    return 0;
    /*LEMBRETES:
    os arquivos tem que ficar na mesma pasta, nesse caso primeiro faz gcc -c operacao.c, depois gcc -c main.c e por fim faz main.exe operacao.o main.o
    ou seja o main sera o arquivo final em que vai ser usado as funcoes do arquivo operacao e lembrando que para compilar faz ./ nome do arquivo, nesse caso, ./main*/
}