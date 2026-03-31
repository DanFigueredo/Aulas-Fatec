/*
31/03/2026
Daniel Figueredo
Programa que carrega e imprimi vetor com ponteiro
*/

//importação
#include <stdio.h>

//prototipação
void carregarVetor();
void imprimirVetor(int *vet, int tam);

int main()
{
    int vet[3] = {10,20,30};
    int *p = vet;
    printf("%d", *(p+2));
}//fim do programa

//funções
void carregarVetor()
{
    int vet[4];
    int tam = sizeof(vet)/sizeof(int);
    for ( int i = 0; i < tam; i++)
    {
        printf("Digite os numeros do vetor: ");
        scanf("%d",&vet[i]);
    }
    imprimirVetor(vet,tam);
    
}//fim da função

void imprimirVetor(int *v,int tam)
{
    
    for (int i = 0; i < tam; i++)
    {
       printf("%d|",v[i]);
    }
    
}