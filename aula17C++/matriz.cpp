/*
	Name: matriz.cpp 
	Author:Daniel Figueredo
	Date: 04/11/25 10:52
	Description: Programa para fazer carga
				 de uma matriz quadrada de ordem 3 
*/
#include <stdio.h>
int main(){
	int mat[3][3], i, j;//Declarar matriz
	//int cubo[][][] seria assim
	i = j = 0;//i é o indice da lina e J é o da coluna
	int ordem = 3;
	puts("Carga na matriz 3x3");
	do{
		do
		{
			printf("[%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
			j= j+1;
		}while(j<3);//fim do laço 
		
	i = i+1;
	j=0;	
		
	}while(i<3);//fim do laço externo 
	puts("\nMatriz carregada");
	puts("\nConteudo da matriz: \n");
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("\t%d", mat[i][j]);//t = tabulação	
		}//fim do for interno
		
	puts("\n");
	}//fim do for externo
	
	puts("Elementos da diagonal principal");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				printf("%d ", mat[i][j]);	
		}//fim do for interno DP
	}//fim do for externo DP
	
	puts("\nElementos da DS");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i+j) == ordem-1)
				printf("%d ", mat[i][j]);
				
		}//fim do interno ds
	}//fim externo Ds
	
	puts("\nAcima da DP");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)	
				printf("%d ", mat[i][j]);
		}//interno
	}//externo
	
	puts("\nAbaixo da DP");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
				printf("%d ", mat[i][j]);
		}//interno
	}//extrerno
	
	puts("\nAcima da DS");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j < ordem-1)
				printf("%d ", mat[i][j]);	
		}//interno
	}//externo
	
	puts("\nAbaixo da DS");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j>ordem-1)
				printf("%d ", mat[i][j]);
		}//interno
	}//externo
}//fim do programa
