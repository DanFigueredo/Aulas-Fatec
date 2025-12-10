/*
Daniel Figueredo
30/10/2035
Programa que concatena palavras
*/
#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    char lastname[100];
    char city[100];
    char frase[200] = "";
    printf("What is your name? ");
    gets(name);
    printf("Now, what is your last name? ");
    gets(lastname);
    printf("Where your live? ");
    gets(city);
    strcat(frase,"Seu nome completo e: ");
    strcat(frase,name);
    strcat(frase," ");
    strcat(frase,lastname);
    strcat(frase," e voce mora em ");
    strcat(frase,city);
    printf("\n%s", frase);
}//fim do programa