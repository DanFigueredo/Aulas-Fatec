/*
	Name: EnderecoVetor.cpp 
	Author: Daniel Figueredo
	Date: 09/03/26 11:35
	Description: Manipulação de valores em memoria com vetores
*/
#include <stdio.h>

int main(){
	int vet[10];
	int i;
	int tam;
	int tamanho;
	tam = sizeof(vet);
	tamanho = sizeof(vet)/sizeof(int);
	printf("Tamanho do vetor em bytes: %d\n",tam);
	
	printf("\nQuantidade de elementos que cabem no vetor: %d\n",tamanho);
	
	printf("\nTamanho de uma variavel real: %d \n",sizeof(float));
	
	printf("\nTamanho de uma variavel caractere: %d \n",sizeof(char));
	
	printf("\nTamanho de uma variavel booleana: %d \n",sizeof(bool));
	
	printf("\nTamanho de um double: %d \n",sizeof(double));
	for(i=0;i<10;i++){
		printf("\n%p",&vet[i]);
	}//fim do laço
}