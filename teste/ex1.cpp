#include <stdio.h>

//prototipação:
void verificaIMC(char , float , float );
void imprimirRes(float , int , int );


int main()
{
   char sexo;
   float peso = 0.0;
   float altura = 0.0;
   printf("Digite o seu sexo (M/F): ");
   scanf(" %c",&sexo);
   printf("Digite seu peso: ");
   scanf("%f",&peso);
   printf("Digite sua altura: ");
   scanf("%f",&altura);
   verificaIMC(sexo,peso,altura);
}

void verificaIMC(char s, float p, float a)
{
    int homem = 0;
    int mulher = 0;
    float imc = 0.0;
    if (s == 'M' || s == 'm')
    {
        homem = 1;
    }else if (s == 'F' || s == 'f')
    {
        mulher = 1;
    }
    imc = p/(a * a);
    imprimirRes(imc,homem,mulher);
}

void imprimirRes(float imc, int h, int m)
{
    char *classf;
    if (imc < 18.5)
    {
      classf = "Abaixo do peso";
    }else if (imc < 25)
    {
        classf = "Peso medio";
    }else if(imc < 29)
    {
        classf = "Obesidade 1";
    }else if (imc < 35)
    {
        classf = "Obesidade 2";
    }else if (imc < 39)
    {
        classf = "Obesidade 3";
    }else
        classf = "SUPER BIG";      
    
    if (h == 1)
    {
        printf("Voce e HOMEM, seu IMC E: %.2f e voce esta: %s ", imc, classf);
    }else if (m == 1)
    {
        printf("Voce e MULHER, seu IMC E: %.2f e voce esta: %s ", imc, classf);
    }
    
    
}

/*
Abaixo do peso. <18,50.
Baixo. Eutrófico.
18,50 – 24,99. Médio.
Sobrepeso. 25,00 – 29,99.
Pouco Elevado. Obesidade grau I.
30,00 – 34,99. Elevado.
Obesidade grau II. 35,00 – 39,99.
Muito elevado. Obesidade grau III.
*/



