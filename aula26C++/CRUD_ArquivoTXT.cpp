/*
Daniel Figueredo 
18/05/2026
Programa que manipula arquivo txt
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arquivo = fopen("teste.txt", "w");
    if (arquivo == NULL)
    {
        puts("Erro ao abrir arquivo");
    }
    fprintf(arquivo, "Testando a manipulação");
    fclose(arquivo);
    
}//fim do programa 