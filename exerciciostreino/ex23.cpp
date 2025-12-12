/*
Daniel Figueredo
11/12/2025 11:50 AM
Programa que le um vetor de 16 numeros inteiros e o transforma 
                    em uma matriz 4x4
*/
#include <stdio.h>
int main()
{
    int vet[16];
    int i,j,k=0;
    //carregar o vetor
    for ( i = 0; i < 16; i++);
    {
        printf("Digite um numero: "); scanf("%d",&vet[i]);

    }//Fim do for que carrega o vetor

    puts("------------>Esse e o vetor:<------------");
    for ( i = 0; i < 16; i++)
    {
        printf("%d | ",vet[i]);
    }

    //Transformar para matriz
    int mat[4][4];
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mat[i][j] = vet[k];
            k++;
        }   
    }
    puts("\n------------>Essa e a matriz:<------------");
    //Mostrar a matriz
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
           printf("\t [%d]", mat[i][j]);
        }
        puts("\n");
    }
     
}//fim do programa