/*
Daniel Figueredo
11/12/2025 12:44 AM
Programa que le 15 numeros inteiros e diga quantos são pares e impares
*/
#include <stdio.h>
int main(){
    int vet[15];
    int par= 0; 
    int somaPar=0;
    int impar = 0;
    int soma =0; 
    int i = 0;
    float mediaPar = 0.0;
    //carregar o vetor
    while (i<15)
    {
        
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
        i++;
    }
    
    //Quantos são pares e impares
    for ( i = 0; i < 15; i++)
    {
        if (vet[i]%2==0)
        {
           par++;
           somaPar = somaPar+vet[i];
        }else{
            impar++;
        }  
    }

    //Soma total do vetor
    for ( i = 0; i < 15; i++)
    {
        soma = soma+vet[i];
    }

    mediaPar=somaPar/par;

    //Entregar tudo
    printf("Quantos sao pares: %d",par);
    printf("\nQuantos sao impares: %d",impar);
    printf("\nSoma total: %d",soma);
    printf("\nMedia dos pares: %.2f",mediaPar);

    
    
    


}//fim do programa