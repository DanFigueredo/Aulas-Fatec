/*
	Name: maioremenor.cpp
	Author: Daniel Figueredo
	Date: 07/10/25 10:50
	Description: Programa que le 10 numeros e retorna qual é o maior e o menor
*/
#include <stdio.h>
int main()
{
	int cont; cont = 0;
	float num; num = 0; float maior, menor; maior = menor = 0;
	printf("Digite um numero: "); scanf("%f", &num);
	menor = num; maior = num;
	while(cont < 9)
	{
	printf("Digite um numero: "); scanf("%f", &num);
	
	if(num > maior)
		maior = num;
	if (num < maior)
		num = menor;	 
cont++;
}// Fim do while
	printf("O maior e: %.2f e o menor numero e: %.2f", maior, menor);
}//Fim do programa