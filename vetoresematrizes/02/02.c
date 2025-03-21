#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
2)Criar um algoritmo que leia 10 números pelo teclado e exiba os números na ordem inversa da que os números foram digitados.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,j;
    int vetor[10];

    printf("Digite um número:\n");
    for(i=0; i<10; i++)
    {
        printf("Posição[%d]:", i);
        scanf("%d", &vetor[i]);
    }
    printf("\n\n");
    printf("O vetor original é:\n");
    for(i=0; i<10; i++)
    {
        printf("Posição [%d] = %d", i, vetor[i]);
        printf("\n");
    }
    printf("\n\n");
    printf("Números na ordem inversa:\n");
    for(i=9; i>=0; i--)
    {
        printf(" %d", vetor[i]);
    }

    return 0;
}
