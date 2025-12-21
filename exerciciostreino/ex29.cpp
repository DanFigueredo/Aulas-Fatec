#include <stdio.h>

int main() 
{
   float vet[21];
   int i,j,k;
   for ( i = 0; i < 21; i++)
   {
    printf("Digite um numero: ");
    scanf("%f",&vet[i]);
   }
   //passar pra matriz
   float mat[3][7];
   k=0;
   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 7; j++)
    {
        mat[i][j] = vet[k];
        k++;
    }
    
   }
   //mostrar a matriz
   
   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 7; j++)
    {
        printf("\t [%.2f]",mat[i][j]);
    }
    
    puts("\n");
}
   
}//fim do programa