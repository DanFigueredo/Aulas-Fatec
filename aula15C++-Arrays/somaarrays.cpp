/*
Daniel Figueredo
21/10/2025
Programa para 
*/

#include <stdio.h>
int main(){
    int a1[5],i,tam;
    int a2[5];
    int a3[10];
    tam= sizeof(a1)/sizeof(int);
    
    printf("Digite 5 numeros: \n");
    //Carregar o 1 array
   
    for ( i = 0; i < tam; i++)
    {
       scanf("%d", &a1[i]);
    }
    //Mostrar o 1 array
    for ( i = 0; i < tam; i++)
    {
       printf("%d |", a1[i]);
    }

    //Carregar o Segundo Array
    printf("\nDigite mais 5 numeros: \n");
    for ( i = 0; i < tam; i++)
    {
       scanf("%d", &a2[i]);
    }

    //Mostrar o segundo array

    for ( i = 0; i < tam; i++)
    {
       printf("%d |", a2[i]);
    }

    //Mostrar o array soma
    
     for ( i = 0; i < tam; i++)
    {
       printf(" %d |",);
    }

    
    
}//fim do programa