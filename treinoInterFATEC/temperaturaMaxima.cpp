#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temps[n];
    int maior;
    int indiceM = 0;
    maior = 0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temps[i]);
        if (temps[i] > maior)
        {

            maior = temps[i];
            indiceM = i;
        }
        
    }
    
    printf("%d", maior);
    printf("%d", indiceM);

}