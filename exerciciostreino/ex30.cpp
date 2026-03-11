/*
Daniel Figueredo
3/10/2026
Programa que pede 5 valores e o armazena em um vetor 
e depois de o valor e o endereco 
*/
#include <stdio.h>
int main(){
    int vet[5];
    int i;
    int tam = sizeof(vet)/sizeof(int);
    printf("%d",tam);
    for (  i = 0; i < tam; i++)
    {
        printf("\nDigite um valor: "); scanf("%d",&vet[i]);
    }

    //Mostrar os valores e endereços
    for ( i = 0; i < tam; i++)
    {
        printf("\nValor: %d | endereco: %p",vet[i],&vet[i]);
    }
    
}//Fim do programa 