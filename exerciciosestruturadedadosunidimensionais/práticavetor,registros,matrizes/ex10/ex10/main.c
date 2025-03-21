#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//vetores
//ler 9 elementos distintos do vetor, calcule e mostre os num primos e suas posi��es
int main()
{
    setlocale(LC_ALL,"Portuguese");

    //num � primo, *1, *2, *3, 4, *5, 6, *7, 8, 9 --> primo � divis�vel por ele mesmo e pelo 1 apenas
    //se contar mais de 2 num que dividem, o numero n�o � primo
    int vet[9], i, j, contabilizado;

    for(i=0; i<9; i++) //passar posi��o a posi��o
    {
        printf("Insira um n�mero inteiro:\n");
        scanf("%d", &vet[i]); //variavel vet de posi��o, quando chegar em i = 8, �ltima posi��o, quebra instrutura
    }

    for(i=0; i<9; i++)
    {
       contabilizado = 0; //para inicializar tem que zerar o cont para cada posi��o
       for(j=1; j<=vet[i]; j++) //vet oscilando ate o valor do vetor
       {
           if(vet[i] %j == 0)
           {
               contabilizado ++;
           }
       }
       if (contabilizado == 2)  //dois divisores
       {
           printf("%d � primo, posi��o: %d.\n", vet[i], i);
       }
    }
    return 0;
}
