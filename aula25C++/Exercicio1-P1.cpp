/*
	Name: Exercicio1-P1.cpp
	Author: Daniel Figueredo
	Date: 27/04/26 09:50
	Description: Calcular quantos dias uma pessoa ja viveu 
*/

//importação:
#include <stdio.h>

//prototipação:
int calcularDias(int , int , int , int );

int main()
{
	int dias, meses, anos,totalDias;
	dias = meses = anos = totalDias = 0;
	puts("Quantos anos , meses e dias voce ja viveu?");
	printf("Anos: "); scanf("%d",&anos);
	printf("Meses: "); scanf("%d",&meses);
	printf("Dias: "); scanf("%d",&dias);
	//invoke
	calcularDias(anos,meses,dias,totalDias);
	
	
}//fim do programa

//funções:
int calcularDias(int a, int m, int d, int t)
{
	a *= 365;
	m *= 30;
	t = a + m + d;
	printf("Voce ja viveu %d dias",t);
}

