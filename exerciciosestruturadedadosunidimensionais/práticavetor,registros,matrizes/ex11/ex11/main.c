#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//busca em matriz
//matriz 3x3, buscar um chave de busca x, cada elemento associado a um indice de linha e coluna
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int mat[3][3];
    int i, j, x, linha, coluna, achou = 0; //indice de linha i, indice de coluna j. x é chave de busca dentro da matriz, associa linha e coluna para encontrar

    for(i=0; i<3; i++) //lendo a matriz
    {
        for(j=0; j<3; j++)
        {
            printf("Insira o elemento de linha %d, coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Insira a chave de busca:\n");
    scanf("%d", &x);

    //agora vasculha posição a posição pra achar ou não
    //navegar pela matriz:

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(mat[i][j] == x)
            {
                //encontrou a chave de busca
                achou = 1; //faz o achou valer 1, se a condição for satisfeita
                //agora salvar as posições:
                linha = i;
                coluna = j;
                break;
            }
        }
        if(achou == 1)
        {
            break; //não precisa mais procurar mais ninguem
        }
    }
    if(achou == 1)
    {

        printf("O elemento %d foi encontrado na linha %d, coluna %d.\n", x, i, j);
    }
    else
    {
        printf("Chave não encontrada.\n");
    }

    return 0;
}
