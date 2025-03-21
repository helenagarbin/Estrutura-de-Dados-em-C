#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; //já contem todas as linhas no seu par de chaves

    int i, j; //variaves

    printf("Imprimindo a primeira linha da matriz:\n");
    for(j=0; j<3; j++) //oscila so a coluna
    {
        printf("%d ", mat[0][j]); //acessar todos os elementos do indice 0, quando j valer 3 se encerra
    }

    printf("\n\nImprimindo a matriz toda:\n");
    for(i=0; i<3; i++) //o incremento vai ir aumentando o indice, passando por todas as posições
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
