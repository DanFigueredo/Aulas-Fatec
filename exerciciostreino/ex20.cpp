/*
Daniel Figueredo
10/12/2025 7:23 PM
Programa que Leia um vetor de 8 posições e mostre todos os numeros
                    pares, impares e a media do vetor
*/
#include <stdio.h>
int main()
{
    int vet[8];
    int i =0;
    float media = 0.0;
    int soma =0;
    //carregar o vetor
    for ( i = 0; i < 8; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }//
    //Mostrar o vetor
    for ( i = 0; i < 8; i++)
    {
        printf("%d | ",vet[i]);
    }

    //Mostrar os pares
    puts("\nNumeros pares!!!!");
    for ( i = 0; i < 8; i++)
    {
        if (vet[i]%2==0)
        {
           printf("%d | ",vet[i]);
        } 
    }

    //Mostrar os impares
    puts("\nNumeros impares:");
    for ( i = 0; i < 8; i++)
    {
        if (vet[i]%2==1)
        {
           printf("%d | ",vet[i]);
        }  
    }

    //Media do vetor
    puts("\nMedia do vetor:");
    for ( i = 0; i < 8; i++)
    {
      soma = soma + vet[i];
      media = soma/8;
    }
    printf("%.2f", media);
   
}//fim do programa