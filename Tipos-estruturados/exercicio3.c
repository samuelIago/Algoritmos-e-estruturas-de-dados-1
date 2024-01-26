/*Questão 3) Defina estruturas para representar retângulos (dadas a base e a altura) e círculos (dado o raio), e implemente as funções a seguir:
a) Dado um círculo, crie e retorne o maior retângulo circunscrito de altura h. Considere que h é menor do que o diâmetro do círculo.
Protótipo: Ret* ret_circunscrito(Circ* c, float h);

b) Dado um retângulo, crie e retorne o maior círculo interno ao retângulo.
Protótipo: Circ* circ_interno(Ret* r);*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


typedef struct retangulo{
    float base;
    float altura;
}Ret;

typedef struct circulo{
    float raio;
}Circ;

Ret *ret_circunscrito(Circ *c, float h){
    Ret *maiorRetangulo = malloc(sizeof(Ret));
    maiorRetangulo->base = 2 * sqrt(pow(c->raio, 2) - pow(h/2, 2));
    maiorRetangulo->altura = h;
    return maiorRetangulo;
}

Circ *circ_interno(Ret *r){
    Circ *maiorCirculo = malloc(sizeof(Circ));
    maiorCirculo->raio = fmin(r->base/2, r->altura/2);
    return maiorCirculo;
}
int main()
{
    Ret *RetangCircunscrito;
    Circ *CirculoInterno;
    float base, altura, raio;

    printf("Insira a base:\n");
    scanf("%f", &base);

    printf("Insira a altura:\n");
    scanf("%f", &altura);

    printf("Insira o raio:\n");
    scanf("%f", &raio);

    Circ circuloInput;
    circuloInput.raio = raio;
    RetangCircunscrito = ret_circunscrito(&circuloInput, altura);

    printf("Base do maior retangulo: %.2f, Altura do maior retangulo: %.2f\n", RetangCircunscrito->base, RetangCircunscrito->altura);

    Ret retanguloInput;
    retanguloInput.base = base;
    retanguloInput.altura = altura;
    CirculoInterno = circ_interno(&retanguloInput);
    printf("Raio do maior circulo: \n");
    printf("%.2f",CirculoInterno->raio);
    // Liberando a memória alocada
    free(RetangCircunscrito);
    free(CirculoInterno);

    return 0;
}
