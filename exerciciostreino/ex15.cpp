/*
Daniel Figueredo
1/12/2025
Programa que le 16 numeros
 e armazena em um vetor e depois preenche uma matriz 4x4 
*/

#include <stdio.h>
int main()
{
    //Armazenar os valores
    int vet[20];
    int i;
    int mat[4][4];
   for( i = 0; i< 16; i++) 
   {
    printf("Digite um numero: "); scanf("%d", &vet[i]);
   }//fim do for
   int k =0;
   for ( i = 0; i < 4; i++)
   {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = vet[k];
            k++;
        }   
   }
   for ( i = 0; i < 4; i++)
   {
        for ( int j = 0; j < 4; j++)
        {
            printf("\t%d",mat[i][j]);
            
        }//interno
       puts("\n");
   }//externo  
}//fim do programa

        