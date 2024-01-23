#include <stdio.h>
#include <stdlib.h>
// apos criar a estrutura coloque os dados que serao usados.
/*typedef renomeia tudo*/
struct aluno
{
    char nome[20];  // 20 bytes
    int idade;      // 4 bytes
    int matricula;  // 4 bytes
    char email[50]; // 50 bytes
};
/*a estrutura aluno foi renomeada apenas para Aluno, pode tambem colocar logo na criacao da estrutura
typedef struct aluno{
    conteudo
}Aluno*/
typedef struct aluno Aluno;
//                     nessa parte nao precisa ser esse nome pode ser outro
void preenche(Aluno *estudante)
{
    printf("Digite o nome\n");
    scanf(" %[^\n]s", estudante->nome);
    printf("Digite a idade\n");
    scanf("%d", &estudante->idade);
    printf("Digite a matricula\n");
    scanf("%d", &estudante->matricula);
    printf("Digite o email\n");
    scanf(" %[^\n]s", estudante->email); // da um espacinho no scanf pra evitar bugs
}
void imprime(Aluno *estudante)
{
    printf("Nome: %s\n Idade: %d\n Matricula: %d\n Email: %s\n", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

// alocacao dinamica struct
int main()
{
    // cria um ponteiro do tipo struct e entao aloca a memoria do tamanho dessa estrutura vai alocar o tamanho total 4+4+20+50 = 78 bytes
    Aluno *estudante = (Aluno *)malloc(sizeof(Aluno));
    if (estudante == NULL)
    {
        exit(1);
    } // agora é so chamar a funcao preenche e colocar
    preenche(estudante);
    imprime(estudante);
    free(estudante);
    return 0;
}