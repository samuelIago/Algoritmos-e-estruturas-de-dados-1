/*Questão 1) Crie um TAD chamado ContaBancaria que possui os seguintes campos: titular, número e saldo. Como operações, considere as seguintes:
* Cria conta: aloca dinamicamente uma estrutura do tipo ContaBancaria e retorna seu endereço. Os campos titular, número e saldo devem ser fornecidos como parâmetros;
* Deposita: recebe, como parâmetros, o endereço de uma estrutura do tipo
ContaBancaria e um valor, atualizando o saldo;
* Saca: recebe, como parâmetros, o endereço de uma estrutura do tipo ContaBancaria e um valor, atualizando o saldo. Verificar se o saldo é suficiente para realizar o saque;
* Transfere: recebe, como parâmetros, os endereços das estruturas do tipo
ContaBancaria e um valor, atualizando os saldos. Verificar se o saldo é suficiente para realizar a transferência;
* Saldo: recebe o endereço de uma estrutura do tipo ContaBancaria e retorna seu saldo;
* Exclui conta: libera o espaço alocado dinamicamente para a estrutura.
Faça o que se pede nos itens a seguir:
a) Crie um arquivo (contabancaria.h) com a interface do TAD.
b) Crie um arquivo (contabancaria.c) com a implementação do TAD.
c) Crie um programa que utiliza o TAD ContaBancaria. */

// na main, coloca as funcoes em pratica

#include<stdio.h>
#include<stdlib.h>
#include"contabancaria.h"
int main(){
    ContaBancaria *Conta;
    char titular[30];
    int numero;
    float saldo;
    float deposito;
    printf("Titular:\n");
    scanf(" %[^\n]s",titular);
    printf("Numero:\n");
    scanf("%d",&numero);
    printf("Saldo\n");
    scanf("%f$",&saldo);
    Conta = Criaconta(titular,numero,saldo);
    imprime(Conta);
    printf("Vai depositar quanto? \n");
    scanf("%f",&deposito);
    
    Deposita(Conta,deposito);

    free(Conta);
    return 0;
}