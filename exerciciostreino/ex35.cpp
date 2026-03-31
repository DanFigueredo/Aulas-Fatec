/*
31/03/2026
Daniel Figueredo 
Programa que carrega um vetor e o transforma em matriz apenas com funções
*/

//importação:
#include <stdio.h>

//prototipação:
void carregarVetor();
void carregarMatriz(int vet[]);
void imprimirVetor(int vet[]);
void imprimirMatriz( int mat[][4]);

//main
int main()
{
     carregarVetor();
     return 0;
}//fim do programa

//funções:
void carregarVetor()
{
    int i = 0;
    int vet[16];
    
    for ( i = 0; i < 16; i++)
    {
        printf("Digite os numeros do vetor: ");
        scanf("%d",&vet[i]);
    }//fim do laço

    carregarMatriz(vet);

}//fim da função

void carregarMatriz(int vet[])
{
    int i = 0;
    int mat[4][4];
    int k =0;
    int j =0;
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mat[i][j] = vet[k];
            k++;
        }
       
    }//fim do laço

    imprimirVetor(vet);
    imprimirMatriz(mat);
}

void imprimirVetor(int *vet)
{
    for (int i = 0; i < 16; i++)
    {
        printf("[%d]",vet[i]);
    }
    
}

void imprimirMatriz(int mat[][4])
{
    for (int  i = 0; i < 4; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            printf("\,[%d\t]",mat[i][j]);
        }
        puts("\n");
        
    }
    
}