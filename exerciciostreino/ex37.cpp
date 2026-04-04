/*
Daniel Figueredo
2/04/2026
*/

//importação 
#include <stdio.h>

//prototipção
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
        if (*n == 0)
        {
            printf("Programa encerrado");
            break;
        }else if (*n < 0)
        {
            printf("Digite um numero valido!!!!!");
        }else{
            for (int  i = *n; i >= *n * -1; i--)
            {
                printf(" %d| ",i);
            }
         
        } 
        printf("\nDigite um numero positivo: ");
        scanf("%d",n);
        
    }//fim do while
    
}//fim da função




