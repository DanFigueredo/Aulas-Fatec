/*
Daniel Figueredo
06/11
Programa que pede um numero de uma matriz e faz
        com que os de baixo da DP sejam 1 e Abaixo seja 0
*/

#include<stdio.h>
int main()
{
    //declarar variaveis 
    int n, j, i = 0;
    printf("Digite o tamanho da matriz: "); scanf("%d", &n);
    int mat[n][n];
    //carregar a matriz

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i>j)//Abaixo da diagonal principal
                mat[i][j]= 1;
            else  
                mat[i][j]= 0;
        }//interno
        
    }//externo

    //Mostrar a matriz
    puts("Mostrando a matriz com 1 abaixo da diagonal principal:");
    for ( i = 0; i < n; i++)
    {
       for ( j = 0; j < n; j++)
       {
            printf("\t%d", mat[i][j]);
       }//interno
       puts("\n");
    }//externo
    
    
}//fim do programa