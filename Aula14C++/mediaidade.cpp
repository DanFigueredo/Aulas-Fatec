/*
	Name: mediaidade.cpp
	Author: Daniel Figueredo
	Date: 07/10/25 09:39
	Description: Programa para ler 7 idades e calcular a media entre elas
*/
#include <stdio.h>
int main()
{
	//Declarar variaveis.
	int idade, somaidade, cont; float media;
	idade = somaidade = cont = 0; media = 0.0;
	do //Faça
	{
		printf("Digite idade: "); 
		scanf("%d", &idade);
		somaidade = somaidade+ idade;
		cont++;
		
	}while(cont < 7 );//enquanto
	 media = (float)somaidade/cont;
	 printf("A media das idades e: %.2f", media);
	 
	
	
}//fim do programa