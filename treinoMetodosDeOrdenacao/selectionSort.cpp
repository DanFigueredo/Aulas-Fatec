#include <stdio.h>
//prototipação:
void selectionSort(int *, int );

int main(){
//algoritimo selection sort
//pedir pra carregar o vetor
    int vet[10];
    int tam = sizeof(vet)/sizeof(int);

    for(int i = 0; i < tam; i++){
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    
    //imprimir vetor orginal
    puts("\nVetor orginal:\n");
    for(int i = 0; i < tam; i++){
        printf("[%d]", vet[i]);
    }

    //ordenação selection sort
    selectionSort(vet,tam);
    puts("\n\nVetor ordenado pelo selection sort: \n");

    for(int i = 0; i < tam; i++){
        printf("[%d]", vet[i]);
    }
}

void selectionSort(int *V, int tam){
  
    int chave;
    int i , j , aux, menor;
    for ( i = 0; i < tam - 1; i++)
    {
        chave = i;
        menor = i + 1;
        for ( j = i + 1; j < tam; j++)
        {
            if (V[j] < V[menor])
            {
                menor = j;
            }         
        }
        if (V[menor] < V[chave])
        {
            aux = V[chave];
            V[chave] = V[menor];
            V[menor] = aux;
        }
        
    }
    
    
}
