/*
	Name: VetorReferencia.cpp
	Author: Daniel Figueredo
	Date: 16/03/26 09:47
	Description: Programa para implementar operações com array unidimensionais
				dentro de funções.
*/
//Seção de importação de bibliotecas
#include <stdio.h>

//seção de prototipação
void imprimirVetG();
void imprimirVetGContrario();

//vetor global - Variaveis globais 
int vetG []= {3,9,5,8,1};
int tam = 0;

int main()
{
	
	tam = sizeof(vetG)/sizeof(int);
	printf("O vetor vetG tem : %d elementos",tam);
	
	//invoke
	imprimirVetG();
	imprimirVetGContrario();
}//fim do prgrama

//função para imprimir o vetor
void imprimirVetG()
{
	puts("\n\nConteudo do vetor VetG: ");
	for(int i =0;i<tam;i++)
	{
		
		printf("%d |",vetG[i]);
	}//fim do laço
}//fim da função

//Função para imprimir o vetor VetG ao contrario
void imprimirVetGContrario()
{
	puts("\n\nConteudo do vetor VetG ao contrario: ");
	
	for(int i = tam-1;i>=0;i--)
	{
		printf("%d |",vetG[i]);	
	}
}//fim da função