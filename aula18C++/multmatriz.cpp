int main()
{
	int linA, colA, linB, colB = 0;//indices da matrizes
	
	puts("Programa para mult de matrizes");
	//Matriz A
	printf("\nDigite o numero de linhas da Matriz A: "); scanf("%d", &linA);
	printf("\nDigite o numero de Colunas da Matriz A: "); scanf("%d", &colA);
	//Matriz B
	printf("\nDigite o numero de linhas da Matriz B: "); scanf("%d", &linB);
	printf("\nDigite o numero de Colunas da Matriz B: "); scanf("%d", &colB);
	
	if(colA != linB)
	{
		puts("Nao e possivel multiplicar as matrizes");
		exit(0);
	}//fim da condição
	
		//carregar a matriz A
		int matA[linA][colA];
		int matB[linB][colB];
		int matAB[linA][colB];
		puts("\nMatriz A: ");
		for(int i =0; i < linA; i++)
		{
			for(int j=0; j<colA; j++)
			{
				printf("[%d][%d]: ", i, j);
				scanf("%d", &matA[i][j]);
			}//for interno
			
		}//for externo
		
		//carregar a matriz B
		puts("\nMatriz B: ");
		for(int i =0; i < linB; i++)
		{
			for(int j=0; j<colB; j++)
			{
				printf("[%d][%d]: ", i, j);
				scanf("%d", &matB[i][j]);
			}//for interno
			
		}//for externo
		puts("\n=====> Matrizes Carregadas! <=====");
	
	//mostrar matriz]
	puts("\nMatriz A:\n");
	for(int i =0; i < linA; i++)
		{
			for(int j=0; j<colA; j++)
			{
				printf("\t%d", matA[i][j]);
			}//for interno
		puts("\n");		
		}//for externo
		
	//Mostrar a matriz B
	puts("\nMatriz B:\n");
	for(int i=0; i < linB; i++)
		{
			for(int j=0; j<colB; j++)
			{
				printf("\t%d", matB[i][j]);
			}//for interno
			
		puts("\n");		
		}//for externo
	
		
	//Mostrar a matriz multplicada
	puts("\n====> Matriz multiplicada: <====\n");
	for(int i =0; i <linA; i++)
	{
		for(int j=0;j<colB;j++)
		{
			matAB[i][j]= 0; //Começa recebendo 0
			for(int lin =0;lin<colA;lin++)//outro for com outro indice para manipular a linha e coluna
			{
				matAB[i][j] += matA[i][lin] * matB[lin][j];
			}
		}
	}
	
	for(int i =0; i <linA; i++)
	{
		for(int j=0;j<colB;j++)
		{
			printf("\t%d", matAB[i][j]);
			
		}
		puts("\n");
	}
	
	
}//fim do programa
