/*
Daniel Figueredo
1/12/2025
Programa que le 20 elementos e faz calculos
*/

#include <stdio.h>
int main()
{
    int vet[20];
    int maior, menor = 0;
    int soma = 0;
    float media =0.0;
    int acimaM = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: "); scanf("%d", &vet[i]);
        
        maior = vet[0];
        menor = vet[0];
        acimaM = vet[0];
        if(vet[i] > maior)
        {
            maior = vet[i];
        }else if(menor < vet[i])
        {
            menor = vet[i];
        }
        soma = soma + vet[i];
        media = soma/5;
        if(vet[i] > media)
        {
            acimaM = vet[i];
        }
    }
    printf("a soma e: %d ",soma);
    printf("\nA media e : %.2f", media);
    printf("\nO maior numero e: %d",maior);
    printf("\nO menor numero e: %d", menor);
    printf("\nOs numeros acima da media e: %d", acimaM);
}//end