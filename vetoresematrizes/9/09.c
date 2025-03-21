#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Aluna Helena Tubino Garbin
9) 9.Criar um algoritmo que leia uma matrizes 3x3.
Em seguida, exiba a soma dos elementos de cada uma das linhas.
Ex:
1 2 2  Soma Linha 1 = 5
3 2 3 Soma Linha 2 = 8
4 1 1  Soma Linha 3 = 6
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, j;
    int matriz[3][3];
    int soma_linhas[3] = {0};

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Digite um valor para a posição [%d, %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma_linhas[i]+= matriz[i][j];
        }
    }

    printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", matriz[i][j]);
        }

        printf(" Soma Linha %d = %d\n", i+1, soma_linhas[i]);
    }



    return 0;
}
