/*
	Name: p1ex2.cpp
	Author: Daniel Figueredo
	Date: 25/11/25 10:20
	Description: Correção do segundo exercicio da P1
*/
#include <stdio.h>
#include <windows.h>
int main(){
	int quoc,num,resto=0;
	printf("Digite um numero: "); scanf("%d",&num);
	quoc = num/2;
	resto = num - (quoc*2);
	if(num ==0){
		printf("Resultado e 1");
		exit(0);
	}
	else if(resto == 0){
		printf("%d e Par", num);
		printf("\nresultado: %d", num*3);
		exit(0);
	}
		else
		printf("%d e impar", num);
		printf("\nResultado: %d", num*2);
		exit(0);
}//fim do prgrama