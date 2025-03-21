#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
5) Escreva um algoritmo que leia um vetor com 15 posições de números inteiros.
Em seguida, escreva somente os números positivos que se encontram no vetor.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    int v[15];
    int somatoriopositivo=0;

    printf("Informe um número:\n");
    for(i=0; i<15; i++)
    {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("\nO vetor é:\n");
    for(i=0; i<15; i++)
    {
        printf("\tV[%d] = %d", i, v[i]);
    }

    for(i=0; i<15; i++)
    {
        if(v[i]>0)
        {
            somatoriopositivo += v[i];
        }
    }

    printf("\n\nO somatório dos números positivo é: %d", somatoriopositivo);

    return 0;
}
