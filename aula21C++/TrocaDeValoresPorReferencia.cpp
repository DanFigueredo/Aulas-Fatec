/*
	Name: TrocaValoresPorReferencia.cpp
	Author: Daniel Figueredo
	Date: 09/03/26 10:50
	Description: Programa para troca de valores entre variaveis 
				com passagem de parametro por referencia
*/

#include<stdio.h>
//protipa��o
void trocar(int *,int *);//* ponteiro, apontador, referencia
int main(){
	int a,b=0;
	puts("Troca de valores com passagem de parametros por referencia");
	printf("A: "); scanf("%d",&a);
	printf("B: "); scanf("%d",&b);	
	trocar(&a,&b);
	puts("Valores do conteudo das variaveis depois da troca: ");
	printf("A: %d",a);
	printf("\nB: %d",b);
}
void trocar(int *a, int *b)
{
	int aux =0;
	aux = *a;
	*a = *b;
	*b = aux;
}