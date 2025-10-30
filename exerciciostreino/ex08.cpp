/*
Daniel Figueredo
30/10/2035
Programa que diz se as palavras são iguais
*/
#include <stdio.h>
#include <string.h>
int main(){
    char w1[10];
    char w2[10];
    printf("Digite uma palavra: ");
    gets(w1);
    printf("Digite outra palavra: ");
    gets(w2);
    if(strcmp(w1,w2) ==0)//strcmp retorna 0 se as strings forem iguais
     printf("%s e igual a %s", w1,w2);
    else   
        printf("As palavras nao sao iguais");





}//fim do programa