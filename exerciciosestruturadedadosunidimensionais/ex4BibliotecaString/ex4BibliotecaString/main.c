#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 50
int main()
{
    setlocale(LC_ALL,"Portuguese");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr); //comparar as duas strings, salvo na variavel ok

    if(ok == 0)
    {
        printf("Textos Iguais.\n");
    }
    else
    {
        printf("Textos Diferentes.\n");
    }
    return 0;
}
