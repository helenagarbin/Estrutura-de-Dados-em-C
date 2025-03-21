#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
3) Escreva um algoritmo que leia um vetor com 10 posições de números inteiros.
Em seguida, receba um novo valor do usuário e verifique se este valor se encontra no vetor.
*/

int main()
{
    int i, v[10];
    int novo_valor;

    setlocale(LC_ALL,"Portuguese");

    printf("Digite os valores do vetor:\n");
    for(i=0; i<10; i++)
    {
        printf("Posição[%d]:", i);
        scanf("%d", &v[i]);
    }

    printf("vetor:\n");
    for(i=0; i<10; i++)
    {
        printf("Vetor[%d]: %d", i, v[i]);
        printf("\n");
    }

    printf("Escreva um novo valor:\n");
    scanf("%d", &novo_valor);

    for(i=0; i<10; i++)
    {
        if(v[i] == novo_valor)
        {
            printf("Valor se encontra no vetor\n");
            break;
        }
        else
        {
            printf("Valor não se encontra no vetor\n");
            break;
        }
    }

    return 0;
}
