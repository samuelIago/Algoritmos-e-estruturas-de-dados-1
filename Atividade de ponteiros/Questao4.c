/*Questão 4) Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:
A=3l^2raiz3/2

P=6l

Obs: Para os cálculos, utilize as funções sqrt e pow do módulo math da biblioteca
padrão de C. Em seguida, crie a função principal do programa e utilize a função
calcula_hexagono para calcular a área e o perímetro de um hexágono de lado l
informado pelo usuário.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
void calcula_hexagono(float l, float *area, float *perimetro);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float lado, Perimetro, Area;
	printf("Digite o tamanho do lado do hexagono:\n");
	scanf("%f",&lado);
	
	calcula_hexagono(lado,&Perimetro,&Area);
	//Isso faz o codigo entender que essa função existe e que vai usar o int lado
	// e os enfereços das funções Perimetro e Area
	printf("O perimetro é %.2f, a Area é %.2f\n",Perimetro,Area);
	return 0;
}

void calcula_hexagono(float l, float *area, float *perimetro){
	
	*perimetro = 6*l;
	
	*area = (3* pow(l,2)*sqrt(l))/2;
	//A funçao está fazendo com que os conteúdos do perimetro sejam 6*l
	//como o ponteiro perimetro usa o endereço da função Perimetro
	//ao alterar o conteudo desse ponteiro, o conteúdo da variavel é alterado junto.
	
}