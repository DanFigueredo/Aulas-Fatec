/*
	Name: loop.cpp 
	Author: Daniel Figueredo  
	Date: 09/09/25 11:35
	Description: Programa para demonstrar a utilização das estrturas de repetição.
*/
#include <stdio.h>
main()
{
	int cont, num , soma;
	float media;
	cont = 0;  num = soma =0;
	media = 0.0;
	
	puts("Programa para calcular a media! ");
	
	do
	{
		printf("Digite o %do numero:", cont
		+1); //Para aparecer a pos dos numeros 	
		scanf("%d", &num);
		soma = soma + num;
		cont++;
	}while(cont<5); //Faça enquanto
	media = (float)soma/cont;
	printf("A media e: %.2f", media);
		
} //fim do programa