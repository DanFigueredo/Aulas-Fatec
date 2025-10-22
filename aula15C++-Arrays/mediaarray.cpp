/*
Daniel Figueredo
21/10/2025
Programa que pede 4 notas e calcula a media aritimetica 
*/

#include <stdio.h>
int main(){
    float notas[4], soma, media; soma = media = 0.0;
    int i = 0; int tam;
    tam = sizeof(notas)/sizeof(float);

    printf("Digite 4 notas: \n");
    while(i < tam){
        scanf("%f", &notas[i]);
        i++;
    }//fim do while
    for(i=0;i<tam;i++){
        printf("%.2f | ",notas[i]);
    }//fim do for que mostra o array
    //mostrando a media
    for ( i = 0; i < tam; i++)
    {
        soma = soma+ notas[i];
    }
    media = soma/tam;
    printf("\nA media e: %.2f\n", media);
    if(media >= 6 ){
        printf("Aprovado");
    }else if(media > 4){
        printf("Recuperação");
    }else{
        printf("Reprovado");
    }
    
   
}//fim do programa