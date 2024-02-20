//1.Dado a funcao max qual a complexidade de espaço?
int max(int valor1, int valor2){
    if (valor1 > valor2){
        return valor1;
    }
    else{
        return valor2;
    }
}
//sua complexidade é de 8 bytes, 2 ints = 2*4=8.

//2. Dado a funcao abaixo qual a complexidade de tempo?

int funca_aula(int max1,int max2){//prototipo entao nao conta
    int count1,count2;// 1vez:c1
    for(count1 = 0; count1<max1;count1++){//c2: max1 vezes(n)
        for (count2 = 0; count2 < max2; count2++)//c3:(max1 * max2)vezes(n^2)
        {//vamos considerar que max1=max2 = n^2
            printf("Exemplo da aula");//c4: n^2 vezes   
        }
        
    }
    return 0;
}
/*Tempo total:
T(funcao aula)= c1+c2*n+ (max1*max2)c3 +(max1*max2)c4 +c5
Simplificando:
T(funcao aula)= (c3+c4)^2 + nc2 +(c1+c5)
ainda mais:
a=(c3+c4), b=(c2), c=(c1+c5)
an^2+bn+c


Simplificacao da expressao de tempo:
T(funcao aula)= an^2+bn(tirou a constante c)
T(funcao aula)= an^2(tirou o termo de menor grau)
T(funcao aula)= n^2(tirou o termo multiplicando o maior grau a)
Notacao Big-O
T(funcao aula)= O(n^2)


exp2:
T(MAX)= a(n-1) +b = an -a +b

Simplificacao da expressao de tempo:
T(MAX)= an -a +b

T(MAX)= an // tira as constantes -a e b
T(MAX)= n// tira o a multiplicando o n

T(MAX)= O(n)
*/