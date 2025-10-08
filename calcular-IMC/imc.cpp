/*
	Name: Calculador de IMC
	Author: Daniel Figueredo
	Date: 26/08/25 10:57
	Description: Programa para calcular o imc de uma pessoa
*/
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float alt, peso, imc;
	alt= 0; peso = 0; imc = 0;
	puts("Programa para calcular o imc de uma pessoa");
	printf("Digite sua altura:");
	scanf("%f" , &alt);
	printf("Digite seu peso:");
	scanf("%f", &peso);
	imc = peso/(alt*alt);
	printf("Seu IMC �: %.4f", imc);
	
}