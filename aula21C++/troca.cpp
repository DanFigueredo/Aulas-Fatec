/*
	Name: Troca.cpp 
	Author: Daniel Figueredo
	Date: 09/03/26 09:58
	Description: Programa para efetuar a trcoa de valores entre variaveis
*/

#include <stdio.h>

//int c, d; //variaveis globais
int main(){
	int a, b,aux; //variaveis locais
	a = b = aux =0;
	printf("Digite o valor de A: "); scanf("%d",&a);
	printf("Digite o valor do B: "); scanf("%d",&b);
	
	puts("\nConteudo das variaveis antes da troca:");
	printf("%d",a);
	printf("\n%d",b);
	
	puts("\nConteudo das variaveis depois da troca:");
	aux = a;
	a = b;
	b = aux;
	printf("%d",a);
	printf("\n%d",b);
	
}//fim do programa 