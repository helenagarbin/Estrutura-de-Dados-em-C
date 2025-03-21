#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val, soma;
    int contagem;

    soma = 0;

    contagem = 1;
    while(contagem <= 5)
    {
        printf("\n Digite o %do. numero:\n", contagem);
        scanf("%f", &val);
        contagem = contagem + 1;
    }
    soma = soma + val;
    printf("\nO resultado da soma é: %.2f", soma);
    system("Pause");
    return 0;
}
