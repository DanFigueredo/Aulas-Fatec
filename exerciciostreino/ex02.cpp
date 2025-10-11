/*
Daniel Figueredo
11/10/2025
Programa que pede 6 numeros inteiros e exeibe a soma 
*/
#include <stdio.h>
int main(){
    //Declarar as variaveis
    int num, soma; num = soma = 0;
    int cont; cont = 0;
    float media; media = 0.0;
    do{
        printf("digite um numero:"); scanf("%d", &num);
        soma = soma+num;
        cont++;
    }
    while(cont<6);
    media = (float)soma/cont;
    printf("A media e: %.2f", media);


}