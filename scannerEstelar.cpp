#include <stdio.h>
#include <math.h>

int main(){
    int n, num =0;
    int vezes =0;
    int menor =0;
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&num);
        if (i ==0)
        {
            vezes = num;
            menor = num;

        }
        if (num < menor)
        {
            menor = num;
            vezes = 0;
        }
        
        if (num == vezes)
        {
            vezes = num;
        }

        if (vezes == menor)
        {
            menor = vezes;
        }
        
         
    }
    printf("%d\n",vezes);

    
}