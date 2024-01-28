/*3. Identifique os erros de compilação que seriam detectados no seguinte programa se eles existirem:
# include < stdio .h >
int main ( ) {
int N_ant , N_prox , N , N_atual
N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return
}
*/
#include <stdio.h>
int main(void)
{
    printf("O erros que identifiquei na questao foram");
    printf("No int depois do int main N, N_atual, N_ant = N_atual =1; daria erros pois não se pode ter dois ints de nomes iguais, nem dois iguais.\n");
    printf("Não sei se isso é considerado um erro, mas como o N foi declarado como =1 entao o for nao se repetiria");
}