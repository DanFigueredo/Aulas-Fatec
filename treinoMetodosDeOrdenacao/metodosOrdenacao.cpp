#include <stdio.h>

void bubbleSort(int *, int);
void selectionSort(int *, int );
void insertionSort(int *, int );

int main (){
    int i = 0;
    int vet [5];
    int tam = sizeof(vet)/sizeof(int);

    for ( i = 0; i < tam; i++)
    {
       printf("Digite o %d elemento: ",i+ 1);
       scanf("%d", &vet[i]);
    }
    
    puts("\=====Vetor Original=========\n");

    for ( i = 0; i < tam; i++)
    {
        printf("[%d]", vet[i]);

    }

    puts("\n\n====Vetor ordenado pelo insertion sort=====\n");
    insertionSort(vet, tam);
    for ( i = 0; i < tam; i++)
    {
        printf("[%d]", vet[i]);
    }

    puts("\n\n====Vetor ordenado pelo bubble sort=====\n");
    bubbleSort(vet, tam);
    for ( i = 0; i < tam; i++)
    {
        printf("[%d]", vet[i]);
    }

    puts("\n\n====Vetor ordenado pelo selection sort=====\n");
    selectionSort(vet, tam);
    for (i = 0; i < tam; i++)
    {
        printf("[%d]", vet[i]);

    }
    
}

 void bubbleSort(int *V, int tam){

    int aux;
    int inicio = 0;
    int fim = tam -1;

    for (int i = 0; i < tam - 1; i++)
    {
        if (V[i] > V[i+1])
        {
           aux = V[i];
           V[i] = V[i+1];
           V[i + 1] = aux;
        }
        fim--;
        
    }
    
   

}

void selectionSort(int *V, int tam){
    int chave;
    int aux = 0;
    int i, j;
    int menor = 0;

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

        if(V[menor] < V[chave])
        {
            aux = V[chave];
            V[chave] = V[menor];
            V[menor] = aux;
        }
        
        
    }
    
}

void insertionSort(int *V, int tam){

    int i, chave, j;
    for ( i = 1; i < tam; i++)
    {
        chave = V[i];
        j = i - 1;
        while(j >= 0 && chave < V[j]){
            
           V[j+1] = V[j];
            j--;
        }

        V[j+ 1 ] = chave;
    }
    
    
}
