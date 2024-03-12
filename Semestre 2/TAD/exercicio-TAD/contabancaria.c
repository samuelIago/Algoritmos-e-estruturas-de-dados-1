#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contabancaria.h"

// é nesse aquivo que se coloca as funcoes, oque elas fazem e seus parametros
struct contabancaria
{
    char titular[30];
    int numero;
    float saldo;
};

ContaBancaria *Criaconta(char titular[30], int numero, float saldo)
{
    ContaBancaria *Conta = (ContaBancaria *)malloc(sizeof(ContaBancaria));
    if (Conta == NULL)
    {
        printf("Falha ao alocar a memoria\n");
        exit(1);
    }
    strcpy(Conta->titular, titular);
    Conta->numero = numero;
    Conta->saldo = saldo;
    return Conta;
}
float Saldo(ContaBancaria *Conta)
{
    printf("Saldo: %.2f\n", Conta->saldo);
    return Conta->saldo;
}
void imprime(ContaBancaria *Conta)
{
    printf("Titular: %s\n", Conta->titular);
    printf("Numero: %d\n", Conta->numero);
    Saldo(Conta);
}
void Deposita(ContaBancaria *Conta, float valor)
{
    Conta->saldo += valor;
    imprime(Conta);
}
void Saca(ContaBancaria *Conta, float valor)
{
    if (Conta->saldo >= valor)
    {
        Conta->saldo -= valor;
        imprime(Conta);
    }
    else
    {
        printf("Voce nao tem saldo o sufuciente para esse saque.");
    }
}
void Transfere(ContaBancaria *origem, ContaBancaria *destino, float valor)
{
    if (origem->saldo >= valor)
    {
        origem->saldo -= valor;
        destino->saldo += valor;
    }
    else
    {
        printf("Erro nas transferencia, valor acima do seu saldo.\n");
    }
}
void ExcluiConta(ContaBancaria *Conta)
{
    free(Conta);
}
