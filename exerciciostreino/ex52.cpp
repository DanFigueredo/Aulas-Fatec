/*
Daniel Figueredo
31/05/2026
Crie um programa que leia texto.txt e crie um arquivo maiusc.txt
contendo o mesmo texto, mas com todos os caracteres em maiúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  FILE *entrada;
    FILE *saida;
    char c;
    entrada = fopen("texto.txt", "r");
    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo texto.txt.\n");
        return 0;
    }
    saida = fopen("maiusc.txt", "w");
    if (saida == NULL)
    {
        printf("Erro ao criar o arquivo maiusc.txt.\n");
        fclose(entrada);
        return 0;
    }
    while ((c = fgetc(entrada)) != EOF)
    {
        fputc(toupper(c), saida);
    }
    fclose(entrada);
    fclose(saida);
    printf("Arquivo maiusc.txt gerado com sucesso!\n");
    return 0;
}