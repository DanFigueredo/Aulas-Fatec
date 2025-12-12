/*
Daniel Figueredo 
12/12/2025 8:29 PM
Programa que le 100 idades e armazena em um vetor e diga 
        quantos menores de 18 e a media de todas as idades
*/
#include <stdio.h>
int main()
{
    int idade[10];
    int i = 0;
    float media = 0.0;
    int soma = 0;
    int menorIdade = 0;
    //Carregar o vetor
    for ( i = 0; i < 10; i++)
    {
        printf("Digite sua idade: ");
        scanf("%d",&idade[i]);
        if (idade[i]> 18)
        {
            menorIdade++;
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        soma = soma+idade[i];

    }
    media = soma/i;

    printf("A media das idades e: %.2f",media);
    printf("\n%d sao menores de idade",menorIdade);
    
}//fim do programa