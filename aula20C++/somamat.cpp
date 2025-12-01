/*
	Name: somamat.cpp 
	Author: Daniel Figueredo
	Date: 18/11/25 11:26
	Description: Programa que leia nome,idade,sexo,altura 
*/
#include<stdio.h>
#include <stdlib.h>
#define green "\033[1;32m"
#define red "\033[1;31m"
#define yellow "\033[1;33m"
#define blue "\033[1;34m"
#define padrao "\033[0m"
int main()
{
	char nome[20];
	int idade;
	char sexo;
	float altura;
	
	system("color");
	//nome
	printf(green);
	printf("\nDigite seu nome:\n");
	printf(padrao);
	gets(nome);
	
		printf(blue);
	printf("\nDigite sua idade:\n");
	printf(padrao);
	scanf("%d", &idade);
	
	//Altura
	printf(red);
	printf("Digite sua altura:\n");
	printf(padrao);
	scanf("%f", &altura);
	
	//idade

	
	//Sexo
	printf(yellow);
	printf("Digite seu sexo: (com m ou f):\n"); 
	printf(padrao);
	scanf(" %c", &sexo);
	
	//Mostrar
	if(sexo == 'm' || sexo =='M')
		printf("%s tem %d anos e %.2f de altura e e do genero masculino",nome,idade,altura);
	else if(sexo == 'f' ||sexo == 'F')
		printf("%s tem %d anos e %.2f de altura e e do genero Feminino",nome,idade,altura);
	else
		printf("Digite algo valido!!!!!");
	

	
		
}//end