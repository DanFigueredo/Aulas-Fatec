/*
Daniel Figueredo
06/11
Programa que pede um numero de uma matriz e faz
        com que os de cima da DP sejam 1 e Abaixo seja 0
*/

#include<stdio.h>
int main()
{
    //Declarar as variaveis
    int n = 0;
    int j, i =0;
    printf("Digite o tamanho da matriz: "); scanf("%d", &n);
    int mat[n][n];
    //Carregar a matriz

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i<j)//Acima da dp
                mat[i][j] = 1;
            else 
                mat[i][j] = 0;
        }//interno 
        
    }//externo

    //Mostrar a matriz
    printf("\nMatriz com 1 acima da diagonal principal:\n\n");

     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
          printf("\t%d", mat[i][j]);
        }//interno 
        puts("\n");
        
    }//externo   
}//fim do programa