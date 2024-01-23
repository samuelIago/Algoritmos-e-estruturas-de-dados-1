#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nome = (char *)malloc(50 * sizeof(char));
    if (nome == NULL)
    {
        exit(1);
    }
    printf("Digite o seu nome:\n");
    scanf("%[^\n]s", nome);//o ponteiro começa do 0 por isso pode so colocar ele
    
    printf("%s",nome);
    free(nome);
    return 0;
}