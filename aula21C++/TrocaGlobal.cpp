/*
	Name: trocaglobal.cpp 
	Author: Daniel Figueredo
	Date: 09/03/26 10:41
	Description: Programa que realiza a troca de variaveis globais
*/
#include<stdio.h>
//sec�o de prototipa��o
void trocar();
int a,b=0;

int main(){
	
	puts("Troca de valores entre variaveis utlizando funcao");
	printf("A:"); scanf("%d",&a);
	printf("B: "); scanf("%d",&b);
	trocar();
	puts("\nValor depois da troca:");
	printf("A:%d",a);
	printf("\nB:%d",b);
}

//fun��o pra trocar os valores entre duas variaveis
void trocar() //Fun��o que n�o retorna(VOID)
{
	int aux=0;
	aux = a;
	a = b;
	b = aux;
}