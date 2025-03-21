#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Aluna: Helena Tubino Garbin
11) Escreva um algoritmo que leia uma matriz 4x3.
Em seguida, receba um novo valor do usuário e verifique se este valor se encontra na matriz.
Caso o valor se encontre na matriz, escreva a mensagem “O valor se encontra na matriz”.
Caso contrário, escreva a mensagem “O valor NÃO se encontra na matriz”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, j;
    int matriz[4][3];
    int novo_valor;
    int encontrado = 0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Digite um valor para a posição [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um valor para ser buscado na matriz: ");
    scanf("%d", &novo_valor);

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matriz[i][j] == novo_valor)
            {
                encontrado = 1;
                break;
            }
        }
        if(encontrado)
        {
            break;
        }
    }

    if(encontrado)
    {
        printf("O valor %d se encontra na matriz.\n", novo_valor);
    }
    else
    {
        printf("O valor %d NÃO se encontra na matriz.\n", novo_valor);
    }

    return 0;
}
