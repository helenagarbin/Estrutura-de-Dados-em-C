#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
8) Criar um algoritmo que leia uma matriz 3x3 e exiba a matriz preenchida
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, j;
    int matriz[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Digite um valor para a posição [%d, %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
