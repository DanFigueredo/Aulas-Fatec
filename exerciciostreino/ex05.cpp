/*
Daniel Figueredo
11/10/2025
Programa que 
*/

#include<stdio.h>
int main(){
    int num = 0;
    int numcerto = 50;
    while(num!= numcerto){
        printf("Digite um numero\n"); scanf("%d", &num);
        if(num == numcerto){
            puts("Voce acertou!!!");
        }else if(num < numcerto-15)
            puts("Esta frio!!!");
               else if(num > numcerto+10)
                    puts("Muito longe!!");
                    else
                        puts("Esta quente");
    }//fim do while
    puts("Fim do jogo");
    return 0;
}//Fim do programa