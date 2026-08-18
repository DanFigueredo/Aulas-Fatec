/*
	Name:  FIFO.cpp
	Author: Daniel Figueredo
	Date: 11/08/26 11:45
	Description: Programa para implementa��o de uma fila do tipo FIFO - First in first out
*/
#include <stdio.h>
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
	
	...
	
}//end

//Fun��o para inserir um elemento na fifo:
void enQueue(int)
{
	...
}

//Fun��o que retira um elemento da fila:
int deQueue()
{
	...
}

//Fun��o que verifica se a fila esta cheia:
int isFull()
{
	if((inicio == fim + 1 %tam) || (inicio ==0 && fim == tam-1))
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
	
}