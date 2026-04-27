/*
	Name: Exercicio4-P1.cpp 
	Author: Daniel Figueredo
	Date: 27/04/26 11:42
	Description: 
*/

#include <stdio.h>
#include <string.h>

void imprimirContrario(char []);

int main()
{
	char texto[100];
	printf("Digite a palavra: ");
	gets(texto);
	imprimirContrario(texto);
	
	
}//fim do programa

void imprimirContrario(char texto[])
{
	int i =0;
	
	for(i = 0; texto[i] != '\0';i++)
	{
	
	}
	
	for(i; i >= 0; i--)
	{
		if(texto[i] != 'a' && texto[i] != 'j' && texto[i] != 'p' && texto[i] != 'v')
		{
			printf("[%c]",texto[i]);
		}
	}
	
}

