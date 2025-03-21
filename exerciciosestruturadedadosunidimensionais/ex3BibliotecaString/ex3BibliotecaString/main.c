#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char s[N]; //string
    int i; //variável simples

    printf("Digite um texto:\n");
    gets(s); //não limita caractere

    i = strlen(s);
    //descobrir o tam do texto, jogado pra dentro de i
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    for(i=0; i<strlen(s); i++) //i valendo zero ate chegar no tam se strlen
    {
        printf("%c", s[i]); //vetor de char s[i]
    }
    //pode so colocar puts( )
    return 0;
}
