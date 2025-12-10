/*
Daniel Figueredo
10/12/2025 7:40 PM
Programa que Crie uma matriz NxN onde: a DP = 1 e DS = 1 e o resto 0
*/

#include <stdio.h>
int main()
{   
    int ordem = 0;
    int i,j=0;
    printf("Qual Vai ser a ordem da matriz? "); scanf("%d",&ordem);
    int mat[ordem][ordem];
    //imprimir com a DP e DS sendo 1 e o resto 0;
    for ( i = 0; i < ordem; i++)
    {
        for (j= 0; j < ordem; j++)
        {
          if (i == j)
          {
            mat[i][j]= 1;
          }else if (i+j == ordem-1)
          {
            mat[i][j]= 1;
          }else
          {
            mat[i][j]=0;
          }
          printf("\t[%d]",mat[i][j]);  
        }//for interno
        puts("\n"); 
    }//for externo
}//fim do programa 