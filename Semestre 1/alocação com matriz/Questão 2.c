/*Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de 10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    //eu fiz esse programam com o pensamento que a prova é de a, até d e os alunos 
    int N = 0;
    int i,j; 
    int alunos = 10;
    int aprovados = 0;
    printf("Insira a quantidade de questoes da prova:\n");
    scanf("%d",&N);
    char *gabarito = (char*) malloc (N * sizeof(char));
    if (gabarito == NULL){
        exit(1);
    }//criei um vetor de matriz como sao 10 alunos mas pode mudar coloque que a quant de linhas fosse a quant de alunos
    char **respostasAlunos = (char**) malloc(alunos * sizeof(char*));
    for (i = 0; i < alunos; i++){// e na hora de criar a quant de colunas usei o valor N pois a quant de questoes pode variar
        respostasAlunos[i] = (char*) malloc(N * sizeof(char));
    }
    if (respostasAlunos == NULL){
        exit(1);
    }
    
    printf("Insira o gabarito dessas questões:\n");
    for(i = 0; i < N; i++){
        scanf(" %c", &gabarito[i]);//esta armazenando os caracteres 
    }
    for(i = 0; i < alunos; i++){
        int questoesAcertadas = 0;
        printf("Insira as respostas do aluno %d:\n", i+1);
        for(j = 0; j < N; j++){
            //o loop começa inserindo as respostas do primeiro aluno no endereço [0,0] depois ele repete o j fazendo com que o endereço vire [0,1] e faz isso até que o N seja completado
            scanf(" %c",&respostasAlunos[i][j]);
            if (respostasAlunos[i][j] == gabarito[j]){
                questoesAcertadas++;
                //e logo depois de inserir o loop checa se na posição j atual o conteudo armazenado é o mesmo
            }
        }
        float nota =(questoesAcertadas *10)/N;
        printf("Nota do aluno %d %.2f\n",i+1,nota);
        
        if (nota >= 6){
            aprovados++;
        }
    }
    float perctAcerto;//esse float é para vire uma variavel float e nao int
    perctAcerto = ((float)aprovados/alunos)*100;
    printf("A porcentagem de alunos aprovados foi: %.2f",perctAcerto);
    free(gabarito);
    free(respostasAlunos);
}