#include<stdio.h>

typedef struct pessoa
{
    char nome[20];
    int idade;
}Pessoa;
//          vai receber um ponteiro da variavel tipo Pessoa(struct)
void dados_pessoa(Pessoa *p){
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome);
    printf("\n Infome a idade: \t");
    scanf("%d", &p->idade);
}

int main(){
    Pessoa pessoa;
    dados_pessoa(&pessoa);
    return 0;
}