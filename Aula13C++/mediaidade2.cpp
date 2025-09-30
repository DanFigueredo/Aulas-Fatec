/*
	Name: mediaidade.cpp 
	Author: Daniel Figueredo
	Date: 30/09/25 12:12
	Description: Programa 
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	//Variaveis
	int id1, id2, id3, id4, id5;
	float media; media = 0.0;
	int maior, menor;
	id1 = id2 = id3 = id4 = id5 =0;
	printf("Digite a primeira idade:"); scanf("%d", &id1);
	printf("Digite a segunda idade:"); scanf("%d", &id2);
	printf("Digite a terceira idade:"); scanf("%d", &id3);
	printf("Digite a quarta idade:"); scanf("%d", &id4);
	printf("Digite a quinta idade:"); scanf("%d", &id5);
	maior = menor = id1;
    //Verifica o maior numero
	if(id2> maior)
		maior = id2;
	if(id3> maior)
		maior = id3;
	if(id4> maior)
	    maior = id4;
	if(id5> maior)
		maior = id5;
    //Verifica o menor numero
    if(id2 < menor)
		menor = id2;
	if(id3 < menor)
		menor = id3;
	if(id4 < menor)
		menor = id4;
	if(id5 < menor)
		menor = id5;
  
    
		
	printf("A maior idade: %d\n", maior);
    printf("A menor idade: %d\n", menor);
 	media = id1+id2+id3+id4+id5/5;
 	printf("A media e: %.2f", media);
    exit(0); //Sai do terminal
	
}