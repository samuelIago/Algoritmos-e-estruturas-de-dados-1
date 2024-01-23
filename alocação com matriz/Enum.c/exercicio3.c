/*Escreva um programa que implementa uma struct Data com os campos dia, mes e ano. O mes deve ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa deve ler a data e imprimir a data no formato dd/mm/aaaa.
*/

#include<stdio.h>

typedef enum Mes{
    JANEIRO,//0
    FEVEREIRO,//1
    MARCO,//2
    ABRIL,//3
    MAIO,//4
    JUNHO,//5
    JULHO,//6
    AGOSTO,//7
    SETEMBRO,//8
    OUTUBRO,//9
    NOVEMBRO,//10
    DEZEMBRO//11
} mes;

typedef struct data
{
    int dia;
    int ano;
    mes Mes_;
}Data;

void recebeDados(Data *data){
    printf("Insira o dia:\n");
    scanf("%d",&data->dia);
    printf("Insira o mes: 0-Janeiro, 1-Fevereiro, 2-Marco, 3-Abril, 4-Maio, 5-Junho, 6-Julho, 7-Agosto, 8-Setembro, 9-Outubro, 10-Novembro, 11-Dezembro. \n");
    scanf("%d", &data->Mes_);
    printf("Insira o Ano:\n");
    scanf("%d",&data->ano);
}
//variavel auxiliar
char *mesAtual (mes M){
    switch (M){
    case JANEIRO: return"01";
        break;
    case FEVEREIRO: return"02";
        break;
    case MARCO:
        return "03";
        break;
    case ABRIL:
        return "04";
        break;
    case MAIO:
        return "05";
        break;
    case JUNHO:
        return "06";
        break;
    case JULHO:
        return "07";
        break;
    case AGOSTO:
        return "08";
        break;
    case SETEMBRO:
        return "09";
        break;
    case OUTUBRO:
        return "10";
        break;
    case NOVEMBRO:
        return "11";
        break;
    case DEZEMBRO:
        return "12";
        break;
    default:
    printf("mes invalido");
        break;
    }
}

void imprimeDados(Data *data){
    printf("%d/%s/%d", data->dia,mesAtual(data->Mes_),data->ano);
}
int main()
{
    Data dataNova;
    recebeDados(&dataNova);
    imprimeDados(&dataNova);

    return 0;
}