/*
Daniel Figueredo
05/04/2026
Programa que receba a placa de um veículo já no modelo
do Mercosul, em formato string (use o gets) e, por meio de uma função,
analise mostre qual o dia do rodízio deste carro. Uma função
complementar deve pegar o horário da máquina e analisar se o carro
está dentro do horário do rodízio ou não. Lembrando que o rodízio é
das 7h às 10h no período da manhã e das 17h às 20h no período da
noite.
*/

//importação:
#include <stdio.h>
#include <time.h>
#include <string.h>

//prototipação:
void verificarPlaca(char p[]);
void verificarHora();

//programa:
int main()
{
    //Fazer um vetor string para pedir a placa do usuario
    char placa[20];
    printf("Digitem a placa do seu veiculo (7 digitos): ");
    gets(placa);
    int tamanho = strlen(placa);
    if (tamanho != 7)
    {
        printf("Digite uma placa valida");
    }
    
    verificarPlaca(placa);
    return 0;
    

}//fim do programa

//funções:

void verificarPlaca(char p[])
{
    
    int u = p[6] - '0'; //u recebe o digito do ultimo numero da placa
    
    //condições pra ver o dia do rodizio do veiculo
    if (u == 1 || u == 2)
    {
        printf("O rodizio do seu veiculo e na Segunda-Feira");
    }else if (u == 3 || u == 4)
    {
        printf("O rodizio do seu veiculo e na Terca-Feira");
    }else if (u == 5 || u == 6)
    {
        printf("O rodizio do seu veiculo e na Quarta-Feira");
    }else if (u == 7 || u == 8)
    {
        printf("O rodizio do seu veiculo e na Quinta-Feira");
    }else if (u == 9 || u == 0)
    {
        printf("O rodizio do seu veiculo e na Sexta-Feira");
    }
    //chamar a função de verificar hora
    verificarHora();
    
}//fim da função

void verificarHora()
{
    //pegar a hora do sistema atual 
    time_t t;
    struct tm *info;
    time(&t);
    info = localtime(&t);
    int hora = info->tm_hour;
    //condição pra ver se esta em horario de rodizio ou não
    if ((hora >= 7 && hora < 10) || (hora >= 17 && hora < 20))
    {
    printf(" e esta dentro do horario do rodizio\n");
    }
    else
    {
    printf(" e esta fora do horario do rodizio\n");
    }
}//fim da função




