/*
Daniel Figueredo 
12/12/2025
Programa que le sexo e altura de 50 pessoas e armazena em vetores 
e diz a media da alutra dos homens e a das mulheres e quantas mulheres
 tem mais de 1.70.
*/
#include<stdio.h>

int main(){
    float altura[50];
    float alturaH=0.0;
    float alturaM=0.0;
    float mediaH, mediaM =0.0;
    char sexo[50];
    int i = 0;
    int homens = 0;
    int mulheres = 0;
    int mulheresAcima = 0;

    while (i<5)
    {
        printf("Digite seu sexo (M/F): "); scanf(" %c",&sexo[i]);
        printf("Digite sua altura: "); scanf("%f",&altura[i]);
        if (sexo[i]=='M'|| sexo[i]=='m')
        {
           homens++;
           alturaH = alturaH+altura[i];
        }else if (sexo[i]=='F'||sexo[i]=='f')
        {
            mulheres++;
            alturaM = alturaM+altura[i];
              if (altura[i] > 1.70)
            {
                mulheresAcima++;
            }
        }else{
            printf("Digite com apenas M OU F");
        }
        i++;
    }
    mediaH = alturaH/homens;
    mediaM = alturaM/mulheres;
    printf("Tem %d homens",homens);
    printf("\nTem %d mulheres",mulheres);
    printf("\nA media das alturas dos homens e: %.2f",mediaH);
    printf("\nA media das alturas das mulheres e: %.2f",mediaM);
    printf("\nTem %d mulheres acima de 1.70",mulheresAcima);
    
}//fim do programa

