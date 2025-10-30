/*
	Name: VetorString.cpp
	Author: Daniel Figueredo
	Date: 28/10/25 09:44
	Description: Programa para demonstrar a manipulação de strings por meio
				de vetor de caracteres
*/
#include <stdio.h>

main()
{
	char nome[30]; //somente 1 caracter
	int i, contChar;
	
	printf("Digite seu nome: "); 
	gets(nome);//Gets or Getc - pegar a string ou char 
	
	printf("\n\nSeu nome eh: %s", nome);
	
	//imprimindo cada posição do vetor de char
	contChar = 0;
	
	puts("\nConteudo do Vetor: ");
	
	for(i = 0; nome[i] != '\0'; i++){
	printf("%c|", nome[i]);	
	if (nome[i] != ' '&& nome[i] != '.')
		contChar++;
 	}//fim do for
 	
 	printf("\nSeu nome tem %d caracteres: ", contChar);
}//fim do programa
