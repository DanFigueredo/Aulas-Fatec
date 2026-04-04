/*
Daniel Figueredo
*/

#include <stdio.h>
void contagemR(int *n);

int main()
{
    int num = 0;
    printf("Digite um numero: "); scanf("%d",&num);
    contagemR(&num);

}

void contagemR (int *n)
{
    
    for (int i = *n; i >=*n * -1; i--)
    {
        printf(" %d ",i);    
    }//fim do loop
}