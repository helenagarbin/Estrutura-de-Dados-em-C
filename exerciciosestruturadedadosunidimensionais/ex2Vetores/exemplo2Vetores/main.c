#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v[5]; //vetor de 5 posi��es
    int i;

    for(i=0; i<5; i++) //navega��o do vetor ate o vetor de posi��o 4
    {
        printf("Insira um dado:\n");
        scanf("%d", &v[i]);//jogo o dado na posi��o i, pro usu�rio escolher os valores
    }

    printf("Dados inseridos:\n"); //mostrar oq o usuario colocou
    for(i=0; i<5; i++);
    {
        printf("%d", v[i]);
    }
    return 0;
}
