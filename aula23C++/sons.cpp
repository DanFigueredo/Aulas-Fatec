/*
	Name: sons.cpp 
	Author: Daniel Figueredo
	Date: 23/03/26 10:01
	Description: Programa para demnstrar a utilização da biblioteca 
				que emite sons
*/

//importação
#include<windows.h>
#include<stdio.h>

int main()
{
	int freq,tempo;
	freq=900;
	tempo=250;
	int i =0;
		for(i=0;i<20;i++)
		{
			Beep(freq,tempo);
			freq = freq-50;
		}
		
		for(i=20;i>=0;i--)
		{
			Beep(freq,tempo);
			freq = freq+50;
			
		}
		
}//fim do programa

