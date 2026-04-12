

/*
Daniel Figueredo
12/04/2026
Programa que
*/

//importação:
#include <stdio.h>

//prototipação:
void carregarTemp();
void mostrarMedia(float *,int );
void maiorEmenor(float *,int );
void verificarAlertas(float *,int );

int main()
{
    carregarTemp();

}//fim do programa

void carregarTemp()
{
    float vet[10];
    int tam = sizeof(vet)/sizeof(float);
    int i = 0;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite as 10 temperaturas %d:  ",i+1);
        scanf("%f", &vet[i]);
    }

    puts("\nMostrar as temperaturas: ");

    for ( i = 0; i < tam; i++)
    {
        printf("[%.2f]", vet[i]);
    }
    //invoke:
    mostrarMedia(vet,tam);
       
}//fim da função

void mostrarMedia(float *V,int tam)
{
    int i = 0;
    int soma = 0;
    float media = 0.0;
    for ( i = 0; i < tam; i++)
    {
        soma = soma + V[i];
    }
    media = (float)soma/tam;
    
    printf("\nA media das temperaturas e: %.2f",media);

    if (media > 75)
    {
        puts("\nStatus: Verifique o Sistema de Resfriamento.");
    }else
        puts("\nStatus: Operacao normal");
    
    //invoke:
    maiorEmenor(V,tam);
}//fim da função

void maiorEmenor(float *V,int tam)
{
    int i = 0;
    float maior = V[0];
    float menor = V[0];

    for ( i = 0; i < tam; i++)
    {
        if (V[i]> maior)
        {
            maior = V[i];
        }
        if (V[i] < menor)
        {
            menor = V[i];
        }
           
    }
    printf("\nA maior temperatura e: %.2f ",maior);
    printf("\nA maior temperatura e: %.2f ",menor);

    //invoke:
    verificarAlertas(V,tam);
    
}//fim da função

void verificarAlertas(float *V,int tam)
{
    int i;
    int alertas =0;

    for ( i = 0; i < tam; i++)
    {
        if (V[i]>80)
        {
            alertas = alertas +1;
        }
        
    }
    printf("\nNessas temperatura ocorreram %d alertas de superaquecimento!",alertas);
    
}
