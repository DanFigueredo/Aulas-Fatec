/*
	Name: FuncaoFibonacci.cpp
	Author: Daniel Figueredo
	Date: 06/04/26 09:44
	Description: Programa para manipular a sequência 
				 de fibonacci.
*/

//importação:
#include <stdio.h>

//prototipação:
void fibonacci(int qtde);
void imprimirVet(int *V,int qtd);
//programa:
int main()
{
	//variaveis:

	int quant = 0;
	puts("Sequencia de fibonacci");
	puts("========================");
	printf("\nDigite a quantidade: ");
	scanf("%d",&quant);
	puts("========================");
	//invoke
	fibonacci(quant);
	
	return 0;	
}//fim do programa

//funções:
void fibonacci(int qtde)
{
	int vetFibo[qtde];
	vetFibo[0] = 1;
	vetFibo[1] = 1;

	for(int i =2; i < qtde; i++)
	{
		vetFibo[i] = vetFibo[i-1] + vetFibo[i-2];
	}
	
	//invoke da função que imprime o conteudo dio vetor
	imprimirVet(vetFibo,qtde);
}//fim da função

void imprimirVet(int *V,int qtd)
{
	for(int i = 0;i < qtd;i++)
	{
		printf((i<qtd-1?"%d,":"%d."),V[i]);
	}
}//fim da função