#include <stdio.h>
#include <math.h>
float areaQuadrado(float L)
{
    return pow(L, 2);
}

float areaHexagono(float L)
{
    return (3 * pow(L, 2) * sqrt(3)) / 2;
}

float calcula(float l, float (*area)(float))
{
    return (*area)(l); // a funcao calcula precisa de um valor float e
}

int main()
{
    float n1;
    int n2;
    printf("Coloque o valor do lado");
    scanf("%f", &n1);
    printf("Digite 1 para a area do quadrado e 2 para a area do hexagono");
    scanf("%d", &n2);
    if (n2 == 1)
    {
        float resultado = calcula(n1, areaQuadrado);
        printf("%f", resultado);
    }
    else if (n2 == 2)
    {
        float resultado = calcula(n1, areaHexagono);
        printf("%f", resultado);
    }
    else
    {
        printf("erro");
    }
}