/*
Daniel Figueredo
1/12/2025
Programa que Le
        a altura e o peso de N pessoas 
        (valor informado pelo usuário), 
        calcule o IMC de cada uma e armazene em um vetor.
*/
#include <stdio.h>
int main()
{
  int n;
  float alt, peso = 0;
  float imc = 0;
  int i = 0;
  float maior, menor, media, soma = 0;
  printf("Digite o numero de pessoas: "); scanf("%d", &n);
  float vet[10];
  for( i=0; i < n; i++)
  {
    printf("Pessoa %d ", i + 1);
    printf("Digite sua altura: "); scanf("%f", &alt);
    printf("Digite seu peso: "); scanf("%f", &peso);
    imc = peso/(alt*alt);
    vet[i]=imc;
    soma = soma + vet[i];
    media = soma / n;
    menor = vet[0];
    maior = vet[0];
     if(vet[i] > maior)
    {
        maior = vet[i];
    }else if(vet[i] < menor)
    {
        menor = vet[i];
    }

  }//fim do for 

  for ( i = 0; i < n; i++)
  {
    if(vet[i] < 18.5 )
    {
        printf("\nPessoa %d tem como %.2f de imc e esta abaixo do peso", i+1,vet[i]);
    }else if(vet[i] < 25)
    {
       printf("\nPessoa %d tem como %.2f de imc e esta no peso normal", i+1,vet[i]); 
    }else 
    {
        printf("\nPessoa %d tem como %.2f de imc e esta acima do peso", i+1,vet[i]);
    }
    
    
  }
  printf("\nA media dos IMCs e: %.2f ", media);
  printf("\nO maior imc e: %.2f", maior);
  printf("\nO menor imc e: %.2f", menor);

  
}//fim do programa