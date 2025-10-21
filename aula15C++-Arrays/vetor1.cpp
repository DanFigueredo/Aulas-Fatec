/*
Daniel Figueredo
21/10/2025
Programa para manipular arrays
*/

#include <stdio.h>
int main(){
    int i, vet[10];
    i =0;
    int tam; tam = sizeof(vet)/sizeof(int);//Tamanho do array
    printf("Digite 10 numeros: \n");
    while(i<tam){
        scanf("%d", &vet[i]);
        i++;
    }//fim do while
    for(i=0;i<tam;i++){
    printf("%d | ", vet[i]);
    }//fim do for mostrador do array
    puts("\n Os numeros ao contrario");

    //mostrando o array ao contrario
    for(i=tam;i>=0;i--){
        printf("%d | ", vet[i]);
    }

}//fim do programa