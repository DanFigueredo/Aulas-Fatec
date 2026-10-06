//bibliotecas:
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
 
 
//prototipação:
void insertionSort(int *, int );
 
//Variaveis globais:
int trocas,comp;
 
	
int main()
{
	clock_t inicio,fim;
	double tempoDecorrido;
	//int vet [] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int vet[500000];
	int tam = sizeof(vet)/sizeof(int);
	int i = 0;
	trocas = comp = 0;
	//geração randomica de 50k de elementos
	srand(time(NULL));
	for(i = 0; i < tam; i++){
		vet[i] = rand()%1000000;
	}
	puts("====Vetor Original====\n");
	for( i = 0; i < tam; i++)
	{
		printf("[%d]", vet[i]);
	}
	inicio = clock();//guarda o tempo inicial
 
	//invoke da função insertionSort
	insertionSort(vet, tam);
	fim = clock();
	puts("\n\n====Vetor ordenado pelo insertion sort====\n");
	for( i = 0; i < tam; i++)
	{
		printf("[%d]", vet[i]);
	}

	tempoDecorrido = ((double)fim - inicio)/CLOCKS_PER_SEC;
	printf("\n\n====Tempo decorrido: %f====\n\n", tempoDecorrido);
	printf("\n\nQuantidade de trocas: %d", trocas);
	printf("\n\nQuantidade de comparacoes: %d", comp);

}//fim do programa
 
//função InsertionSort
void insertionSort(int *V, int tam)
{
	int i, j, chave;
	for(i = 1; i < tam; i++)
	{
		chave = V[i];
		j = i - 1;
		while(j >= 0 && chave < V[j])
		{
			V[j+1]= V[j];
			j--;
			trocas++;
			comp++;
		}	
		V[j+1] = chave;
		trocas++;
	}
 
}//fim da função