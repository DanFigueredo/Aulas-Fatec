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

void verificarNum(int *n)
{
  while (1)
  {
   
    //impor uma condição que se num for = 0 o programa acaba
    if (*n == 0 )
    {
        
        printf("Programa encerrado");
        break;
    }else if (*n < 0) //outra condição (se num for menor que 0 pedir outro numero)
    {
        puts("\nDigite um numero invalido!!!!!!!!!\n");
    
    }//fim da condição
    else{
          //imprimir o num até ele negativo, diminuindo  1 em 1, 
        for (int i = *n; i >=*n * -1; i--)
        {
            printf(" %d ",i);    
        }//fim do loop
    }
     printf("\nDigite um numero positivo: ");
     scanf("%d", n);
       
  }//fim do loop infinito

}//fim da função

