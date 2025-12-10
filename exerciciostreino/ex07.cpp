/*
Daniel Figueredo
30/10/2035
Programa para calcular a quantidade de letras de um array
*/
#include <stdio.h>
#include <string.h>
int main(){
    int tam = 0;
    char word[30];
    printf("Digite uma palavra: \n");
    gets(word);
    tam = strlen(word);
    printf("A palavra %s tem %d caracteres", word, tam);
}//fim do programa