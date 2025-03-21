#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Faça um programa que armazene os dados de 3 pessoas (nome, idade, peso, altura), ao final deve mostrar o nome e idade da 1 pessoa e a altura da ultima pessoa

struct t_pessoa
{
    char nome[200];
    int idade;
    float peso;
    float altura;
};
int main()
{
    setlocale(LC_ALL,"Portuguese");

    struct t_pessoa lista[3]; //vetor struct t_pessoa
    int i;

    //passar de posição a posição dentro do vetor
    for(i=0; i<3; i++) //preencher das 3 pessoas, lendo pessoa a pessoa dentro de um vetor
    {
        printf("Insira o nome da pessoa de posição %d:\n", i);
        scanf("%199[^n}s", &lista[i].nome); //posição 0,1 e 2. Ler nome, usa scanf aprimorado pra ler espaço
        fflush(stdin);
        printf("Insira a idade da pessoa de posição %d:\n", i);
        scanf("%d", &lista[i].idade);
        fflush(stdin);
        printf("Insira o peso da pessoa de posição %d:\n", i);
        scanf("%f", &lista[i].peso);
        fflush(stdin);
        printf("Insira a altura da pessoa de posição %d:\n", i);
        scanf("%.2f", &lista[i].altura);
        fflush(stdin);
    }
    //imprimir nome e idade da 1 pessoa e a altura da ultima pessoa

    printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
    printf("Idade da primeira pessoa: %d.\n", lista[0].idade);
    printf("Peso da última pessoa: %.2f.\n", lista[2].peso);
    printf("Altura da última pessoa: %.2f.\n", lista[2].altura);


    return 0;
}
