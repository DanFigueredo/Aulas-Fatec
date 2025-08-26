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
#include <locale.h>//Biblioteca de localiza√ß√£o de idioma 
int main()//Fun√ß√£o principal
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, soma;
	a = 0; b = 0; soma = 0; //Atribui valor 0 as variaveis
	int sub, mult; float div; //Float: numeros reais
	sub = 0; mult = 0; div = 0;
	puts("Digite 2 numeros inteiros");//Para exibir algo formatado
	printf("A: "); scanf("%d", &a);//%d √© uma atrbui√ß√£o para um valor(int)
	puts("--------------");
	printf("B: "); scanf("%d", &b);//scanf fazer a leitura de um dado digitado pelo usuario
	soma = a + b;
	puts("--------------");
	printf("A soma È: %d \n", soma);
	puts("--------------");
	sub = a - b;
	printf(" subtraÁ„o È: %d \n", sub);
	puts("--------------");
	mult = a * b;
	printf("A multiplicaÁ„o È: %d \n", mult);
	puts("--------------");
	div = (float)a / b;
	printf("A divis„o È: %.1f ", div); //f √© de float, .1 √© para mostrar quantas casas decimais quiser 
	
	
}//Fim do programa 