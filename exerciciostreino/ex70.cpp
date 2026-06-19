#include <stdio.h>
void lerTexto(char arquivo);
int main(){
    FILE *arquivo = fopen("arquivo.txt","r");
    if (arquivo == NULL)
    {
        puts("Erro ao abrir o arquivo");
        return 0;
    }

    lerTexto(arquivo);


    
}

void lerTexto(char arquivo){
    int n = 0;
    if (arquivo == 'a' || arquivo == 'e' || arquivo == 'i')
    {
        n += 1;
    }else if (arquivo == 'o' || arquivo == 'u')
    {
        n += 1;
    }

    printf("O arquivo tem: %d vogais", n);
    
    
}