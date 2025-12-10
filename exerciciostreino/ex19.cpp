/*
Daniel Figueredo
10/12/2025 7:08 PM
Programa que Lei 10 números usando while e conte quantos são maiores que 50.
*/

#include <stdio.h>
int main()
{
    int num, maior=0;
    int i =0;

    while (i<10)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num > 50)
        {
            maior = maior+1;
        }//fim da condição
        i++;
    }//fim do laço
    printf("Foram digitados %d numeros maiores que 50.",maior);
    
}//Fim do programa