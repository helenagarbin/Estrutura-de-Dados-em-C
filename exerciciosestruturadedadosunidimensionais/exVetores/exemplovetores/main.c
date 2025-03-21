#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int v[5] = {10,20,30,40,50};//ordem crescente,declarar e lista de inicialização
    int i; //variável de estrutura de repetição
    float soma =0;

    for(i=0; i<5; i++)
    {
        soma += v[i];  //variavel vai pegar o conteudo inicial e vai somar com o vetor e atribuir
    }

    printf("Resultado: %.1f\n", soma/5);

    return 0;

}
