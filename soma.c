/*
	Name: Primeiro.cpp
	Author: Daneil Figueredo
	Date: 26/08/25 09:53
	Description: Programa para calcular a soma de dois numeros inteiros que foram digitados pelo usuario 
*/
//Comentario
//Todo final de linha precisa ter ";"
//\n usado para pular linha como o br(breakroll)
//puts imprimi uma string mostra uma linha e pula linha


#include <stdio.h>//Stander input output 
#include <locale.h>//Biblioteca de localização de idioma 
int main()//Função principal
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, soma;
	a = 0; b = 0; soma = 0; //Atribui valor 0 as variaveis
	int sub, mult; float div; //Float: numeros reais
	sub = 0; mult = 0; div = 0;
	puts("Digite 2 numeros inteiros");//Para exibir algo formatado
	printf("A: "); scanf("%d", &a);//%d é uma atrbuição para um valor(int)
	puts("--------------");
	printf("B: "); scanf("%d", &b);//scanf fazer a leitura de um dado digitado pelo usuario
	soma = a + b;
	puts("--------------");
	printf("A soma �: %d \n", soma);
	puts("--------------");
	sub = a - b;
	printf(" subtra��o �: %d \n", sub);
	puts("--------------");
	mult = a * b;
	printf("A multiplica��o �: %d \n", mult);
	puts("--------------");
	div = (float)a / b;
	printf("A divis�o �: %.1f ", div); //f é de float, .1 é para mostrar quantas casas decimais quiser 
	
	
}//Fim do programa 