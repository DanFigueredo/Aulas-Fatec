/*
	Name: NomeInvertido.cpp
	Author: Daniel Figueredo
	Date: 28/10/25 10:30
	Description: Programa que escreve o nome ao contrario e depois
				de armarzena em um vetor
*/

#include <stdio.h>
main()
{
	char nome[50];
	int i, cont;
	
	printf("Digite seu nome: "); gets (nome);
	
	for(i = 0; nome[i] != '\0'; i++){
 		}//fim do for1
 		
 	puts("\nNome aos contrario: ");
	for (i; i >= 0; i--){
		printf("%c|", nome[i]);
	}//Fim do for2

}//Fim do programa
