/*
	Name: Exercicio3-P1.cpp
	Author: Daniel Figueredo
	Date: 27/04/26 10:26
	Description: 
*/

#include <stdio.h>
#include<windows.h>

float verificarTriangulo(float, float,float);
void verificarTipo(float, float, float);

int main()
{
	float x,y,z;
	x = y = z = 0.0;
	printf("Digite o 1 valor: "); scanf("%f",&x);
	printf("Digite o 2 valor: "); scanf("%f",&y);
	printf("Digite o 3 valor: "); scanf("%f",&z);
	verificarTriangulo(x,y,z);
}//fim do programa

float verificarTriangulo(float x, float y, float z)
{
	if(x < y + z && y < z + x && z < x + y){
		puts("E possivel verificar o tipo do triangulo\n");
	}else
		puts("Nao e possivel verificar o tipo do triangulo");
		exit(0);
		
	//invoke
	verificarTipo(x,y,z);
}

void verificarTipo(float x, float y, float z)
{
	if(x == y && y == z)
	{
		puts("Triangulo equilatero");
	}else if(x != y && y != z && z !=x)
	{
		puts("Triangulo escaleno");
	}else
		puts("Triangulo isoceles");
}

