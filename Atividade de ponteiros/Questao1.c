// Questão 1) Quais serão os valores de x, y e p ao final do trecho de c�digo abaixo:
#include <stdio.h>
int main()
{
int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;

}


//y = 4; x = 3; *p =4;
//y come�a com 0
//p pega o endere�o de y
//x fica igual ao conteudo de p x=0
//x=4
//o conteudo de p da 1 incremento e como era zero virou 1
//x da 1 decremento
//o conteudo de p � somado com o de x entao fica 1+3=4
//como p � o endere�o de y, y=4