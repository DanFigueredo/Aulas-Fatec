/*
	Name: parouimpar.cpp
	Author: Daniel Figueredo
	Date: 07/10/25 11:25
	Description: Programa que le 5 numeros e volta se é par ou impar
	
*/
#include <stdio.h>
int main()
{
	int cont; cont = 0; int num ; num = 0.0;
	do
	{
		printf("Digite um numero: "); scanf("%d", &num);
		if(num % 2 == 0)
			printf("%d e par somado com 2 fica: %d\n", num, num + 2);
		else
			printf("%d e impar dividido com 3 fica: %.2f \n", num, (float)num /3);
	cont++;
	}while(cont < 5);
}// Fim do programa