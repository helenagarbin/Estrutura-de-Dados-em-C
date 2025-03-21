#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10]; //vetor de char com 10 posições, então a string tem 10 posições, salvo ate 9 caracteres

    printf("Digite algo (scanf convencional):\n");  //scanf de sintaxe geral
    scanf("%s", s); //nome da variável é s, não precisa de & comercial
    fflush(stdin); //função

    printf("Resultado: %s\n\n", s); //imprimir o texto na tela do que foi resultado

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", s); //indica o tamanho e coloca [^\n]
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    return 0;
}
