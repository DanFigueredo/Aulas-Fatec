/*
	Name: aleatorio.cpp
	Author: Daniel Figueredo
	Date: 23/03/26 11:19
	Description: Gerador de numeros aleatorios 
*/

//importação
#include <windows.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
	int num;
	int vet[100];
	srand(time(NULL));  //semente de acordo com o tempo
	int i = 0;
	int time = 100;
	int freq;
	
	//aimentando o vetor com numeros aleatorios
	for(i = 0;i < 100;i++)
	{
		vet[i]= rand()%1000+1;
	}
	puts("\nConteudo do vetor: ");
	for (i = 0; i < 100; i++)
	{
		printf("%d|",vet[i]);
	}
	
	puts("\nVetor com beep");
	for(i=0;i<100;i++)
	{
		printf("%d|",vet[i]);
		freq = vet[i]*10;
		Beep(freq,time);
	}
	
}