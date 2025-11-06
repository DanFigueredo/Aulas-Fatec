/*
Daniel Figueredo
06/11
Programa que deixa as duas diagonais de uma matriz em 1
*/
#include <stdio.h>
int main()
{
    //declarar variaveis
    int count, i, j = 0;
    printf("Digite o tamanho da matriz: "); scanf("%d", &count);
    int mat[count][count];
    //Carregar a matriz

    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            if(i==j)
                mat[i][j] = 1;
            else if((i+j) == count-1)
                mat[i][j] = 1;
                else
                    mat[i][j] = 0;
                    
        }//interno
        
    }//externo

    //Mostrar a matriz
    puts("A matriz com ambas as diagonais com 1:");
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            printf("\t%d", mat[i][j]);
        }//interno
        puts("\n");
        
    }//externo 
}//fim do programa
