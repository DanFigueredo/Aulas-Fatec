/*
Daniel Figueredo
22/10/2025 att em 27/10
Programa que le um array e mostra qual é o maior e menor numero
*/
#include <stdio.h>
int main()
{
    //Declarar variaveis 
    int vet[8], maior, menor, i, tam;
    maior = menor = i = 0;
    tam = sizeof(vet)/sizeof(int);

    printf("Digite 8 numeros: \n");

  
    for ( i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }//Carrega o array

    for ( i = 0; i < tam; i++)
    {
        printf("%d |", vet[i]);
    }//Mostra o array

    //Mostrar o maior
    maior = vet[0];
    for ( i = 0; i < tam; i++)
    {
        
        if (vet[i]> maior)
        {
           maior = vet[i];
        }//fim da condição   
    }//fim que mostra o maior
    printf("\no maior e: %d", maior);

    //Mostrar o menor 
    menor = vet[0];
    for ( i = 0; i < tam; i++)
    {
        if (vet[i<menor])
        {
            menor = vet[i];
        }//fim da condição
        
    }//fim do for que mostra o menor
    printf("\no menor e: %d", menor);
    
    
       
}//fim do programa

