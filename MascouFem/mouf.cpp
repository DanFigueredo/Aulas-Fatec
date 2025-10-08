/*
	Name: MascFem.cpp 
	Author: Daniel Figueredo 
	Date: 02/09/25 11:44
	Description: Programa para identificar a resposta do usuario e mostrar a mensagem masculino ou femino
*/
#include <stdio.h>

main()
{

	char sexo = ' '; //Char : Variaveis em caracteres 
	puts("Informe seu sexo com F ou M");
	printf("Digite seu sexo: ");
	scanf("%c", &sexo); //%c Para identificar que é caracter
	
	
	if(sexo=='m' ||sexo == 'M') //|| ou , Or
		puts("\nMasculino");
	else if(sexo == 'f' || sexo == 'F')
		puts("\nFeminino");
		else
			puts("Resposta invalida!!!!!!");
	
}// fim do programa 