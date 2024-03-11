/*2) Alfredo é dono de uma empresa, que nos ultimos meses, 
apresentou algumas irregularidades na folha de pagamento de alguns departamentos.
O empresario mantém sempre atualizada a relação de seus funcionários em um arquivo, 
mas não consegue descobrir uma forma prática de descobrir quanto gasta com a folha de pagamento por departamento 
da sua empresa. Dessa forma, você foi contratado para ajudar Alfredo nesse problema. 
Você deve escrever um programa em C que, dado o arquivo com a relação de funcionários, 
imprima o valor gasto com a folha de pagamento para um determinado departamento. 
Os dados dos funcionários da empresa devem ser fornecidos para um vetor, 
de modo que uma função execute tal tarefa deve ser implementada, 
obedecendo ao protótipo: void copia_dados(File *fl, int n, Funcionario **pessoal);
Em seguida, você deve implementar uma função que imprime o valor gasto para um determinado departamento. 
Essa função deve obedecer ao seguinto protótipo: 
void imprime_folha_pagamento(int n, Funcionario **pessoal, char depto); 
O formato do arquivo de texto é mostrado a seguir 
(funcional, nome, departamento e salário e cada informação numa linha é separado por um caractere de tabulação '\t') 
e a primeira linha do arquivo representa o numero de funcionários da empresa.
caso use essa função
imprime_folha_pagamento:
imprime_folha_pagamento(num_func,pessoal'A');
imprime_folha_pagamento(num_func,pessoal'B');
imprime_folha_pagamento(num_func,pessoal'C');
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char funcional[5];
    char nome[50];
    char departamento;
    float salario;
} Funcionario;

void copia_dados(FILE *fl, int n, Funcionario **pessoal) {
    for (int i = 0; i < n; i++) {//esta escaneando os dados
        fscanf(fl, "%s %s %c %f", pessoal[i]->funcional, pessoal[i]->nome, &pessoal[i]->departamento, &pessoal[i]->salario);
    }
}

void imprime_folha_pagamento(int n, Funcionario **pessoal, char depto) {
    float total = 0;
    printf("Funcionarios do departamento %c:\n", depto);
    for (int i = 0; i < n; i++) {
        if (pessoal[i]->departamento == depto) {//essa funcao esta verificando se o funcionario atual é o do mesmo departamento
            printf("%s\t%s\t%c\t%.2f\n", pessoal[i]->funcional, pessoal[i]->nome, pessoal[i]->departamento, pessoal[i]->salario);
            total += pessoal[i]->salario;
        }
    }
    printf("Total gasto no departamento %c: R$ %.2f\n\n", depto, total);
}

int main() {
    FILE *fl = fopen("funcionarios.txt", "r");
    if (fl == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    int num_func;
    fscanf(fl, "%d", &num_func);

    Funcionario **pessoal = (Funcionario **)malloc(num_func * sizeof(Funcionario *));
    if (pessoal == NULL) {
        printf("Erro de alocação de memória");
        return 1;
    }

    for (int i = 0; i < num_func; i++) {
        pessoal[i] = (Funcionario *)malloc(sizeof(Funcionario));
        if (pessoal[i] == NULL) {
            printf("Erro de alocação de memória");
            return 1;
        }
    }

    copia_dados(fl, num_func, pessoal);

    fclose(fl);

    imprime_folha_pagamento(num_func, pessoal, 'A');
    imprime_folha_pagamento(num_func, pessoal, 'B');
    imprime_folha_pagamento(num_func, pessoal, 'C');

    for (int i = 0; i < num_func; i++) {
        free(pessoal[i]);
    }
    free(pessoal);

    return 0;
}

