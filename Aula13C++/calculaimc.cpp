/*
	Name: calculaimc.cpp
	Author: Daniel Figueredo
	Date: 30/09/25 09:44
	Description: 
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h> //Biblioteca do sistema operacional
int main()
{
	//Declarar as variaveis
	float peso, altura, imc;
	while(1)
	{
	//Variaveis recebe
	peso = altura = imc =  0.0;
	puts("Vamos Calcular seu IMC!");
	puts("--------------------------");
	//Pegar os valores digitados do usuario 
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	//Se o peso ou altura ou peso for zero o programa finaliza
	if(peso == 0 || altura ==0)
		exit(0);
	//Calcular o IMC
	imc = peso/ (altura * altura);
	printf("Seu IMC e : %.3f\n", imc); // Mostra o IMC
	
	if(imc < 16.5)
		puts("Magreza extrema");
	else if(imc < 18.4)
		puts("Muito Magro");
		 else if(imc < 25.0)
			puts("Peso normal");
			  else if(imc < 30.0)
				puts("Sobre peso");
				   else if(imc<35.0)
					puts("Obesidade tipo 1");
					    else if(imc<40.0)
						puts("Obesidade tipo 2");
							 else
								puts("Obesidade tipo 3 - Morbida seu gordo do crl");
Sleep(2500);
//system("pause");
system("cls"); //clear screen (limpa a tela)
}// Fim do while
		
		
	
	
	
	
}//Fim do programa