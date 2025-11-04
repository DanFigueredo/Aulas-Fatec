/*
	Name: matrixex.cpp
	Author:Daniel Figueredo 
	Date: 04/11/25 11:41
	Description: 
*/
#include<stdio.h>
int main()
{
	int mat[4][4],i,j;
	int ordem = 4;
	int somadp = 0;
	int somads=0;
	int sub =0;
	int cimadp =0;
	int baixods=0;
    int somaall=0;
	puts("Carregar a matriz\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	puts("\nMatriz Carregada!!");
	puts("Conteudo da matriz:");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d", mat[i][j]);//t = tabulação
		}
	puts("\n");
	}
	puts("\nSoma da DP:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
				somadp = somadp + mat[i][j];
				
		}
	}
	printf("%d",somadp);
	
	puts("\nSubtracao DP - DS:");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i + j == ordem-1)
				somads = somads + mat[i][j];
				sub = somads-somadp;
				
		}
	}	
	printf("A subtracao de DP: %d - DS: %d e: %d\n",somadp, somads, sub);
	
	//Achar acima da DP
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i<j)
				cimadp = mat[i][j];
				
				
		}
	}
	//achar abaixo da DS
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i+j>ordem-1)
				baixods = mat[i][j];
				
		}
	}
	
	if(baixods > cimadp)
		printf("\nAbaixo da diagonal secundaria: %d e maior que diagonal Primaria : %d",baixods,cimadp);
	else
		printf("\nAbaixo da diagonal secundaria: %d e menor que diagonal Primaria : %d",baixods,cimadp);
    
    //Somar todos os elementos da matriz
    puts("\nA soma de todos os elementos da matriz e: ");
    for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			somaall += mat[i][j];
				
		}
        
	}
    printf("%d ", somaall);
		
}//fim do programa
