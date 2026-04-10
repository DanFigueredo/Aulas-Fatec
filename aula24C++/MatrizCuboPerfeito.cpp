/*
	Name: MatrizMagica.cpp
	Author: Daniel Figueredo
	Date: 06/04/26 11:51
	Description: Programa que le e imprime uma matriz por meio de
				 funções e diz se ela é uma matriz cubo magico 
*/

//importação
#include <stdio.h>

//prototipação
void lerMat();
void imprimirMat(int m[][3]);
void verificarMat(int m[][3]);
int main()
{
	lerMat();
    return 0;
}

void lerMat()
{
	int mat[3][3];
	int i = 0;
	int j = 0;
	for(i = 0; i < 3;i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Digite os elementos da matriz: ");
			scanf("%d",&mat[i][j]);
		}//interno
		
	}//externo

	//invoke
	imprimirMat(mat);
}//fim da função

void imprimirMat(int m[][3])
{
	int i = 0;
	int j = 0;
	for(i = 0; i < 3;i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("[%d]",m[i][j]);
		}//interno
		puts("\n");
	}//externo	
	
	//invoke
	verificarMat(m);
	
}//fim da função

void verificarMat(int m[][3])
{
    //variaveis:

	int i = 0;
	int j = 0;
    int soma = 0;
    int somaLinha, somaColuna;
    int flag = 1;
    int somadp = 0;
    int somads = 0;

    //diagonal pricipal
    for ( i = 0; i < 3; i++)
    {
       somadp = somadp + m[i][i];
    }

    //diagonal secundaria
    for ( i = 0; i < 3; i++)
    {
       somads = somads + m[i][3-1-j];
    }

    // Define alvo pela primeira linha
    for (j = 0; j < 3; j++)
    soma += m[0][j];

    // Verifica cada linha e cada coluna no mesmo loop
    for (i = 0; i < 3 ; i++) 
    {
        somaLinha  = 0;
        somaColuna = 0;

    for (j = 0; j < 3; j++) 
    {
        somaLinha  += m[i][j]; // percorre linha i
        somaColuna += m[j][i]; // percorre coluna i 
          
    }

    if (somadp != soma || somads != soma || soma != somaLinha || soma != somaColuna)
        flag = 0;
    }
 

    if(flag == 1)
    {
        puts("E magico");
    }else   
        puts("nao e magico");
       		
}//fim da função