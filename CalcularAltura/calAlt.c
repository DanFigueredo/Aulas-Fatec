/*
	Name: CalcAlt.cpp
	Copyright: 
	Author: Daniel Figueredo
	Date: 02/09/25 12:02
	Description: Programa que calcula a altura de uma pessoa e informa se ela é alta , baixa, ou mediana
*/

#include <stdio.h>

main()
{
	float altura = 0.0;
	printf("Digite sua altura : "); scanf("%f", & altura);
	if(altura > 1.80)
		puts("Voce esta alto");
	else if (altura >= 1.55)
		puts("Voce esta na media ");
		else
		puts("Voce esta baixo");
		
}