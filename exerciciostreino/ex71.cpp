#include <stdio.h>
void escreveFrase(char []);
int main(){
    char frase[100];
    printf("Digite a frase: ");
    scanf("%s",&frase);
    escreveFrase(frase);
}

void escreveFrase(char frase[]){
    FILE *arquivo = fopen("arquivo.txt","w");
    if (arquivo == NULL)
    {
        puts("Erro ao abrir o arquivo");
        return;
    }

    fprintf(arquivo,"%s",frase);
    puts("Frase escrita com sucesso!");
    fclose(arquivo);
}