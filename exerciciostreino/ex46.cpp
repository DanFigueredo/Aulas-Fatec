/*
Daniel Figueredo 
12/02/2026
Programa que carregue uma matriz de tamanho definido pelo usuário.
 Após a carga, por meio de funções separadas, calcule e exiba: 
 A media, o menor e maior e a soma de cada linha separadamente
*/

//importação:
#include <stdio.h>

//prototipação:
void carregarMat();
void mostrarMedia(int m[][100],int ,int );
void maiorEmenor(int m[][100],int ,int );
void somaLinhas(int m[][100],int ,int );
//programa:
int main()
{
    carregarMat();
    return 0;

}//fim do programa

//funções:
void carregarMat()
{
    int i,j;
    int lin = 0;
    int col = 0;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d",&lin);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d",&col);
    int mat[100][100];
    for ( i = 0; i < lin; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Digite os elementos da matriz: ");
            scanf("%d", &mat[i][j]);
        }
        
    }

    //printar a matriz
    for ( i = 0; i < lin; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("[%d]",mat[i][j]);
        }
        puts("\n");
    }
    //invoke:
    mostrarMedia(mat,lin,col);
    
}//fim da função que carrega a matriz

void mostrarMedia(int m[][100],int l,int c)
{
    int i,j;
    int soma = 0;
    float media = 0.0;
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            soma += m[i][j];
        }
        
    }
    media = (float)soma/(l * c);
    printf("A media e: %.2f",media);
    //invoke da proxima função:
    maiorEmenor(m,l,c);
    
}//fim da função que mostra a media

void maiorEmenor(int m[][100],int l,int c)
{
    int i,j;
    int maior,menor;
    maior = m[0][0];
    menor = m[0][0];
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (m[i][j] > maior)
            {
                maior = m[i][j];
            }
            if (m[i][j] < menor)
            {
                menor = m[i][j];
            }
                  
        }   
    }

    printf("\nO maior numero e: %d",maior);
    printf("\nO menor numero e: %d",menor);
    //invoke pra somar cada linha:
    somaLinhas(m,l,c);
}//fim da função que mostra o maior e menor

void somaLinhas(int m[][100],int l,int c)
{
    int i,j;
    for ( i = 0; i < l; i++)
    {
        int somaLinhas =0;
        for ( j = 0; j < c; j++)
        {
            somaLinhas += m[i][j];
        }
        printf("\nSoma da linha %d: %d", i+1, somaLinhas);
    }
    
}//fim da função que soma cada linha