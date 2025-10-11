/*
Daniel Figueredo
11/10/2025
Programa que le 5 numeros e diz se é impar ou par
*/
#include <stdio.h>
int main(){
    //Declarar as variaveis
    int cont = 0, num = 0;
    int soma; soma = 0;
   do{
        printf("\nDigite um numero: "); scanf("%d",&num);
        if (num % 2 ==0)
        {
            soma = num + 2;
            printf("%d e par e a soma e: %d", num, soma);
        }else{
            soma = num/3;
            printf("%d e impar e a divisao e: %d", num, soma);
        }
        cont++;
   }while(cont<5);
   return 0;    
}//Fim do programa
