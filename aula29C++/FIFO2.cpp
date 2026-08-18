/*
	Name:  FIFO.cpp
	Author: Daniel Figueredo
	Date: 11/08/26 11:45
	Description: Programa para implementa��o de uma fila do tipo FIFO - First in first out
*/
#include <stdio.h>
#include <windows.h>
int itens[5];
int inicio = -1, fim = -1;
int tam = 5;


//protipa��o:
void enQueue(int); //insere um elemento na fila
int deQueue(); //Retira um elemento da FIFO
int isFull(); //Testa se a fila esta cheia
int isEmpty(); //Testa se a fila esta vazia 
void showFIFO(); //Exibi o conteudo da fila

int main()
{
	
	int option;
	while(1)
	{
		system("cls");
		puts("Menu para manipular a fila FIFO");
		puts("===================================");
		puts("1 - Inserir na FIFO\n2 - Retirar da FIFO\n3 - Exibir Fila\n4 - Sair");
		puts("=========================================================================");
		printf("Ecolha sua opcao: ");
		scanf("%d",&option);
	
		switch(option)
		{
			case 1 : int elem ;
			printf("\nDigite o elemento: "); scanf("%d",&elem);
			enQueue(elem);
			break;
		
			case 2 : deQueue();
			break;
		
			case 3 : showFIFO();
			break;
		
			case 4 : exit(0);
		
			default : puts("Escolha corretamente");
		}//fim do switch	
		Sleep(2000);
	}//fim do while
	
	
	
	
}//end

//Fun��o para inserir um elemento na fifo:
void enQueue(int elem)
{
	if(isFull() == 1)
	{
		puts("\nA fila esta cheia");
	}else
	{
		if(inicio == -1){
			inicio = 0;
		}
		
		fim = (fim + 1) % tam;
		itens[fim] = elem;
		printf("\nElemento %d foi inserido na fifo\n", elem);
	
	}
}

//Fun��o que retira um elemento da fila:
int deQueue()
{
	int elem;
	if(isEmpty() == 1){
		puts("\nA fila esta vazia");
		return -1;
	}else{
		elem = itens[inicio];
		if(inicio == fim){
			inicio = fim = -1;
		}else{
			inicio = (inicio + 1) % tam;
		}
		
		printf("\n%d foi retirado da fila\n",elem);
		return elem;
	}
}

//Fun��o que verifica se a fila esta cheia:
int isFull()
{
	if((inicio == (fim + 1) %tam) || (inicio ==0 && fim == tam-1))
	{
		return 1; //Return true if is full
	}else
		return 0; // return false if is not full
}

//Fun��o que testa se a fila esta vazia:
int isEmpty()
{
	if(inicio == -1){
		return 1; //True
	}else
		return 0; //False
}

//Fun��o para mostar a fila:
void showFIFO()
{
	if(isEmpty() == 1){
		puts("\nA fila esta vazia\n");	
	}
	int i;
	
	for(i = inicio ; i != fim;i = (i+1) % tam){
		printf("[%d] | ", itens[i]);
	}
	printf("[%d] ", itens[i]);

}