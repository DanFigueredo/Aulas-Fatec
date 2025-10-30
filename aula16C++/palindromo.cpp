/*
	Name: Palindromo.cpp
	Author: DanieL Figueredo
	Date: 28/10/25 11:18
	Description: Programa que identifique se uma sequencia é um palindromo
*/
#include <stdio.h>
#include <string.h>

main()
{
	int i, tam, j;
	int flag = 1;
	char frase[30];
	
	printf("Digite: "); gets(frase);
	tam = strlen(frase);
	
	j = tam-1;
	for(i = 0; i <= j; i++)
		if(frase[i] == frase[j]){
				j--;
			}
			else{
				flag = 0;
				break;
			}
		if(flag == 1)
			puts("eh palindrono");
		else
			puts("não eh palindrono");
}//fim do programa