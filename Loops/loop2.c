/*
	Name: loop.cpp 
	Author: Daniel Figueredo  
	Date: 09/09/25 12:06
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
	
	while(cont<5)
	{
		printf("Digite %do numero:", cont+1);
		scanf("%d", &num);
		soma = soma + num;
		cont++;
	}
	media = (float)soma/cont;
	printf("A media e: %.2f", media);
		
} //fim do programa