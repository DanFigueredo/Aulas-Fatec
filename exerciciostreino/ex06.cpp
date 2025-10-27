/*
Daniel Figueredo
27/10/2025
Programa pra somar 5 numeros de um array
*/
#include <stdio.h>
int main(){
    //Declarar variaveis
    int nums[5], i,tam, soma;
    tam = sizeof(nums)/sizeof(int);
    soma = 0;
    i = 0;
    
    printf("Digite 5 numeros: \n");
    //For para carregar o array
    for(i=0;i<tam;i++){
        scanf("%d", &nums[i]);

    }//Fim do carregamento
    
    //for para mostrar o array
    for ( i = 0; i < tam; i++)
    {
        printf("%d |", nums[i]);
    }//Fim do mostrador
    
    //For para mostrar a soma
    for ( i = 0; i < tam; i++)
    {
        soma = soma+nums[i];
        
    }//fim do somador
    printf("\n a soma e: %d", soma);

    
   
    
}//fim do prigrama