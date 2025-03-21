#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20 // declaração de uma constante, tamanho de string controlado por ela, pra não precisar ficar coloando tamanho

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char origem[N] = {"Olá, Mundo!"}; //recebendo o texto
    char destino[N]; //não está recebendo nada

    printf("Antes do strcpy:\n");  //mostra o conteudo antes
    puts(origem);
    puts(destino);

    strcpy(destino, origem); //não pode fazer destino = origem

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    return 0;
}
