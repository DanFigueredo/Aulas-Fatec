/*
	Name: Exercicio2-P1.cpp
	Author: Daniel Figueredo
	Date: 27/04/26 10:11
	Description: Programa para caclular o peso ideal para homens e mulheres
*/

#include<stdio.h>
//prototipação
float calcularPesoIdeal(char, float);
void compararPesos(float, float);

int main()
{
	char sexo = ' ';
	float alt = 0.0;
	float pesoIdeal = 0.0;
	float seuPeso = 0.0;
	
	puts("Calculo do peso ideal de uma pessoa: ");
	printf("Sexo: "); scanf(" %c",&sexo);
	printf("Altura: "), scanf("%f",&alt);
	pesoIdeal = calcularPesoIdeal(sexo,alt);
	printf("\nSeu peso ideal e : %.3fKg",pesoIdeal);
	printf("\nQual o seu peso atual: "); scanf("%f",&seuPeso);
	compararPesos(pesoIdeal,seuPeso);
	
		
}//fim do programa

float calcularPesoIdeal(char s, float alt)
{
	float peso = 0.0;
	if(s == 'M'|| s == 'm'){
		peso = 72.7 * alt - 58;
	}else if(s == 'F' || s == 'f'){
		peso = 62.1 * alt - 44.7;
	}else
		puts("Sexo invalido!!!!");
	
	return peso;
}

void compararPesos(float pesoI, float seuP)
{
	float dif = 0.0;
	if(seuP > pesoI)
	{
		dif = seuP - pesoI;
		printf("Voce esta acima do seu peso ideal com a diferenca de: %.3fKg",dif);
	}else if(seuP < pesoI)
	{
		dif = pesoI - seuP;
		printf("Voce esta abaixo do seu peso ideal com a diferenca de: %.3fKg",dif);	
	}
	
}
