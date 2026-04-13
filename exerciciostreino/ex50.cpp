/*
Daniel Figueredo
13/04/2026
Programa que pede X,Y,X e por meio de uma função verifica se os comprimentos podem formar um triangulo (cada lado for menor que a soma dos outros 2) e verifica se ele é 
equilatero(3 lados iguais)
isoceles ( 2 lados iguais)
escaleno ( 3 lados diferentes)

*/
//importação:
#include <stdio.h>

//prototipação:
void verificarT(float , float , float );


int main()
{
    float x,y,z;
    x = y = z =0.0;
    printf("Digite o valor de X: ");scanf("%f",&x);
    printf("\nDigite o valor de Y: ");scanf("%f",&y);
    printf("\nDigite o valor de Z: ");scanf("%f",&z);
    verificarT(x,y,z);
}

void verificarT(float x, float y, float z)
{
    if (x < z + y && y < z + x && z < x + y)
    {
        if (x == y && y == z)
        {
            printf("Triangulo equilatero");
        }else if (x == y || y == z || x == z)
        {
            printf("Triangulo isoceles");
        }else
            printf("Triangulo escaleno");
          
    }else
        printf("Nao da pra formar um triangulo");
    
}