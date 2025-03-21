#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//vetores
//ler 9 elementos distintos do vetor, calcule e mostre os num primos e suas posições
int main()
{
    setlocale(LC_ALL,"Portuguese");

    //num é primo, *1, *2, *3, 4, *5, 6, *7, 8, 9 --> primo é divisível por ele mesmo e pelo 1 apenas
    //se contar mais de 2 num que dividem, o numero não é primo
    int vet[9], i, j, contabilizado;

    for(i=0; i<9; i++) //passar posição a posição
    {
        printf("Insira um número inteiro:\n");
        scanf("%d", &vet[i]); //variavel vet de posição, quando chegar em i = 8, última posição, quebra instrutura
    }

    for(i=0; i<9; i++)
    {
       contabilizado = 0; //para inicializar tem que zerar o cont para cada posição
       for(j=1; j<=vet[i]; j++) //vet oscilando ate o valor do vetor
       {
           if(vet[i] %j == 0)
           {
               contabilizado ++;
           }
       }
       if (contabilizado == 2)  //dois divisores
       {
           printf("%d é primo, posição: %d.\n", vet[i], i);
       }
    }
    return 0;
}
