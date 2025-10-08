/*
	Name: loop3.cpp (para... faça)
	Author: Daniel Figueredo  
	Date: 09/09/25 12:017
	Description: Programa para demonstrar a utilização das estrturas de repetição.
*/
#include <stdio.h>
main()
{
	int cont, num , soma;
	float media;
	num = soma =0;
	media = 0.0;
	
	puts("Programa para calcular a media! ");
	
	for(cont= 0; cont < 10; cont++)
	{
		printf("Digite %do numero:", cont+1);
		scanf("%d", &num);
		soma = soma + num;
		
	}
	media = (float)soma/cont;
	printf("A media e: %.2f", media);
		
} //fim do programa