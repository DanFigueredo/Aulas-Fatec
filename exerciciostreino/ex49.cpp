/*
Daniel Figueredo
13/04/2026
Programa que pede o sexo e altura do usuario e 
por meio de uma função verifica se esta no peso ideal(homens72.7 x alt-58)
(mulheres 62.1 x alt - 44.7).

*/

//importação:
#include <stdio.h>

//prototipação:
void pesoIdeal(char , float );

int main()
{
    char sexo;
    float alt = 0.0;
    printf("Digite seu sexo: ");
    scanf(" %c",&sexo);
    printf("\nDigite sua altura: ");
    scanf("%f",&alt);
    pesoIdeal(sexo,alt);

}//fim do programa

void pesoIdeal(char s, float a)
{
    float pesoI =0.0;
    if (s == 'm' || s == 'M')
    {
        pesoI = 72.7 * a-58;
        printf("Voce e homem e o seu peso ideal e: %.2f",pesoI);
    }else if (s == 'f' || s == 'F')
    {
        pesoI = 62.1 * a - 44.7;
        printf("Voce e mulher e o seu peso ideal e: %.2f",pesoI);
    }else
        printf("Digite um sexo valido!!");
    
    
}//fim da função