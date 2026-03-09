/*
	Name: trocaporfuncao.cpp 
	Author:Danie Figueredo 
	Date: 09/03/26 10:17
	Description: Programa para trocar o valor
	 entre duas variaveis utilizando uma fun��o
*/
#include<stdio.h>
//sec�o de prototipa��o
void trocar(int,int);
int a,b=0;

int main(){
	int a, b =0;
	
	puts("Troca de valores entre variaveis utlizando funcao");
	printf("A:"); scanf("%d",&a);
	printf("B: "); scanf("%d",&b);
	trocar(a,b);
	puts("\nValor depois da troca:");
	printf("A:%d",a);
	printf("\nB:%d",b);
}

//fun��o pra trocar os valores entre duas variaveis
void trocar(int a, int b) //Fun��o que n�o retorna(VOID)
{
	int aux=0;
	aux = a;
	a = b;
	b = aux;
}