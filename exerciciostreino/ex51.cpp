/*
Daniel Figueredo
13/04/2026
Programa que le uma string e passa para uma função 
que imprimi a string ao contrario e subtrai
 as letras a,j,p,v.
*/

//importação:
#include <stdio.h>
#include <string.h>

//prototipação:
void imprimirString(char *);

int main()
{
    char string[100];
    printf("Digite a string: ");
    gets(string);
    imprimirString(string);

}//fim do programa

void imprimirString(char *V)
{
    int i;
    for ( i = strlen(V) -1 ; i >= 0 ; i--)
    {
        if (V[i] == 'a' || V[i] == 'j')
        {
            printf(" ");
        }else if (V[i] == 'p' || V[i] == 'v')
        {
            printf(" ");
        }else
            printf(" %c",V[i]);
      
    }
    
}