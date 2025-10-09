
/*
08/10/2025
Daniel Figueredo
Programa que calcula 6 numeros inteiros e exibe a media aritimetica
*/
#include <stdio.h>
int main()
{
    //Declarar variaveis 
    int cont, num; cont = 0;
    float media, soma; media =  0.0;
    //Ler 6 numeros inteiros
    do 
    {
        printf("Digite um numero:"); scanf("%d", &num);
        soma += num;
        cont++;
    }while(cont < 6);
    media = soma/cont;
    printf("A media e: %.2f", media);
}//Fim do programa