#include <stdio.h>
#include <stdlib.h>
// apos criar a estrutura coloque os dados que serao usados.
struct aluno
{
    char nome[20];//20 bytes
    int idade;//4 bytes
    int matricula;//4 bytes
    char email[50];//50 bytes
};
//alocacao dinamica struct
int main(){
    //cria um ponteiro do tipo struct e entao aloca a memoria do tamanho dessa estrutura vai alocar o tamanho total 4+4+20+50 = 78 bytes
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL){
        exit(1);
    }
    
    //com uma struct de ponteiro usa -> nao o .
    printf("Digite o nome\n");
    scanf(" %[^\n]s", estudante->nome);
    printf("Digite a idade\n");
    scanf("%d", &estudante->idade);
    printf("Digite a matricula\n");
    scanf("%d", &estudante->matricula);
    printf("Digite o email\n");
    scanf(" %[^\n]s", estudante->email); // da um espacinho no scanf pra evitar bugs
    free(estudante);
    return 0;
}