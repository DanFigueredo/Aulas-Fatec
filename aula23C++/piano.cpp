/*
	Name: piano.cpp
	Author:Daniel Figueredo 
	Date: 23/03/26 10:18
	Description: Simulação de um teclado sonoro qualquer
*/
//importação
#include <windows.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	while(1)
	{
		int tecla;
		tecla = getch();
		Beep(tecla*25,100);
		//printf("%c - %d",tecla,tecla);
	}
}
