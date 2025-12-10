/*
Daniel Figueredo
09/12/2025 11:21 PM
Programa que verifica se o numero inteiro é par ou impar 
sem usar o modulo
*/
#include <stdio.h>
int main()
{
    int quociente, num, dobro;
    printf("Digite um numero: ");
    scanf("%d",&num);
    quociente = num/2;
    dobro = quociente*2;
    if(dobro == num)
        printf("%d e par",num);
    else
        printf("%d e impar", num);
}//fim do programa