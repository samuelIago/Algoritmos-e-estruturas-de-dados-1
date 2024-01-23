/*2. Crie um tipo estruturado para armazenar dados de uma pessoa. Uma estrutura deste tipo possui os seguintes campos: nome da pessoa, numero do documento e idade.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e imprima os valores dos seus campos.
c) Implemente uma função para realizar uma atualização da idade de uma estrutura do tipo Pessoa.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Pessoa e imprima o nome da Pessoa mais velha e mais nova.
*/
#include<stdio.h>
#include<stdlib.h>
struct pessoa{
    char nome [20];
    int cpf;
    int idade;
};

void Preencher(struct pessoa *Pessoa){
    printf("Digite o seu nome:\n");
    scanf(" %[^\n]s",Pessoa->nome);
    printf("Digite o seu CPF:\n");
    scanf("%d",&Pessoa->cpf);
    printf("Digite a sua idade:\n");
    scanf("%d",&Pessoa->idade);
}

void Imprimir(struct pessoa *Pessoa){
    printf("Nome : %s\n", Pessoa->nome);
    printf("CPF : %d\n", Pessoa->cpf);
    printf("Idade : %d\n", Pessoa->idade);
}

void mudarIdade(struct pessoa *Pessoa){
    printf("Digite a nova idade:\n");
    scanf("%d", &Pessoa->idade);
    Imprimir(Pessoa);
}

void CompararIdade(struct pessoa *Pessoa, int numero){
    int idadeMaior = 0, idadeMenor = 0;
    int i;
    for(i = 0; i < numero; i++){
        if(Pessoa[i].idade > Pessoa[idadeMaior].idade){
            idadeMaior = i;
        }else if(Pessoa[i].idade < Pessoa[idadeMenor].idade){
            idadeMenor = i;
        }
    }
    printf("Essa e a pessoa mais velha:\n");
    printf("Nome: %s\n", Pessoa[idadeMaior].nome);
    printf("Idade: %d\n", Pessoa[idadeMaior].idade);

    printf("Essa e a pessoa mais nova:\n");
    printf("Nome: %s\n", Pessoa[idadeMenor].nome);
    printf("Idade: %d\n", Pessoa[idadeMenor].idade);
}

int main(){
    int numeroPessoas = 0;
    int i;
    int modificar = 0;
    printf("Digite o numero de pessoas: \n");
    scanf("%d",&numeroPessoas);

    struct pessoa *Pessoa = (struct pessoa*) malloc(numeroPessoas * sizeof(struct pessoa));
    if(Pessoa == NULL){
        exit(1);
    }
    for (i = 0; i < numeroPessoas; i++){
        printf("Insira os dados da pessoa %d\n", i+1);
        Preencher(&Pessoa[i]);
    }
    for (i = 0; i < numeroPessoas; i++){
        printf("Mostrando os dados da pessoa %d\n", i + 1);
        Imprimir(&Pessoa[i]);
    }
    printf("Digite qual pessoa voce quer mudar a idade: \n");
    scanf("%d", &modificar);
    mudarIdade(&Pessoa[modificar - 1]);
    printf("Idade atualizada com sucesso! \n");
    Imprimir(&Pessoa[modificar - 1]);

    printf("Nomes da pessoa mais velha e mais nova: \n");
    CompararIdade(Pessoa,numeroPessoas);

    free(Pessoa);
    return 0;
}