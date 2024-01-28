#include<stdio.h>
#include<stdlib.h>
//estrutura para armazenar um por vez (CPF ou RG)
typedef union documentos
{
    char rg[10];
    char cpf[11];
}Documentos;

typedef struct pessoa
{
    char nome[20];
    int idade;
    Documentos doc;//variavel para armazenar o CPF ou RG
}Pessoa;

void dados_pessoa(Pessoa *p){
    int i;
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome);
    printf("\n Infome a idade: \t");
    scanf("%d", &p->idade);
    printf("Digite 1 para colocar o CPF ou digite 0 para colocar o RG");
    scanf("%d",&i);
    if(i){
        printf("Voce escolheu colocar o CPF:\n");
        scanf(" %[^\n]", p->doc.cpf);
    }else{
        printf("Voce escolheu colocar o RG: \n");
        scanf(" %[^\n]", p->doc.rg);
    }
    //nao precida desse if e else, pois esta apontando para o mesmo lugar
}
int main()
{
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    dados_pessoa(pessoa); // esta recebendo o endereço da variavel
    printf("CPF = %s \n RG = %s", pessoa->doc.cpf, pessoa->doc.rg);
    free(pessoa);
    return 0;
}
