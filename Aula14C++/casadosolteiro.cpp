/*
	Name: casadosolteiros.cpp
	Author: Daniel Figueredo
	Date: 07/10/25 09:54
	Description: Programa que le se a pessoa é homem ou mulher e se
				é casado ou não
*/

#include <stdio.h>
int main()
{
	char sexo, casado;
	int casadosM, solteirosM, casadosH, solteirosH; 
	casadosM = solteirosM =  casadosH = solteirosH = 0; 
	float media;  media = 0.0;
	
	
	int cont; cont = 0;
	while(cont < 3)
	{
		printf("Sexo (M/F): "); scanf(" %c", &sexo);
		printf("Casado? (S/N): "); scanf(" %c", &casado);
		
		if(sexo == 'm' || sexo == 'M')// Homem
			if(casado == 'S' || casado == 's')// Casado
			casadosH = casadosH + 1;
			else 
				solteirosH = solteirosH + 1;
		else
			if(casado == 's' || casado == 'S')
				casadosM = casadosM + 1;
			else
				solteirosM = solteirosM + 1;
	cont++;
				
	}//Fim do while
	printf("\n quantidade de homens casados %d", casadosH);
	puts("\n================================================");
	printf("\n quantidade de mulheres casados %d", casadosM);
	puts("\n================================================");
	printf("\n quantidade de homens solteiros %d", solteirosH);
	puts("\n================================================");
	printf("\n quantidade de mulheres solteiras %d", solteirosM);
	media = (casadosM + solteirosM +  casadosH + solteirosH) / cont;
	printf("%.2f", media);
	
	
	
	 
	
}//Fim do programa