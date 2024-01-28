#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhasA, colunasA, linhasB, colunasB, i, j, k;
    printf("Entre com o numero de linhas e colunas da matriz A:\n");
    scanf("%d %d", &linhasA, &colunasA);

    printf("Entre com o numero de linhas e colunas da matriz B:\n");
    scanf("%d %d", &linhasB, &colunasB);

    if (colunasA != linhasB)
    {
        printf("As matrizes não podem ser multiplicadas\n");
        return 0;
    }

    int **matrizA = (int **)malloc(linhasA * sizeof(int *));
    for (i = 0; i < linhasA; i++)
    {
        matrizA[i] = (int *)malloc(colunasA * sizeof(int));
    }

    int **matrizB = (int **)malloc(linhasB * sizeof(int *));
    for (j = 0; j < linhasB; j++)//no slide aqui está i mas não funciona se for i
    {
        matrizB[j] = (int *)malloc(colunasB * sizeof(int));
    }

    printf("Entre com os valores da matriz A:\n");
    for (i = 0; i < linhasA; i++)
    {
        for (j = 0; j < colunasA; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Entre com os valores da matriz B:\n");
    for (i = 0; i < linhasB; i++)
    {
        for (j = 0; j < colunasB; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    int **matrizC = (int **)malloc(linhasA * sizeof(int *));
    for (i = 0; i < linhasA; i++)
    {
        matrizC[i] = (int *)malloc(colunasB * sizeof(int));
        for (j = 0; j < colunasB; j++)
        {
            matrizC[i][j] = 0; // Inicializando matrizC com zeros
        }
    }

    for (i = 0; i < linhasA; i++)
    {
        for (j = 0; j < colunasB; j++)
        {
            for (k = 0; k < colunasA; k++)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Matriz Resultante:\n");
    for (i = 0; i < linhasA; i++)
    {
        for (j = 0; j < colunasB; j++)
        {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    // Liberando a memória alocada para as matrizes
    for (i = 0; i < linhasA; i++)
    {
        free(matrizA[i]);
    }
    free(matrizA);

    for (i = 0; i < linhasB; i++)
    {
        free(matrizB[i]);
    }
    free(matrizB);

    for (i = 0; i < linhasA; i++)
    {
        free(matrizC[i]);
    }
    free(matrizC);

    return 0;
}
