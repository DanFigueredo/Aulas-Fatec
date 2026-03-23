/*
	Name: cadastro.cpp 
	Author: Daniel Figueredo
	Date: 23/03/26 10:36
	Description: Fazer o cadastro de uma pessoa emitindo 
				 beeps ao final de cada entrada
*/
//importação
#include <windows.h>
#include<conio.h>
#include<stdio.h>

int main(){
	char *nome;
	int idade;
	float altura;
	char sexo;
	int freq,tempo;
	float peso =0;
	float imc = 0;
	freq = 1000;
	tempo = 100;
	
	printf("Nome: "); scanf("%s",&nome);
	Beep(freq,tempo);
	
	printf("\nIdade: ");scanf("%d",&idade);
	Beep(freq,tempo);
	
	printf("\nAltura: "); scanf("%f",&altura);
	Beep(freq,tempo);
	
	printf("\nPeso: "); scanf("%f",&peso);
	Beep(freq,tempo);
	
	printf("\nSexo: "); scanf(" %c",&sexo);
	Beep(freq,tempo);
	
	imc = peso / (altura*altura);
	if(imc<18.5)
	{
		printf("Muito magro");
		Beep(300,100);
	}
	else if(imc<24.9)
	{	
		printf("Normal");
		Beep(600,100);
	}
	else if(imc <29.9)
	{
		printf("Sobrepeso");
		Beep(800,100);
	}
	else if(imc < 39.9)
	{
		printf("Obesidade");
		Beep(800,100);
		Beep(800,100);
	}
	else{
		printf("Obesidade morbida");
		Beep(800,100);
		Beep(800,100);
		Beep(800,100);
	}
		
		
	
}

