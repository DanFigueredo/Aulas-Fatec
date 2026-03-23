/*
	Name: Vetor555.cpp
	Author: Daniel Figueredo 
	Date: 16/03/26 11:30
	Description: Programa para imprimir o conteudo de um vetor
				com o 55 como interruptor
*/

//seção de importação
#include<stdio.h>

//seção de prototipação
void interruptor(int *, int);

int main(){
	int vet[]={102,9,555,23,56,75,555,100,555,333,60,555,24,700,18,555,56,777,555,1000};
	int tam = sizeof(vet)/sizeof(int);
	//invoke
	interruptor(vet,tam);
}

//fun��o
void interruptor(int *vetor,int tam)
{
	puts("Conteudo do vetor: ");
	for(int i =0;i<tam;i++)
	{
		printf("%d|",vetor[i]);		
	}
	puts("\nCom interruptor");
	int flag = 1; //como se fosse uma booleana
	for(int i = 0; i < tam; i++)
	{
		
		if(flag == 1&& vetor[i]!=555)
			printf("%d|",vetor[i]);
		if(vetor[i]==555 && flag ==1)
			flag = 0;
		else if(vetor[i]==555 && flag ==0)
			flag = 1;
		
	}
}

