#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
4) Crie um algoritmo que leia um vetor de 10 n�meros inteiros.
Em seguida, calcule e escreva o somat�rio dos valores deste vetor.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    int v[10];
    int somatorio=0;

    printf("Digite os valores do vetor:\n");
    for(i=0; i<10; i++)
    {
        printf("Posi��o [%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("O vetor �:\n");
    for(i=0; i<10; i++)
    {
        printf("\tV[%d]=%d", i, v[i]);
    }

    for(i=0; i<10; i++)
    {
        somatorio += v[i];
    }

    printf("\n");

    printf("A soma dos valores do vetor �: %d\n", somatorio);

    return 0;
}
