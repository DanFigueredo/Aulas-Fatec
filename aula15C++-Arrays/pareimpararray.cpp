/*
Daniel Figueredo
21/10/2025
Programa para ver os numeros pares e impares
*/

#include <stdio.h>

int main(){
    int num[8], i, tam;
    i =0;
    tam = sizeof(num)/sizeof(int);
    printf("Digite 8 numeros para serem verificados: \n");
    for(i=0;i<tam;i++){
        scanf("%d", &num[i]);

    }//fim do for
    puts("Todos os numeros:");
    for(i=0;i<tam;i++){ //For para mostrar o array
        printf("%d | ", num[i]);
    }// fim do for que mostra o array

    puts("\nNumeros pares");
     for(i=0;i<tam;i++){ //Mostra os pares
        if(num[i]% 2 == 0){
        printf("%d | ", num[i]);
        }
    }//fim do for dos pares

    puts("\nNumeros impares");
    for ( i = 0; i < tam; i++) //for que mostra os numeros impares
    {
        if (num[i]%2 != 0)
        {   
            printf("%d | ", num[i]);
        }
        
    }
    
}//fim do programa