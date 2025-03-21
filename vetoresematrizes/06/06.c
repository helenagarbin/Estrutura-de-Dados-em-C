#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
6) Escreva um algoritmo que leia um vetor com 8 posi��es de n�meros inteiros.
Em seguida, leia um novo valor do usu�rio e verifique se valor se encontra no vetor.
Se estiver, informe a posi��o desse elemento no vetor.
Caso o elemento n�o esteja no vetor, apresente uma mensagem informando �O n�mero n�o se encontra no vetor�.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    int v[8];
    int novo_valor;

    printf("Digite um n�mero:\n");
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
            printf("\nValor se encontra no vetor na posi��o [%d]\n", i);
            break;
        }
    }

    if(i==8) //n�o foi encontrado em nenhuma posi��o do vetor
    {
        printf("O n�mero n�o se encontra no vetor\n");
    }

    return 0;
}
