/*Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e genero. O genero deve ser armazenado como um union com os valores MASCULINO e FEMININO. O programa deve ler os dados de uma pessoa e imprimir os dados da pessoa.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union genero{
    char MASCULINO [10];
    char FEMININO [10];
}Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero sexualidade;
}Pessoa;

void Dados (Pessoa *p){
    int i;
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome);
    printf("\n Infome a idade: \t");
    scanf("%d", &p->idade);
    printf("\n Insira o seu genero, digite 0 para masculino e 1 para feminino \t");
    scanf("%d",&i);
    if(i == 0){
        printf("voce escolheu o genero masculino\n");
        strcpy (p->sexualidade.MASCULINO ,"Masculino");
    }else{
        printf("voce escolheu o genero feminino\n");
        strcpy(p->sexualidade.FEMININO, "Feminino");
    }
}
int main(){
    Pessoa *pessoa = malloc(sizeof (Pessoa));
    Dados(pessoa);
    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
    printf("Genero: %s\n",pessoa->sexualidade.MASCULINO);
    //por causa do union mesmo colocando feminino, o genero vai imprimir corretamente, pois vai apontar para o mesmo espaço de memoria
    free(pessoa);
return 0;   
}


