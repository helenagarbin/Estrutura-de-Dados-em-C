#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
1) Criar um algoritmo que leia 10 n�meros pelo teclado e exiba os n�meros na ordem correta que os n�meros foram digitados.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[10];
    int i;

    printf("Digite um n�mero para o vetor:\n");
    for(i=0; i<10; i++)
    {
        printf("Posi��o[%d]:", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n\n");

    printf(" O vetor �: \n");
    for(i=0; i<10; i++)
    {
        printf("Posi��o[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}
