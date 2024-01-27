#include <stdio.h>
#include <stdlib.h>
// apos criar a estrutura coloque os dados que serao usados.
struct aluno
{
    char nome[20];  // 20 bytes
    int idade;      // 4 bytes
    int matricula;  // 4 bytes
    char email[50]; // 50 bytes
};
// funcao preenche recebe uma variavel do tipo struct com o ponteiro de nome estudante
//                     nessa parte nao precisa ser esse nome pode ser outro
void preenche(struct aluno *estudante)
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
void imprime(struct aluno *estudante){
    printf("Nome: %s\n Idade: %d\n Matricula: %d\n Email: %s\n",estudante->nome,estudante->idade,estudante->matricula,estudante->email);
}

// alocacao dinamica struct
int main()
{
    // cria um ponteiro do tipo struct e entao aloca a memoria do tamanho dessa estrutura vai alocar o tamanho total 4+4+20+50 = 78 bytes
    struct aluno *estudante = (struct aluno *)malloc(sizeof(struct aluno));
    if (estudante == NULL)
    {
        exit(1);
    } // agora é so chamar a funcao preenche e colocar
    preenche(estudante);
    imprime(estudante);
    free(estudante);
    return 0;
}