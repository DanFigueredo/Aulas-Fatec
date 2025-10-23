/*
Daniel Figueredo
22/10/2025
*/
#include <stdio.h>
int main(){
    //Declarar variaveis 
    int vet[8], maior, menor, i, tam;
    maior = menor = i = 0;
    tam = sizeof(vet)/sizeof(int);

    printf("Digite 8 numeros: \n");

  
    for ( i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    for ( i = 0; i < tam; i++)
    {
        printf("%d |", vet[i]);
    }
    //Mostrar o maior
    for ( i = 0; i < tam; i++) //i recebe 0 e enquanto i for menor que o tamanho, i recebe i + 1
    {
        maior = maior + vet[i];
        if (vet[i]> maior)
        {
           vet[i] = maior;
        }
        
        printf("%d", maior);
    
   
    
   
}//fim do programa

