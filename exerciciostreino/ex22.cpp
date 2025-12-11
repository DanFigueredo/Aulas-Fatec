/*
Daniel Figueredo
10/12/2025
Programa que le uma matriz 4x4 e mostra a Diagonal Principal e secundaria
*/

#include <stdio.h>
int main()
{
    int i,j=0;
    int mat[4][4];
    int somaDP=0;
    int somaDS=0;
    int qtdDP=0;
    int qtdDS = 0;
    //carregar a matriz
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
            printf("Digite um numero: ");scanf("%d",&mat[i][j]);

       }
       
    }
    //Mostrar a matriz
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
            printf("\t[%d]",mat[i][j]);

       }
       puts("\n");
    }
    
    //Acima da Diagonal Principal
     for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
            if (i==j)
            {
               somaDP = somaDP + mat[i][i];
               qtdDP++;
            }    
       } 
    }

   printf("A soma da diagonal principal e: %d",somaDP);
   printf("\nA quantidade de numeros Da DP e : %d",qtdDP);

   //Diagonal secundaria
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
            if (i+j==3)
            {
               somaDS = somaDS + mat[i][j];
               qtdDS++;
            }    
       } 
    }
    printf("\nA soma da diagonal Secundaria e: %d",somaDS);
    printf("\nA quantidade de numeros Da DS e : %d",qtdDS);
    
}//fim do programa