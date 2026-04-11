//Exercicio 2 - lista 2

/*
Daniel Figueredo
11/04/2026
Programa que são utilizadas funções para carregar duas "strings"
por meio de funções separadas chamadas "cargaStringA" e "cargaStringB". Após as
cargas das strings nos devidos vetores, o programa deverá efetuar por meio de uma
função chamada "merge", uma mistura dos caracteres gerando assim uma nova
string, armazenada em um novo vetor, com os dados encriptados.
*/

//importação:
#include <stdio.h>
#include <string.h>

//prototipação:
void cargaStringA();
void cargaStringB(char *);
void merge(char *Va, char *Vb);


//programa:
int main()
{
    cargaStringA();
    return 0;
}//fim do programa 

//funções:
void cargaStringA()
{
    char stringA[100];
    printf("Digite uma frase: ");
    gets(stringA);
    //invoke
    cargaStringB(stringA);
    
}//fim da função

void cargaStringB(char *stgA)
{
    char stringB[100];
    printf("Digite uma frase ");
    gets(stringB);
    merge(stgA, stringB);

    
}//fim da função

void merge(char *Va, char *Vb)
{
    char stringC[100];
    int k =0;
    int tam = 0;
    if (strlen(Va)> strlen(Vb))
    {
        tam = strlen(Va);
    }else{
        tam = strlen(Vb);
    }
    
    for (int i = 0;i< tam; i++)
    {
        stringC[k] = (i < strlen(Va)) ? Va[i] : ' ';
        stringC[k+1] = (i < strlen(Vb)) ? Vb[i] : ' '; 
        k = k+2;
    }
    stringC[k] = '\0';

    for (int i = 0; i<k; i++)
    {
        printf(" %c",stringC[i]);
    }
    
}//fim da função 

