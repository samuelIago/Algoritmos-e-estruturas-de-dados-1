//Questão 3) Qual será a saída exibida pelo programa a seguir:
#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}
/*Observe que, se int *p é uma variável do tipo ponteiro para inteiro, então int **pp é uma variável do tipo ponteiro para ponteiro de inteiro, isto é, uma variável que poder armazenar o endereço de um ponteiro do tipo int. */

/* A saida é a=11, b=20, c= 10 d=30

o endereço de a está em p2 e o endereço de c está em p3
p1 recebe o endereço de p2, logo após isso p2 recebe o conteudo de 10.
no final (*p1)++;, nessa parte diz que o conteudo de p1 recebe um incremento, e como p1 é o endereço de a, a vira 11.
b nunca muda, entao b é 20.
pp = &p1;
*p3 = **pp; se fosse 1 * seria o endereço de p1, mas já que é 2* 
primeiro é o endereço e o segundo é o conteudo do endereço p1 que é a=10.
Nessa parte a variavel pp armazena o endereço de p1, após isso 
o conteudo do ponteiro p3 recebe o conteudo de pp, e o conteudo de pp é o endereço de p1 que é 10, por isso c = 10

int *p4 = &d;
*p4 = b + (*p1)++;
Nessa parte o conteudo do ponteiro p4 é b = 20 + o conteudo de p1 10.
esse incremento não conta por causa dos parenteses, já que tem eles,
p4 = 30.
mas caso não tivesse, p4 seria igual a 31.

EXEMPLO:
x=10
y=30
c=++x+b++
++ antes da variavel aumenta o valor e continua normalmente
++depois faz soma normal e so dps aumenta o valor da variavel (11+30=41)]
x=11
y=30






*/