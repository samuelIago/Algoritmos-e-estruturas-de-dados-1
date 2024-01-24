/*Questão 1) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os seguintes campos: preço, local e atração.

a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void preenche(Ingresso* i);

b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima os valores dos seus campos. Protótipo: void imprime(Ingresso* i);

c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void altera_preco(Ingresso* i, float valor);

d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int n, Ingresso* vet);

e) Escreva uma função main para testar as funções anteriores*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
typedef struct ingresso
{
    float preco;
    char local[20];
    char atracao[20];
}Ingresso;

void preenche(Ingresso *i){
    printf("Digite o preço do ingresso: \n");
    scanf("%f", &i->preco);
    printf("Digite o local: \n");
    scanf(" %[^\n]",i->local);
    printf("Digite a atração: \n");
    scanf(" %[^\n]",i->atracao);
}
void imprime(Ingresso *i){
    printf("Preço: %.2f \n",i->preco);
    printf("Local: %s \n",i->local);
    printf("Atração:%s \n",i->atracao);
}
void altera_preco(Ingresso *i, float valor){
    printf("Valor atual do ingresso: %.2f \n",i->preco);
    i->preco = valor;
    printf("Novo valor atualizado: %.2f \n",i->preco);
    imprime(i);
}
void imprime_menor_maior_preco(int n, Ingresso *vet){
    int igressoBarato = 0, ingressoCaro = 0;
    int i;
    for (i = 0; i < n; i++){
        if (vet[i].preco > vet[ingressoCaro].preco)
        {
            ingressoCaro = i;
        }
        else if (vet[i].preco < vet[igressoBarato].preco)
        {
            igressoBarato = i;
        }
    }
    printf("Esse é o ingresso mais caro:\n");
    printf("Preço: %.2f\n", vet[ingressoCaro].preco);
    printf("Local: %s\n", vet[ingressoCaro].local);
    printf("Atração: %s\n", vet[ingressoCaro].atracao);

    printf("Esse é o ingresso mais barato:\n");
    printf("Preço: %.2f\n", vet[igressoBarato].preco);
    printf("Local: %s\n", vet[igressoBarato].local);
    printf("Atração: %s\n", vet[igressoBarato].atracao);
}

    int main(){
    setlocale(LC_ALL,"Portuguese");
    int totalIngressos = 0;
    int i;
    printf("Insira a quantidade de Ingressos disponiveis:\n");
    scanf("%d", &totalIngressos);

    float novo_valor;
    int numero;
    Ingresso *ingresso = malloc(totalIngressos*(sizeof(Ingresso)));
    if (ingresso == NULL){
        exit(1);
    }
    for(i = 0; i < totalIngressos; i++){
        printf("Insira os dados do ingresso: %d\n",i+1);
        preenche(&ingresso[i]);
    }
    for (i = 0; i < totalIngressos; i++)
    {
        printf("Ingresso: %d \n", i+1);
        imprime(&ingresso[i]);
    }
    printf("Insira qual ingresso sera modificado: \n");
    scanf("%d",&numero);
    printf("Insira o novo valor: \n");
    scanf("%f", &novo_valor);
    altera_preco(&ingresso[numero -1], novo_valor);
    imprime_menor_maior_preco(totalIngressos,ingresso);
    free(ingresso);
    return 0;
}