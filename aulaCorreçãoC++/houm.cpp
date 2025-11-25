/*
	Name: homensemulheres.cpp
	Author: Daniel Figueredo
	Date: 25/11/25 12:08
	Description: programa que 
*/
#include <stdio.h>
#include <windows.h>
int main(){
	char sexo;
	int idadeH = 0;
	int idadeF = 0;
	float mediaH = 0.0;
	float mediaF = 0.0
	int somaIdadeH = 0;
	int somaIdadeF = 0;
	int i;
	int homens =0;
	int mulheres = 0;
	
	for(i = 0; i < 6; i++)
	{
		printf("Digite seu sexo com (M ou F):"); scanf(" %c" &sexo);
		if(sexo == 'm' && sexo == 'M')
		{
			homens = homens +1;
			printf("Digite sua idade: "); scanf("%d", &idadeH);
			somaIdadeH = somaIdadeH + idadeH;
		}else if(sexo == 'm' && sexo == 'M')
			mulheres = mulheres +1;
			printf("Digite sua idade: "); scanf("%d", &idadeF);
			somaIdadeF = somaIdadeF + idadeF;
			  else 
			   printf("Digite um sexo valido!!!!!");
			
		
		
		mediah = somaIdadeH / homens;
		mediaF = somaIdadeF / mulheres;
	}//fim do for
	

}//fim do programa