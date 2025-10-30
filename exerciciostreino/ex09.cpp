/*
Daniel Figueredo
30/10/2035
Programa que diz se as palavras são iguais
*/
#include <stdio.h>
#include <string.h>
int main(){
    char palavra1[30];
    char palavra2[30];
    printf("Digite seu primeiro nome: ");
    gets(palavra1);
    printf("Digite seu segundo nome: ");
    gets(palavra2);

    printf(strcat(palavra1,palavra2));


}//fim do programa