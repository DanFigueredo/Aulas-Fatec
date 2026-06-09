/*
	Name: imprimiPar
	Author: Daniel Figueredo
	Date: 08/06/26 11:01
	Description: Programa que faz uma fun��o recursiva que recebe um numero inteiro positivo e par
				(n) e imprimi todos os numeros pares de 0 at� n em ordem decrescente
*/
#include <stdio.h>
#include <windows.h>
void imprimiPar(int n);

int main()
{
	int n =0;
	printf("Digite o valor de N: ");
	scanf("%d",&n);

	imprimiPar(n);
	
	
}
void imprimiPar(int n){
 	if(n < 0){
		exit (0);
	}
	if(n % 2 ==0){
		printf("%d ",n); 
	}
	imprimiPar(n-1);
 }
