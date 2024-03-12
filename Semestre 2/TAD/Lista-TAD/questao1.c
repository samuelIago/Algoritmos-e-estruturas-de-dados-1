/*Questão 1) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os seguintes campos: preço, local e atração.

a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void preenche(Ingresso* i);

b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima os valores dos seus campos. Protótipo: void imprime(Ingresso* i);

c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void altera_preco(Ingresso* i, float valor);

d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int n, Ingresso* vet);

e) Escreva uma função main para testar as funções anteriores
Faça isso usando TAD
*/
#include <stdio.h>
#include <stdlib.h>
#include "ingresso.c"//gcc -c questao1.c  questao1.exe gcc questao1.o
int main()
{
    int totalIngressos = 0;
    int i;
    printf("Insira a quantidade de Ingressos disponiveis:\n");
    scanf("%d", &totalIngressos);

    float novo_valor;
    int numero;
    Ingresso *ingresso = malloc(totalIngressos * sizeof(Ingresso));
    if (ingresso == NULL)
    {
        exit(1);
    }
    for (i = 0; i < totalIngressos; i++)
    {
        printf("Insira os dados do ingresso: %d\n", i + 1);
        preenche(&ingresso[i]);
    }
    for (i = 0; i < totalIngressos; i++)
    {
        printf("Ingresso: %d \n", i + 1);
        imprime(&ingresso[i]);
    }
    printf("Insira qual ingresso sera modificado: \n");
    scanf("%d", &numero);
    printf("Insira o novo valor: \n");
    scanf("%f", &novo_valor);
    altera_preco(&ingresso[numero - 1], novo_valor); // o numero-1 é para caso o usuario digite 1 o programa entenda que é o ingresso 0
    imprime_menor_maior_preco(totalIngressos, ingresso);
    free(ingresso);
    return 0;
}
