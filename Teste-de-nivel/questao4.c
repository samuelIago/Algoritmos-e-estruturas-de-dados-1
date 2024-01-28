/*4. Escreva uma função que receba dois números positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles.*/
#include <stdio.h>
#include <stdlib.h>

float somar(float a, float b)
{
    int i;
    for (i = a; i < b; i++)
    {
        // int adicao +=i;
    }
    // return adicao;
}
// desculpe nao consegui fazer essa
int main(void)
{
    float x, y, somas;
    printf("Insira o primeiro valor:\n");
    scanf("%f", &x);
    printf("Insira o segundo valor:\n");
    scanf("%f", &y);

    somas = somar(x, y);
    printf("%.2f", somas);
}