/*
Daniel Figueredo
01/07/2026
Programa que le um vetor de 10 posições e mostre dados
*/

#include <stdio.h>

int main()
{
    int num =0;
    int maior = 0;
    int menor = 0;
    int posiDoMaior =0;
    int posiDoMenor =0;
    float media =0.0;
    int pares = 0;
    int impares = 0;
    int soma =0;
    int primeiraVez = 1;

    int vet[10];
    int tam = sizeof(vet)/sizeof(int);
    //printf("%d", tam);

    for (int i = 0; i < tam; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
        if(vet[i] < 0){
            break;
        }
        if (primeiraVez == 1)
        {
            maior = vet[i];
            menor = vet[i];
            primeiraVez = 0;
        }

        if (vet[i] > maior)
        {
            maior = vet[i];
            posiDoMaior = i + 1;
        }

        if (vet[i] < menor)
        {
            menor = vet[i];
            posiDoMenor = i + 1;
        }

        soma += vet[i];

        if (vet[i] % 2 ==0)
        {
            pares++;
        }else{
            impares++;
        }
       
 
    }

    media = soma/tam;
    
    printf("Maior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nPosicao do maior valor: %d", posiDoMaior);
    printf("\nPosicao do menor valor: %d", posiDoMenor);
    printf("\nMedia dos valores: %.2f", media);
    printf("\nQuantidade de numeros pares: %d", pares);
    printf("\nQuantidade de numeros impares: %d", impares);
 
    
}