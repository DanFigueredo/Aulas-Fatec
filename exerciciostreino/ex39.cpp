/*
Daniel Figueredo
03/04/2026
Programa que passa para uma função um número inteiro
positivo e dentro desta função seja possível armazenar, em um vetor, a
quantidade de números da Sequência de Fibonacci. Após isso, este
vetor carregado com a sequencia deve ser passado a uma outra função
que fará a impressão de todos os elementos.
*/

//importação
#include <stdio.h>

//prototipação
void fibonacci(int *n);
//programa

int main()
{
    int num = 0;
    //Pedir um numero
    printf("Diigte um numero inteiro e postivo: ");
    scanf("%d",&num);
    fibonacci(&num);

}//fim do programa

//funções
void fibonacci(int *n)
{

    int vet [*n];
    vet[0] = 0;
    int i;
    for (i = 2; i < *n ; i++)
    {
        vet[i] = vet[(*n)-1] + vet[(*n)-2];
    }

    // ---- //

    for ( i = 0; i < *n; i++)
    {
        printf("%d | ",vet[i]);
    }

}//fim da função


