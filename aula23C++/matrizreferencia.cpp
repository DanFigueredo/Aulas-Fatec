/*
	Name: matrizreferencia.cpp
	Author: Daniel Figueredo
	Date: 23/03/26 09:41
	Description: Programa para demonstrar como passar um array bidimensional 
				como referencia para uma função
*/
//importação
#include <stdio.h>

//prototipação
void imprimirmatriz(int mat[][3]);

int main()
{
	int mat[3][3]={{4,6,8},
				  {7,3,1},
				  {8,9,2}
				  };
	imprimirmatriz(mat);
	printf("%d",mat[2][1]);
	
	
}//fim do programa

//fun��o
void imprimirmatriz(int m[][3])
{
	int i,j = 0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",m[i][j]);
			}
			puts("\n");
		}
		m[2][1]= 200;
		
	puts("\nImprimindo a diagonal principal:");
	
}//fim da função