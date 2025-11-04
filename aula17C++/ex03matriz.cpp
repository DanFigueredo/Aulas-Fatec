/*
	Name: matriz.cpp 
	Author:Daniel Figueredo
	Date: 04/11/25 
	Description: Programa para manipular a matriz com a ordem que o usuario digita
*/
#include <stdio.h>

int main()
{
    int n, i, j = 0;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    int mat[n][n];
    //carregar a matriz
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i+j == n-1)
            {
                mat[i][j] = 1;
            }else
            {
                mat[i][j] = 0;
            }//fim do else condição
                
        }//fim do for de carregamento interno
        
    }//fim do for de carregamento externo

    //Mostrar com 1 apenas na diagonal secundaria 
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        puts("\n");
        
    }
    


    

}//fim do programa