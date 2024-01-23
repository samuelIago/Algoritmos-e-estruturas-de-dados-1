//Questão 3) Qual ser� a sa�da exibida pelo programa a seguir:
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
/*Observe que, se int *p � uma vari�vel do tipo ponteiro para inteiro, ent�o int **pp � uma
vari�vel do tipo ponteiro para ponteiro de inteiro, isto �, uma var�vel que poder� armazenar o
endere�o de um ponteiro do tipo int. */

/* A saida � a=11, b=20, c= 10 d=30

o endere�o de a est� em p2 e o endere�o de c est� em p3
p1 recebe o endere�o de p2, logo ap�s isso p2 recebe o conteudo de 10.
no final (*p1)++;, nessa parte diz que o conteudo de p1 recebe um incremento, e como p1
� o endere�o de a, a vira 11.
b nunca muda, entao b � 20.

pp = &p1;
*p3 = **pp; se fosse 1 * seria o endere�o de p1, mas j� que � 2* 
primeiro � o endere�o e o segundo � o conteudo do endere�o p1 que � a=10.
Nessa parte a variavel pp armazena o endere�o de p1, ap�s isso 
o conteudo do ponteiro p3 recebe o conteudo de pp, e o conteudo de pp � o endere�o de p1
que � 10, por isso c = 10

int *p4 = &d;
*p4 = b + (*p1)++;
Nessa parte o conteudo do ponteiro p4 � b = 20 + o conteudo de p1 10.
esse incremento n�o conta por causa dos parenteses, j� que tem eles,
p4 = 30.
mas caso n�o tivesse, p4 seria igual a 31.

EXEMPLO:
x=10
y=30
c=++x+b++
++ antes da variavel aumenta o valor e continua normalmente
++depois faz soma normal e so dps aumenta o valor da variavel (11+30=41)]
x=11
y=30






*/