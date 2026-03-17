/*
	Name: VetorLocal.cpp
	Author: Daniel Figueredo 
	Date: 16/03/26 10:23
	Description: Programa para demonstrar a passagem de um vetor 
				por parametro por uma função
*/

//Bibliotecas
#include<stdio.h>

//prototipação
void imprimirVetor(int *,int);
void imprimiraocontrario(int *,int);
void somarVetores(int *,int *, int);
int main()
{
	int vet[] = {222,100,888,555,400};
	int vet2[]={111,300,112,345,600};
	int tam = sizeof(vet)/sizeof(int);
	//invoke
	imprimirVetor(vet,tam);
	imprimiraocontrario(vet,tam);
	somarVetores(vet,vet2,tam);
			
}//fim do programa 

//Funções
void imprimirVetor(int *V, int tam)
{
	int i =0;
	puts("Conteudo do vetor: ");
	for(i=0;i<tam;i++)
	{
		printf("%d|", V[i]);
	}//fim do laço
	
}//fim da função

void imprimiraocontrario(int *Vetor, int tam)
{
	puts("\nConteudo do vetor ao contrario: ");
	int i =0;
	for(i =tam-1; i>=0;i--)
	{
		printf("%d|", Vetor[i]);
	}//fim do laço
		
}//fim da função

void somarVetores(int *V1,int *V2,int tam)
{
	puts("\nVetores somados: ");
	int vetSoma[tam];
	for(int i = 0;i<tam;i++)
	{
		vetSoma[i] = V1[i]+V2[i];	
	}//fim do laço
	imprimirVetor(vetSoma,tam);

	
}//fim da função