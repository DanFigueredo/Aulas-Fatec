/*
Daniel Figueredo
11/10/2025
Programa que le 5 numeros e diz se é impar ou par
*/
#include <stdio.h>
int main(){
    //Declarar as variaveis
    int cont = 0, num = 0;
    int result; result = 0;
   do{
        printf("\nDigite um numero: "); scanf("%d",&num);
        if (num % 2 ==0)
        {
            result = num + 2;
            printf("%d e par e a soma e: %d", num, result);
        }else{
            result = num/3;
            printf("%d e impar e a divisao e: %.2 f", num, (float)result);
        }
        cont++;
   }while(cont<5);
   return 0;    
}//Fim do programa
