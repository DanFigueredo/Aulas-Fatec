/*
Daniel Figueredo
2/04/2026
Programa que recebe um número inteiro, passe para uma
função e que faça a seguinte verificação:
a. Se o número é positivo, senão exibe uma mensagem solicitando
um novo número ao usuário e fica em loop.
b. O número sendo válido, exibir uma contagem regressiva com o
seu equivalente negativo, ou seja, caso seja digitado o valor 3,
exibir: 3, 2, 1, 0, -1, -2, -3.
c. O programa deve finalizar quando o usuário der entrada com o
número 0 (zero)
*/

//importação:
#include <stdio.h>

//prototipção:
void verificarNum(int *n);

int main()
{
    int num = 0;
    // pedir e ler um numero
    printf("\nDigite um numero positivo: ");
    scanf("%d",&num);
    verificarNum(&num);
    return 0;
}//fim do programa

//função 

void verificarNum(int *n){
    while (1)
    {
        //condição para que se o numero for = a 0 o programa encerre
        if (*n == 0)
        {
            printf("Programa encerrado");
            break;
        }else if (*n < 0)//se o numero for menor que 0 o programa solicita outro numero
        {
            printf("Digite um numero valido!!!!!");
        }else{
            for (int  i = *n; i >= *n * -1; i--)//laço para imprimir o numero até o seu equivalente negativo
            {
                printf(" %d| ",i);
            }
         
        } 
        printf("\nDigite um numero positivo: ");
        scanf("%d",n);
        
    }//fim do while
    
}//fim da função




