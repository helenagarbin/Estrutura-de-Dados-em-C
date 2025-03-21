#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v[5]; //vetor de 5 posições
    int i;

    for(i=0; i<5; i++) //navegação do vetor ate o vetor de posição 4
    {
        printf("Insira um dado:\n");
        scanf("%d", &v[i]);//jogo o dado na posição i, pro usuário escolher os valores
    }

    printf("Dados inseridos:\n"); //mostrar oq o usuario colocou
    for(i=0; i<5; i++);
    {
        printf("%d", v[i]);
    }
    return 0;
}
