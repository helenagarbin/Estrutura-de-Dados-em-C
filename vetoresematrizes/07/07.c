#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
7)Escreva o algoritmo para a permitir a entrada via teclado dos elementos de uma matriz 3x2.
Deve ser solicitada a digitação de um valor inteiro de forma igual a da tela a seguir:
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, j;
    int matriz[3][2];

    printf("com valores inteiros apenas:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Digite um valor para a posição [%d, %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("O valor que está na posição [%d, %d] é: %d ", i+1, j+1, matriz[i][j]);
            printf("\n");
        }
    }

    return 0;
}
