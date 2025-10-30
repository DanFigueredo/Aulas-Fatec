/*
	Name: TamanhoString.cpp
	Author:Daniel Figueredo 
	Date: 28/10/25 11:03
	Description: Programa que retorna o tamanho de uma string.
*/
#include <stdio.h>
#include <string.h>

main()
{
	char nome[30];
	int tamanho = 0;
	
	printf("Nome: "); gets(nome);
	
	tamanho = strlen(nome); //identifica o tamanho de um string
	printf("Tamanho da string %d", tamanho);
	
	puts("\nNome aos contrario: ");
	for (tamanho--; tamanho >= 0; tamanho--){
		printf("%c|", nome[tamanho]);
	}
}//fim do programa