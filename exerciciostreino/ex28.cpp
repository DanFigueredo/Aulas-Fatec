/*
Daniel Figueredo
15/12/2025 2:06 PM
Programa que le um vetor e transforma em uma matriz, com Do while
*/
#include <stdio.h>
int main(){
    int vet[16];
    int i = 0;
    int j=0;
    int k=0;
    int somaDP=0;
    int somaDS=0;
    //Carregar o vetor
    do
    {
        
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
        i++;
    } while (i<16);
    //Mostrar o vetor
    puts("---->Vetor<----");
    i=0;
    do
    {
        
        printf("%d | ",vet[i]);
        i++;
    } while (i<16);

    //transformar o vetor em matriz
    k=0;
    int mat[4][4];
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mat[i][j] = vet[k];
            k++;
        }
     
    }
    //Mostrar a matriz
    puts("---->Matriz<----");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("\t [%d]",mat[i][j]);
        }
        puts("\n");
    }  

    //calcular soma Diagonal Principal
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i == j)
            {
                somaDP += mat[i][j];
            }
            
        }   
    }  

    //Calcular a soma da Diagonal Secundaria
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i+j == 4-1)
            {
                somaDS += mat[i][j];
            }
            
        }
    }  

    printf("A soma da diagonal principal e: %d",somaDP);
    printf("\nA soma da diagonal secundaria e: %d",somaDS);


}//fim do programa