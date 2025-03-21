#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
10) Criar um algoritmo que leia uma matrizes 3x3.
Em seguida, exiba a soma dos elementos de cada uma das colunas. Ex:
1 2 2
3 2 3
4 1 1
Soma Coluna 1 = 8
Soma Coluna 2 = 5
Soma Coluna 3 = 6
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, j;
    int matriz[3][3];
    int soma;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Digite um valor para a posição [%d, %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<3; i++)
    {
        soma=0;
        for(j=0; j<3; j++)
        {
            soma += matriz[i][j];
        }

        printf("Soma linha %d = %d\n", i+1, soma);
    }


    return 0;
}
