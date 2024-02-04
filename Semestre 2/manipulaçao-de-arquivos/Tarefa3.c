/*3. Você foi contratado para desenvolver um programa em C que permita o cadastro de frutas e seus preços em um arquivo de dados. O programa deve usar uma estrutura (struct) para armazenar os detalhes de cada fruta, incluindo o nome da fruta e o preço.
O programa deve realizar as seguintes ações:
Definir uma estrutura chamada Fruta com os seguintes campos:
– nome (string) para armazenar o nome da fruta.
– preco (float) para armazenar o preço da fruta.
Permitir que o usuário insira os dados das frutas via teclado.
O usuário poderá cadastrar múltiplas frutas em uma única execução do programa. Para cada fruta, o programa deve solicitar:
O nome da fruta.
O preço da fruta.
Após inserir os dados de cada fruta, o programa deve salvar as informações no arquivo ”frutas.txt”.
Cada linha do arquivo deve conter o nome da fruta e seu preço, separados por vírgula.
O programa deve continuar solicitando os dados das frutas até que o usuário decida parar.
Quando o usuário decidir parar de cadastrar frutas, o programa deve exibir uma mensagem de encerramento e fechar o arquivo.*/
#include<stdio.h>
#include<stdlib.h>

typedef struct fruta{
    char nome[30];
    float preco;
}Fruta;

void cadastrar(Fruta *fruta){
    printf("Insira o nome da fruta a ser cadastrada:\n");
    scanf(" %[^\n]s",fruta->nome);
    printf("Insira o preco dessa fruta:\n");
    scanf("%f",&fruta->preco);
}
int main(){
    int repetir = 0;
    FILE *InfoFrutas = fopen("frutas.txt","wt");
    if (InfoFrutas == NULL){
            printf("Falha ao abrir o arquivo\n");
            exit(1);
        }else{
            printf("Arquivo aberto com sucesso\n");
        }
    while (repetir == 0){
        int escolha;
        printf("Digite 1 caso queira cadastrar uma fruta\n");
    scanf("%d",&escolha);

    if(escolha == 1){
        Fruta *fruta = malloc (sizeof(Fruta));
        
        if (fruta == NULL){
            printf("Alocacao falha\n");
            exit(1);
        }else{
            printf("Sucesso na alocacao.\n");
        }
        
        cadastrar(fruta);
        fprintf(InfoFrutas, "Nome: %s, Preco: %.2f\n", fruta->nome, fruta->preco);

        free(fruta);
    }else{
        repetir = 1;
    }
}
    fclose(InfoFrutas);
    return 0;
}