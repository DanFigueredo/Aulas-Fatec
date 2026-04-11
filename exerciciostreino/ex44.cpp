/*
Faça um código em C em que por meio de uma função seja capaz de carregar um
vetor com 20 temperaturas positivas e negativas distribuídas de forma aleatória.
Após, em uma outra função que receba este vetor, imprima somente os valores que
estiverem dentro do intervalo-5º a 22º, inclusive
*/

/*
Daniel Figueredo
11/04/2026
Programa que 
*/

//importação:
#include <stdio.h>

//prototipação:
void carregarVet();
void verificarVet(float *v,int t);

//programa:
int main()
{
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
       printf("Digite uma temperatura em graus celcius: ");
       scanf("%f", &vetTemps[i]);
    }

    //invoke da funçaõ que verifica o vetor e imprimi
    verificarVet(vetTemps,tam);
    
}//fim do programa que carrega o vetor

void verificarVet(float *v,int t)
{
    int i = 0;
    for ( i = 0; i < t; i++)
    {
        if ( v[i] >= -5 && v[i] <= 22)
        {
            printf("[%.2f]", v[i]);
        }
        
    }
    
}//fim da função que verifica o vetor


