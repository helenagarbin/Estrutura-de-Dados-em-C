#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
6) Escreva um algoritmo que leia um vetor com 8 posições de números inteiros.
Em seguida, leia um novo valor do usuário e verifique se valor se encontra no vetor.
Se estiver, informe a posição desse elemento no vetor.
Caso o elemento não esteja no vetor, apresente uma mensagem informando “O número não se encontra no vetor”.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    int v[8];
    int novo_valor;

    printf("Digite um número:\n");
    for(i=0; i<8; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\n vetor:\n");
    for(i=0; i<8; i++)
    {
        printf("\tv[%d] = %d", i, v[i]);
    }

    printf("\n\nDigite um novo valor:\n");
    scanf("%d", &novo_valor);

    for(i=0; i<8; i++)
    {
        if(novo_valor == v[i])
        {
            printf("\nValor se encontra no vetor na posição [%d]\n", i);
            break;
        }
    }

    if(i==8) //não foi encontrado em nenhuma posição do vetor
    {
        printf("O número não se encontra no vetor\n");
    }

    return 0;
}
