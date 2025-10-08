/*
	Name: tabuada.cpp 
	Author: Daniel Figueredo
	Date: 07/10/25 10:31
	Description: Programa que le um numero de 1 a 10 e retorna a tabuada do mesmo
*/

#include <stdio.h>
int main ()
{
	int num, i;
	num = i = 0;
	printf("Digite um numero: "); scanf("%d", &num);
	for(i = 0; i<=10;i++)
		printf("\n%d x %d = %d", num, i, num*i);
}//fim do programa
