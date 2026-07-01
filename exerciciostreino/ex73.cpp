/*
Pergunta 4
Daniel Figueredo
01/07/2026
Programa que le uma matriz e faz calculos
*/

#include <stdio.h>

int main(){
    int mat[3][3];
    int i, j; 
    int tam = 3;
    int somaDP =0;
    int somaDS = 0;
    int maior =0;
    int menor = 0;
    int soma = 0;
    int primeiraVez = 1;
    
    for (i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            printf("Digite os numeros da matriz: ");
            scanf("%d",&mat[i][j]);
            soma += mat[i][j];
            if (primeiraVez == 1)
            {
                maior = mat[i][j];
                menor = mat[i][j];
                primeiraVez =0;
            }

            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }

             if (mat[i][j] < menor)
            {
                menor = mat[i][j];
            }

            if (i == j)
            {
                somaDP += mat[i][j];
            }

            if (i + j == tam - 1)
            {
                somaDS += mat[i][j];
            }
            
        }
        
    }

    //imprimir a matriz
    for ( i = 0; i < tam; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("[%d]", mat[i][j]);
        }
        puts("\n");
        
    }

    printf("Soma diagonal principal: %d", somaDP);
    printf("\nSoma diagonal secundaria: %d", somaDS);
    printf("\nMaior elemento da matriz: %d", maior);
    printf("\nMenor elemento da matriz: %d", menor);
    printf("\nSoma de todos os elementos: %d", soma);
    
}