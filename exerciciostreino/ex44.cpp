//Exercicio 2 - lista 2
/*
Daniel Figueredo
11/04/2026
Programa que por meio de uma função seja capaz de carregar um
vetor com 20 temperaturas positivas e negativas distribuídas de forma aleatória.
Após, em uma outra função que receba este vetor, imprima somente os valores que
estiverem dentro do intervalo-5º a 22º. 
*/

//importação:
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//prototipação:
void carregarVet();
void verificarVet(float *v,int t);

//programa:
int main()
{
    srand(time(NULL));
    carregarVet();
    return 0; 
}//fim do programa

//funções:
void carregarVet()
{
    int i = 0;
    float vetTemps[20];
    int tam = sizeof(vetTemps)/sizeof(float);
    
    
    for ( i = 0; i < tam; i++)
    {
       vetTemps[i]= (rand() % 60) - 20;//-20 até 39
    }

    puts("Todas as temperaturas: ");
    for ( i = 0; i < tam; i++)
    {
        printf("[%.0f C]",vetTemps[i]);
    }

    //invoke da funçaõ que verifica o vetor e imprimi
    verificarVet(vetTemps,tam);
    
}//fim do programa que carrega o vetor

void verificarVet(float *v,int t)
{
    int i = 0;
    puts("\nTeperaturas a partir de -5 ate 22:");
    for ( i = 0; i < t; i++)
    {
        if ( v[i] >= -5 && v[i] <= 22)
        {
            printf("[%.0f C]", v[i]);
        }
        
    }
    
}//fim da função que verifica o vetor


