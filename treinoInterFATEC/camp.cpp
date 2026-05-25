#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    
    char fatecSede[25];
    int V =0;
    int VeS =0;
    int NT =0;
    printf("Digite o numero de times: ");
    scanf("%d",&NT);
    char nomeTime[20][100];
    char nomeFatec[100];
    int i =0;
    int problemasResolvidos[1000];
    int tempoTotal[1000];
  
    printf("Digite o nome da sede: ");
    gets(nomeFatec);
    //fgets(nomeFatec, 100, stdin);
    //scanf("%d",&V);
    //scanf("%d",&VeS);
    
    
    for (i = 0; i < NT; i++)
    {
        printf("Nome do time: ");
        fgets(nomeTime[i], sizeof(nomeTime[i]), stdin);
        nomeTime[i][strcspn(nomeTime[i], "\n")] = '\0';
        

        printf("Problemas resolvidos: ");
        scanf("%d", &problemasResolvidos[i]);
        

        printf("Tempo Total: ");
        scanf("%d", &tempoTotal[i]);
    
    }

    printf("Classificados para a Final");
    for ( i = 0; i < NT; i++)
    {
        printf("\nTime %d - %s (%d,%d)",i+1,nomeTime[i], problemasResolvidos[i], tempoTotal[i]);
    }
    
}