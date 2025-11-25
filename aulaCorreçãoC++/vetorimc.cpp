/*
	Name: vetorimc.cpp
	Author: Daniel Figueredo
	Date: 25/11/25 10:57
	Description: extreino
*/
#include <stdio.h>
#include <windows.h>
int main(){
	//declarar variaveis 
	float peso = 0.0; 
	float altura = 0.0;
	float imc =0.0;
	float cdd[10];
	int i =0;
	//pedir os dados do individiuo e armazenar o vetor
	for(i=0;i<3;i++)
	{
	printf("\nPessoa %d: ", i+1);
	printf("Digite seu peso: "); scanf("%f", &peso);
	printf("Digite sua altura: "); scanf("%f", &altura);
	imc = peso/(altura*altura);
	cdd[i] = imc;
	
	
	}//fim do for
	
	for(i=0;i<3;i++)
	{
	
		printf("\nPessoa %d tem: %.2f como imc \n",i+1, cdd[i]);
		printf("\nPessoa %d tem: %.2f como imc \n",i+1, cdd[i]);
		printf("\nPessoa %d tem: %.2f como imc\n",i+1, cdd[i]);
		
	}//fim do for
	
	
}//fim do programa 