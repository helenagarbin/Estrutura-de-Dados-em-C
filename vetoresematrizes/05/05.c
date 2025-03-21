#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
5) Escreva um algoritmo que leia um vetor com 15 posi��es de n�meros inteiros.
Em seguida, escreva somente os n�meros positivos que se encontram no vetor.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    int v[15];
    int somatoriopositivo=0;

    printf("Informe um n�mero:\n");
    for(i=0; i<15; i++)
    {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("\nO vetor �:\n");
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

    printf("\n\nO somat�rio dos n�meros positivo �: %d", somatoriopositivo);

    return 0;
}
