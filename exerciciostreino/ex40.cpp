/*
1) Escreva um programa que receba um número inteiro, passe para uma
função e que faça a seguinte verificação:
a. Se onúmero é positivo, senão exibe uma mensagem solicitando
umnovo número ao usuário e fica em loop.
b. Onúmero sendo válido, exibir uma contagem regressiva com o
seu equivalente negativo, ou seja, caso seja digitado o valor 3,
exibir: 3, 2, 1, 0,-1,-2,-3.
c. Oprograma deve finalizar quando o usuário der entrada com o
número 0 (zero)
*/

#include <stdio.h>
void verificarNum(int n);

int main()
{
    int num =0;
    printf("Difite um numero inteiro e postivio: ");
    scanf("%d",&num);
    verificarNum(num);


}//fim da função

void verificarNum(int n)
{
    while (1)
    {
        int i =  n;
       if (n == 0)
       {
            puts("Programa encerrado!!!");
            break;
       }else if (n < 0)
       {
            puts("Digite um numero valido!!!!!");
       }else{
        for (i = n; i >= (n) * -1; i--)
        {
           printf("%d | ", i);
        }
        printf("Digite um numero inteiro e postivio: ");
        scanf("%d",&n);
        
       }
       

       
    }
    
}//fim da função


