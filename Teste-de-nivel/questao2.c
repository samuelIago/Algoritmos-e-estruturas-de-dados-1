/*O que faz o seguinte programa? E qual sua saida?
# include < stdio .h >
int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ;
return 0;
}*/
#include <stdio.h>
int main(void)
{
    printf("O seguinte programa cria uma matriz 3X3, e realiza as operações de soma e subtração que estão presentes, utilizando os valores correspodentes dentro da matriz\n");
    printf("0-4+0-1-0-0=-5");
    printf("O valor final é -5\n");
}