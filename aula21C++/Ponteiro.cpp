/*
	Name: ponteiro.cpp
	Author: Daniel Figueredo 
	Date: 09/03/26 11:15
	Description: Opera��es com ponteiros
				(apontadores para endere�os
				de memoria) 
*/
#include<stdio.h>
int main(){
	int a,b,c;
	a = 95;
	b = 22;
	c = 50;
	puts("Conteudo das variaveis: ");
	printf("\nConteudo de A: %d",a);
	printf("\nConteudo de B: %d",b);
	printf("\nConteudo de C: %d",c);
	
	puts("\nEndereco das variavies em formato decimal: ");
	printf("\nEndereco de A: %d",&a);
	printf("\nEndereco de B: %d",&b);
	printf("\nEndereco de C: %d",&c);
	
	puts("\nEndereco de memoria em Hexadecial: ");
	printf("\nEndereco de A: %p",&a);
	printf("\nEndereco de B: %p",&b);
	printf("\nEndereco de C: %p",&c); //%p de ponteiro(pointer)
	
}