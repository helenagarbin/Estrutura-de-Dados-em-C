#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10]; //vetor de char com 10 posi��es, ent�o a string tem 10 posi��es, salvo ate 9 caracteres

    printf("Digite algo (scanf convencional):\n");  //scanf de sintaxe geral
    scanf("%s", s); //nome da vari�vel � s, n�o precisa de & comercial
    fflush(stdin); //fun��o

    printf("Resultado: %s\n\n", s); //imprimir o texto na tela do que foi resultado

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", s); //indica o tamanho e coloca [^\n]
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    return 0;
}
