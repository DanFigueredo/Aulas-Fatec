/*
Daniel Figueredo
10/12/2025
Programa que le 10 numeros inteiros e armazena em um vetor e
            Mostre o vetor na ordem normal e inversa e a media dos valores
*/
#include <stdio.h>
int main(){
    int vet[10];
    int i =0;
    int soma = 0; float media =0.0;
    //Carregar o vetor
    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero: "); scanf("%d",&vet[i]);
        

    }

    //Mostrar o vetor
    for ( i = 0; i < 10; i++)
    {
        printf("%d | ", vet[i]);
    }

    //Mostrar o vetor ao contrario 
    puts("\n-------->Vetor ao contrario<-------");
    for ( i = 9; i >= 0 ; i--)
    {
        printf("%d | ", vet[i]);
    }

    //Calcular a media
    for ( i = 0; i < 10; i++)
    {
       soma = soma + vet[i];
       
    }
    media = soma/10;
    printf("\nA media e : %.2f", media);
    
    
    
}//fim do programa

