#include <stdio.h>

int main()
{
    int mat[3][3];
    int i, j;
    for ( i = 0; i < 3; i++)
    {
       for ( j= 0; j < 3; j++)
       {
        printf("Digite a porra da matriz: ");
        scanf("%d",&mat[i][j]);
       }
       
    }

    //imprimir

    for ( i = 0; i < 3; i++)
    {
       for ( j= 0; j < 3; j++)
       {
            printf("[%d]",mat[i][j]);
       }
       puts("\n");
    }

    //verificar

    int somadp = 0;
    int somads = 0;
    int somaCol = 0;
    int somaLin = 0;
    int soma = 0;
    int flag = 1;

    //soma dp
    for ( i = 0; i < 3; i++)
    {
        somadp = somadp + mat[i][i];
    }
    
    //soma ds
    for ( i = 0; i < 3; i++)
    {
        somads = somads + mat[i][3-1-i];
    }

    //pegar soma

    for ( j = 0; j < 3; j++)
    {
        soma = soma + mat[0][j];
    }

    //linhas e colunas
    for ( i = 0; i < 3; i++)
    {
        somaLin = 0;
        somaCol = 0;
        for ( j = 0; j < 3; j++)
        {
            somaLin += mat[i][j];
            somaCol += mat[j][i];

        }
        if (somadp != soma || somads != soma || soma != somaLin || soma != somaCol)
        {
            flag = 0;
        }else
            flag = 1; 
    }//fim do for 

    if (flag == 1 )
    {
        puts("Essa porra e magica");
    }else  
        puts("essa porra nao e magica");
    
    
    
    
    
}//fim do programa