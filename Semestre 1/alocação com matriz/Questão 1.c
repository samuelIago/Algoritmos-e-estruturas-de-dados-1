/*Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o produto (gostou/não gostou). Escreva um programa em C que:
a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados, um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta para a segunda pergunta.
b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int N = 0;
    printf("Digite o numero de entrevistados\n");
    scanf("%d",&N);

    char *sexo = (char*)malloc(N * sizeof(char));
    if(sexo == NULL){
        printf("Erro, tente novamente");
        exit(1);
    }

    char *opiniao =(char*)malloc(N * sizeof(char));
    if(opiniao == NULL){
        printf("Erro, tente novamente");
        exit(1);
    }
    int NumeroM = 0; 
    int NumeroF = 0;
    int Mgostaram = 0;
    int Fgostaram = 0;
    int i;
    for(i = 0; i < N; i++){//quase meia hora dando erro porque declarei o int no for
        printf("Digite o seu sexo M/F\n");
        scanf(" %c",&sexo[i]);
        printf("Digite a sua opiniao:(gostei/nao gostei)\n");
        scanf("%s", opiniao);
        if (sexo[i] == 'M' || sexo[i] == 'm')
        {
            NumeroM++;
    //nao usa o [i], pois não é para saber apenas 1 caractere mas sim a string toda
            if (strcmp(opiniao,"gostei") == 0){
                Mgostaram++;
            }
        }else if (sexo[i] == 'F' || sexo[i] == 'f'){
            NumeroF++;
            if (strcmp(opiniao,"gostei") == 0){
                Fgostaram++;
            }
        }else{
            printf("Sexo invalido");
        }
    }
//esse float é para que retorne um valor do tipo floar pois dividir dois int retorna um int em C
    float porcentagemDeHomensQueGostaram = ((float)Mgostaram / NumeroM) * 100;
    float porcentagemDeMulheresQueGostaram = ((float)Fgostaram / NumeroF) * 100;

    printf("Cerca de %.2f dos Homens gostaram do novo produto\n",porcentagemDeHomensQueGostaram);
    printf("Cerca de %.2f das Mulheres gostaram do novo produto\n",porcentagemDeMulheresQueGostaram);

    free(sexo);
    free(opiniao);
    return 0;
}