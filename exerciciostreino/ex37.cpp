/*
Daniel Figueredo
2/04/2026
*/

//importação 
#include <stdio.h>

//prototipção
void verificarNum();

int main()
{
    verificarNum();
    return 0;
}//fim do programa

void verificarNum()
{
  while (1)
  {
    // pedir e ler um numero
    int num = 0;
    printf("\nDigite um numero positivo: ");
    scanf("%d",&num);
    //impor uma condição que se num for = 0 o programa acaba
    if (num ==0 )
    {
        printf("Programa encerrado");
        break;
    }else if (num < 0) //outra condição (se num for menor que 0 pedir outro nume)
    {
        printf("\nDigite um numero valido!!!!!!!!!\n");
        continue;
    }//fim da condição
    
    //imprimir o num até ele negativo, diminuindo  1 em 1, 
    for (int i = num; i >= num * -1; i--)
    {
        printf(" %d ",i);    
    }//fim do loop
       
  }//fim do loop infinito

}//fim da função

