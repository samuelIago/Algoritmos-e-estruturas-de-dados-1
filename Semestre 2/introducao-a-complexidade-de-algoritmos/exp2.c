/*Tipos de analise:

Pior caso:
maior tempo de execução, quando todas as linhas sao executadas para qualquer entrada de tempo n

Caso medio:
parte das instruções serao usadas, é o tempo esperado da entrada de tempo n

Melhor caso:
raramente feita
//no trabalho fazer analise de melhor e pior caso
*/

void insertionSort(int arr[], int n)
{
    int i, key, j;//c1 
    for (i = 1; i < n; i++)
    {
        key = arr[i];//c2 n-1
        j = i - 1;//c3 n-1
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1]= arr[j];//c4 n^2
            j=j-1;//c5 n^2
        }
        arr[j+1] = key;//c6 n-1
    }
}
/*Pior caso:
c1+n-1(c2+c3+c6)+n^2(c4+c5)
a+bn+n^2c
0(n^2) complexidade quadratica


Melhor caso:
no melhor caso o loop while nao ocorre
c1+n(c2+c3+c6)
a+bn
n complexidade linear

quanto mais laços de repeticao mais complexo, geralmente com 2 lacos de repeticao aninhados é uma complexidade quadratica
sem laço de repeticao é uma complexidade constante
*/