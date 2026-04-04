/*
Daniel Figueredo
04/4/2026
Programa que receba sexo, altura e peso de pessoas e passe para
uma função calcular o IMC desta pessoa. O valor do apurado deve ser
passado para uma outra função que classifique este IMC de acordo
com atabela internacional da OMS que difere os cálculos para homens
e mulheres. Ao final o programa deve exibir:
"Você é HOMEM, seu IMC é: xx.xxx e você está xxxxxx"
"Você é MULHER, seu IMC é: xx.xxx e você está xxxxxx""
*/

//importação
#include <stdio.h>

//prototipação
void calcularIMC(float , float, char);
void mostrarIMC(float , char);

int main()
{
    //variaveis: 
    char sexo;
    float altura = 0.0;
    float peso = 0.0;

    //pedir o sexo do usuario:
    printf("Digite seu sexo (M/F): "); 
    scanf(" %c",&sexo);

    //pedir o peso do usuario: 
    printf("\nDigite seu peso: "); 
    scanf("%f",&peso);

    //pedir altura do usuario:
    printf("\nDigite sua altura: ");
    scanf("%f",&altura);

    //invoke da função:
    calcularIMC(altura, peso, sexo);

    return 0;

}//fim do programa

//funções:

void calcularIMC(float a, float p,char s)
{
    float imc = 0;
    imc = p / (a * a);
    mostrarIMC(imc, s);
    
}//fim da função

void mostrarIMC(float imc, char s)
{
    char *classf;
    //imprimir imc de acordo com a OMS
    if (imc < 18.5)
    {
       classf = "Abaixo do Peso";   
    }else if (imc < 24.9)
    {
        classf = "Peso normal";
    }else if (imc < 29.9)
    {
        classf = "Sobrepeso";
    }else if (imc < 34.9)
    {
        classf = "Obesidade grau 1";
    }else if (imc < 39.9)
    {
        classf = "Obesidade grau 2";
    }else if (imc >= 40.0)
    {
       classf = "Obesidade grau 3 (morbida/grave)";
    }
    
    //Diferenciando as respostas pelo sexo
    if (s == 'm' || s == 'M')
    {
        printf("Voce e homem, seu imc e: %.2f e voce esta: %s ",imc, classf);
    }else if (s == 'f' || s == 'F')
    {
        printf("Voce e mulher, seu imc e: %.2f e voce esta: %s ",imc, classf);
    }
    
}//fim da função 



/*
Tabela de Classificação IMC (OMS) - Adultos

    Abaixo do Peso: IMC menor que 18,5
    Peso Normal (Eutrófico): IMC entre 18,5 e 24,9
    Sobrepeso (Pré-obesidade): IMC entre 25,0 e 29,9
    Obesidade Grau I: IMC entre 30,0 e 34,9
    Obesidade Grau II (Moderada): IMC entre 35,0 e 39,9
    Obesidade Grau III (Grave/Mórbida): IMC maior que 40,0 

*/