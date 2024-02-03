/*1. Faça um programa em C que solicita ao usuário informações de funcionários via teclado. As informações digitadas pelo o usuário são: id, nome e salário do funcionário. Armazene as informações digitadas pelo usuário em um arquivo texto.
*/

#include<stdio.h>
int main(){
    FILE *informacoes = fopen("funcionarios-info.txt","wt");
    if (informacoes == NULL)
    {
        printf("Falha ao abrir o arquivo\n");
    }else{
        printf("Arquivo acessado com sucesso!\n");
    }
    int id;
    char nome[20];
    float salario;
    printf("Insira o nome do funcionario: \n");
    scanf(" %[^\n]s",nome);
    printf("Insira o ID desse funcionario:\n");
    scanf("%d",&id);
    printf("Insira o salario desse funcionario:\n");
    scanf("%f",&salario);
    
    fprintf(informacoes,"Nome: %s\n",nome);
    fprintf(informacoes, "ID: %d\n", id);
    fprintf(informacoes, "Salario: %.2f\n", salario);
    fclose(informacoes);
    return 0;
}