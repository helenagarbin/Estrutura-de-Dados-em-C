#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
2)Criar um algoritmo que leia 10 n�meros pelo teclado e exiba os n�meros na ordem inversa da que os n�meros foram digitados.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,j;
    int vetor[10];

    printf("Digite um n�mero:\n");
    for(i=0; i<10; i++)
    {
        printf("Posi��o[%d]:", i);
        scanf("%d", &vetor[i]);
    }
    printf("\n\n");
    printf("O vetor original �:\n");
    for(i=0; i<10; i++)
    {
        printf("Posi��o [%d] = %d", i, vetor[i]);
        printf("\n");
    }
    printf("\n\n");
    printf("N�meros na ordem inversa:\n");
    for(i=9; i>=0; i--)
    {
        printf(" %d", vetor[i]);
    }

    return 0;
}
