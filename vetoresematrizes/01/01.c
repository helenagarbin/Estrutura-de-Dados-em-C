#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
1) Criar um algoritmo que leia 10 números pelo teclado e exiba os números na ordem correta que os números foram digitados.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[10];
    int i;

    printf("Digite um número para o vetor:\n");
    for(i=0; i<10; i++)
    {
        printf("Posição[%d]:", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n\n");

    printf(" O vetor é: \n");
    for(i=0; i<10; i++)
    {
        printf("Posição[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}
