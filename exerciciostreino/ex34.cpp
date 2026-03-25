/*
VetorParaMatriz.cpp
Daniel Figueredo
Programa que le um vetor de 9 numeros inteiros e converte ele pra uma
Matriz com função

*/

//Bibliotecas
#include <stdio.h>

//prototipação
void converter(int *vet, int mat[][3]);
void imprimirmat(int mat[3][3]);
void somardiagonais(int mat[3][3]);

int main()
{
    int vet [9];
    int i =0;
    int tam = sizeof(vet)/sizeof(int);
    for ( i = 0; i < tam; i++)
    {
        printf("Digite os numeros do vetor: ");
        scanf("%d",&vet[i]);
    }//fim do for
    int mat[3][3];
   converter(vet,mat);
   imprimirmat(mat);
   somardiagonais(mat);

    

}//fim do programa

//funções

void converter (int* vet, int mat[][3])
{
    int i, j, k = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            mat[i][j]= *(vet+k);
            k++;
        }  
    }
    
}//fim da função

void imprimirmat(int mat[3][3])
{
    int i, j = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        puts("\n");
        
    }
    
}//fim da função

void somardiagonais(int mat[3][3])
{
    int i, j = 0;
    int somadp = 0;
    int somads = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i ==j)
            {
                somadp = somadp + mat[i][j];
            }
            
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                somads = somads+ mat[i][j];
            }
            
        }
        
    }
    printf("Soma diagonal principal: %d",somadp);
    printf("\nSoma diagonal principal: %d",somads);

    

}

