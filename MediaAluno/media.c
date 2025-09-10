/*
	Name: MédiaAluno.cpp
	Author: Daniel Figueredo
	Date: 02/09/25 11:14
	Description: Programa para calcular a média dos alunos
*/
#include <stdio.h>

main()
{
	//declarar as variaveis 
	float n1, n2, n3, n4 , media;
	n1 = n2 = n3 = n4 = media = 0.0;
	puts("Programa para calcular a media e mostrar o resultado:");
	puts("=====================================================");
	//Entrada de dados
	printf("Nota 1: "), scanf("%f", &n1); 
	printf("Nota 2: "), scanf("%f", &n2);
	printf("Nota 3: "), scanf("%f", &n3); 
	printf("Nota 4: "), scanf("%f", &n4);
	media = (n1 + n2 +n3 + n4)/4;
	//Verificar se o aluno esta aprovado ou reprovado
	printf("Media obtida : %.2f = ", media);
		if(media>=6.0)
			puts("Aprovado");
		else
			puts("Reprovado");
	
}