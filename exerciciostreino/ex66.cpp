#include <stdio.h>

int sumVet(int V[], int n);

int main(){
    int vet[5];
    int n =5;
    for (int i = 0; i < n; i++)
    {
        printf("Write the numbers: ");
        scanf("%d",&vet[i]);
    }

    printf("%d",sumVet(vet,n));
    
}

int sumVet(int V[], int n){
    if(n ==0){
        return 0;
    }

    return V[n-1] + sumVet(V,n-1);
}