/*1. Crie um tipo estruturado para armazenar dados de um funcionário. Uma estrutura deste tipo possui os seguintes campos: nome, salário, identificador e cargo.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario e preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario e imprima os valores dos seus campos.
c) Implemente uma função para realizar uma alteração no salário de uma estrutura do tipo Funcionario.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Funcionario e imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário com o menor salário.
*/
#include <stdio.h>
#include <stdlib.h>
struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[50];
};
void Dados(struct funcionario *Funcionario){
    printf("Digite o seu nome:\n");
    scanf(" %[^\n]s", Funcionario->nome);
    printf("Digite o seu salario:\n");
    scanf("%f", &Funcionario->salario);
    printf("Digite o seu numero de identificacao:\n");
    scanf("%d", &Funcionario->identificador);
    printf("Digite o seu cargo:\n");
    scanf(" %[^\n]s", Funcionario->cargo);//Sempre lembrar de deixar um espaço antes do % quando for strings
}
void Imprimir(struct funcionario *Funcionario){
    printf("Nome: %s\n", Funcionario->nome);
    printf("Salario: %.2f\n", Funcionario->salario);
    printf("Numero de identificacao: %d\n", Funcionario->identificador);
    printf("Cargo: %s\n", Funcionario->cargo);
}
void mudarSalario(struct funcionario *Funcionario){
        printf("Digite o novo salario:\n");
        scanf("%f", &Funcionario->salario);
        Imprimir(Funcionario);
}
//a funcao comparar salario tem como parametros a struc vetor do nome Funcionario e uma funcao int do nome tamanho
void compararSalario(struct funcionario *Funcionario, int tamanho){
    int salMaior = 0, salMenor = 0;
    int i;
    //caso o funcionario cadastrado na posição i tenha um salario maior que o funcionario que tinha o salario menor a funcao sal maior vai receber esses valores que estavam na posicao i
    for (i = 0; i < tamanho; i++){
        if (Funcionario[i].salario > Funcionario[salMaior].salario){
            salMaior = i;
        }
        else if (Funcionario[i].salario < Funcionario[salMenor].salario){
            salMenor = i;
        }
    }
    //o . nao pode modificar o conteudo ja a seta sim pois ela usa o endereço
    printf("Esse e o funcionario com o maior salario:\n");
    printf("Nome: %s\n",Funcionario[salMaior].nome);
    printf("Salario: %.2f\n",Funcionario[salMaior].salario);
    printf("Cargo: %s\n",Funcionario[salMaior].cargo);
//a seta acessa o ponteiro o . acessa o conteudo
    printf("Esse e o funcionario com o menor salario:\n");
    printf("Nome: %s\n", Funcionario[salMenor].nome);
    printf("Salario: %.2f\n", Funcionario[salMenor].salario);
    printf("Cargo: %s\n", Funcionario[salMenor].cargo);
}
int main(){
    int totalFuncionarios = 0;
    int i;
    int mudar = 0;
    printf("Insira a quantidade de funcionarios:\n");
    scanf("%d",&totalFuncionarios);  
//criei um ventor com o nome Funcinario do tipo struct funcionario, que vai receber os enderecos da struct funcionario e alocar um espaço na memoria do tamanho do total dos funcionarios * o tamanho da struct funcionario
    struct funcionario *Funcionario = (struct funcionario*) malloc(totalFuncionarios * sizeof(struct funcionario));
    if (Funcionario == NULL){
        exit(1);
    }

    for(i = 0; i < totalFuncionarios; i++){
        printf("Insira os dados do funcionario: %d\n",i+1);
        Dados(&Funcionario[i]);//a funcao Dados pega os valores do vetor de estruturas Funcionario e os modifica
    }
    printf("Dados dos funcionarios cadastrados:\n");
    for (i = 0; i < totalFuncionarios; i++)
    {
        printf("Dados do funcionario: %d\n", i + 1);
        Imprimir(&Funcionario[i]);
    }//como estou pegando os valores do endereco do endereco do vetor struct Funcionario precisa usar o & mas Funcionario + i tambem serve
    //o mudar fica -1 para que o programa entenda que caso o usuario digite 1 ele deve pegar o funcionario na posiçao 0
        printf("Digite qual funcionario sera modificado:\n");
        scanf("%d",&mudar);
        mudarSalario(&Funcionario[mudar - 1]);
        printf("Dados atualizados\n");
        Imprimir(&Funcionario[mudar - 1]);
    
    printf("Detalhes dos funcionarios com maior e menor salarios:\n");
    compararSalario(Funcionario,totalFuncionarios);
    //a funcao compararSalario pega o vetor de estrutura Funcionario e o int totalFuncinarios
    // nesse caso não preciso colocar o & porque a funcao esta chamando os seus valores e nao os endereços já a 
    free(Funcionario);
    return 0;
}
