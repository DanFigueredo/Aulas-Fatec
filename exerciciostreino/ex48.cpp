/*
Daniel Figueredo
13/02/2026
Programa
*/

//importação:
#include <stdio.h>

//prototipação:
void somaI(int ,int ,int );

int main()
{
    int anos,meses,dias;
    anos = meses = dias = 0;
    printf("Anos: "); scanf("%d",&anos);
    printf("\nMeses: "); scanf("%d",&meses);
    printf("\Dias: "); scanf("%d",&dias);
    //invoke
    somaI(anos,meses,dias);
}

void somaI(int a,int m,int d)
{
    int somaAnos = a * 365;
    int somaMeses = m * 30;
    int somaTotal = 0;
    somaTotal = somaAnos + somaMeses + d;

    printf("Voce tem: %d dias de vida",somaTotal);
}