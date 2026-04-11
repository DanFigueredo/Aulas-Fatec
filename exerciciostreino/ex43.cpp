////Exercicio 1 - Lista 2

/*
Daniel Figueredo 
10/04/2026
Programa que faça a carga em uma matriz com a quantidade de linhas e
colunas definida pelo usuário, a carga deve ser feita por uma função.
Após a carga, os elementos da matriz deverá ser passado para um vetor, em uma nova
função. Ao final, tanto o vetor quanto a matriz devem sem impressos cada um por
uma função.
*/

//importação:
#include <stdio.h>

//prototipação:
void carregaMat();
void mostrarMat(int , int ,int m[][100]);
void carregarVet(int ,int ,int m[][100]);
void mostrarVet(int *,int );

//programa
int main()
{
    
    carregaMat();
    return 0;
}//fim do programa

//funções:
void carregaMat()
{
    //variaveis:
    int lin = 0;
    int col = 0;
    int i = 0;
    int j = 0;

    //pedir as linhas e colunas da matriz pro usuario
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&lin);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&col);

    //criar matriz 
    int mat[100][100];
    //carregar a matriz
    for ( i = 0; i < lin; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Digite os numeros da matriz: ");
            scanf("%d",&mat[i][j]);
        }//for interno
        
    }//for externo

    //invoke da função pra mostrar a matriz:
    mostrarMat(lin,col,mat);
   
}//fim da função que carrega a matriz

//função pra mostrar a matriz
void mostrarMat(int l, int c ,int m[][100])
{
    int i,j;
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("[%d]",m[i][j]);
        }
        puts("\n");     
    }
    //invoke pra carregar o vetor
    carregarVet(l,c,m);

}//fim da função que mostra a matriz

void carregarVet(int l,int c,int m[][100])
{
    int i,j;
    int k = 0;
    int vet[100];
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            vet[k] = m[i][j];
            k++;
        }//interno
        
    }//externo

    //invoke pra mostrar o vetor
    mostrarVet(vet,k);
    
}//fim da função que carrega o vetor 

void mostrarVet(int *v,int t)
{
    int i = 0;
    for (i = 0; i < t ; i++)
    {
        printf("%d | ",v[i]);
    }
    
}//fim da função que mostra o vetor

