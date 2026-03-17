/*
Daniel Figueredo
14/02/2026
Programa que faz uma leitura de vetor e exibição de valores e endereços usando ponteiros em C
*/
#include <stdio.h>

int main(){
    int vet[5];
    int i;
    int tam = sizeof(vet)/sizeof(int);
    for ( i = 0; i < tam; i++)
    {
        printf("Digite um valor: "); scanf("%d",&vet[i]);

    }//fim do primeiro laço

    //mostrar o vetor com valor e endereço
    for ( i = 0; i < tam; i++)
    {
        printf("\nValor: %d Endereco: %p ", *(vet+i), vet+i);
    }//fim do segundo laço
    
    
}//end
