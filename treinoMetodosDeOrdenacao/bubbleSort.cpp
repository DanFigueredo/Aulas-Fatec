#include <stdio.h>
//prototipação:
void bubbleSort(int *, int );

int main(){
//algoritimo bubble sort
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

    //ordenação bubble sort
    bubbleSort(vet,tam);
    puts("\n\nVetor ordenado pelo bubble sort: \n");

    for(int i = 0; i < tam; i++){
        printf("[%d]", vet[i]);
    }
    
}

void bubbleSort(int *V, int tam){
    int inicio = 0;
    int fim = tam - 1;
    int aux = 0;
    
    while(inicio != fim){
        for (int i = 0; i < fim; i++)
        {
            if (V[i] > V[i + 1])
            {
                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
            }
            
        }
        fim--;
        
    }

}