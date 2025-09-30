/*
	Name: paises.cpp 
	Author: Daniel Figueredo
	Date: 30/09/25 11:31
	Description: Programa que calcula taxa anual de cada pais
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	//variaveis
	int pa, pb, anos; float ta, tb;
	pa = pb = anos =  0; ta = tb = 0.0;
	//Pegando os valores dos paises
	printf("Populacao do pais A: "); scanf("%d", &pa);
	printf("Populacao do pais B: "); scanf("%d", &pb);
	printf("Taxa anual do pais A: "); scanf("%f", &ta);
	printf("Taxa anual do pais B: "); scanf("%f", &tb);
	ta = ta/100; tb = tb/100;

		while(pa<pb)
		{
			pa = pa + (pa*ta);
			printf("\n%d", pa);
			pb = pb + (pb*tb);
			printf("\n%d", pb);
			anos = anos +1;
			
			
			
		}//Fim do while
		printf("\nPais A ultrapassou pais B em %d anos", anos);
		
		
}//fim do programa