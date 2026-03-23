/*
Daniel Figueredo
23/03/2026
Programa que le um numero e o multiplica por 3 atravez de uma função
*/

//bibliotecas
#include <stdio.h>

//prototipação
void triplicar(int);
int num = 0;
int main()
{
    
    printf("Digite um numero: "); scanf("%d",&num);
    triplicar(num);
}//fim do programa

//funções
void triplicar(int num)
{
    num = num*3;
    printf("%d",num);
}
