/*
	Name: idade.cpp
	Author: Daniel Figueredo
	Date: 30/09/25 10:44
	Description: Programa que classifica a idade de uma pessoa de acordo com a tabela
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	//Variaveis
	int idade; 
	while(1)
	{
	idade = 0;
	puts("Classificador de idade: ");
	puts("=======================");
	printf("Digite sua idade: "); scanf("%d", &idade);
	if(idade == 0 )
		exit(0); //Sai do programa
	if(idade < 2)
		puts("Bebe");
		else if(idade <13)
			puts("Crianca");
			 else if(idade <20)
				puts("Adolescente");
				  else if(idade<65)
				  	puts("Adulto");
				  	    else
				  	    	puts("Idoso");
Sleep(1500);
system("cls");
}//Fim do while
	
}//Fim do programa