/*
23/02/2026
Daniel Figueredo
Programa que Leia 6 numeros em um vetor
        e faz calculos
*/

//importação
#include <stdio.h>

//prototipação
void Mostrarvetor(int*, int);


int main()
{
    int i = 0;
    int vet[6];
    int tam = sizeof(vet)/sizeof(int);
    for ( i = 0; i < tam; i++)
    {
        printf("Digite os numeros do vetor: ");
        scanf("%d",&vet[i]);
    }
    
    Mostrarvetor(vet,tam);

}//fim do programa

//funções
void Mostrarvetor(int *vet, int tam)
{
    int i;
    int soma = 0;
    for ( i = 0; i < tam; i++)
    {
        printf("\nValor: %d Endereco: %p",vet[i],vet+i);
    }//fim do laço

    for ( i = 0; i < tam; i++)
    {
        soma += vet[i];
       
    }//fim do laço 
    printf("\nA soma e: %d",soma);
    
}//fim da função

