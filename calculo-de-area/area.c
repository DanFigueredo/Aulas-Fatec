/*
	Name: Calculador da area de um triangulo retangulo
	Author: Daniel Figueredo
	Date: 26/08/25 10:57
	Description: Programa para calcular a area de um triangulo retangulo
*/
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float base, altura, res;
	base = 0; altura = 0; res = 0;
	printf("Qual a altura do triangulo?");
	scanf("%f" , &altura);
	printf("Qual a base do triangulo?");
	scanf("%f", &base);
	res = base * altura;
	printf("A area desse triangulo é: %.2f", res);
	
}