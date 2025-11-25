/*
	Name: p1ex3.cpp
	Author: Daniel Figueredo
	Date: 25/11/25 10:20
	Description: Correção do terceiro exercicio da P1
*/
#include <stdio.h>
#include <windows.h>
int main(){
	int i , cont = 0;
	float nota, somaNotas, mediaTurma = 0.0;
	do{
		
	 	printf("\nCalculo da media  da %d turma\n", cont+1);
	 	puts("======================================");
	 	somaNotas = 0;
		mediaTurma = 0;
		i = 0;
	 
		while(i<5)
		{
			i++;
			printf("\nNota do %d aluno: ", i);
			scanf("%f",&nota);
			somaNotas = somaNotas + nota;
		}//fim do while
		mediaTurma = somaNotas/i;
		printf("\nmedia da turma: %.2f", mediaTurma);
		
	 	cont++;	
	}while(cont < 3);
}//fim do programa