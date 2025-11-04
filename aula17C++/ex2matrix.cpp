/*
	Name: matriz.cpp 
	Author:Daniel Figueredo
	Date: 04/11/25 10:52
	Description: Programa para fazer carga
				 de uma matriz quadrada de ordem 3 
*/
#include <stdio.h>
int main()
{
    int n = 0;
    int i, j = 0;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);
    int mat[n][n];
    //carregar a matriz
    for ( i = 0; i < n; i++)
    {

        for ( j = 0; j < n; j++)
        {
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
            
        }
        
    }//fim do for que carrega a matriz

    //Mostrar a matriz com 1 na diagonal central
    for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{

			printf("\t%d", mat[i][j]);//t = tabulação	
		}//fim do for interno
		
	puts("\n");
	}//fim do for externo
    

}//fim do programa