//exercicio 2 prova

#include <stdio.h>

int fibo(int );

int main(){
    int n = 0;
    printf("Digite o valor: ");
    scanf("%d",&n);
    printf("A sequencia de fibonacci desse numero tem: %d elementos",fibo(n));
}

int fibo(int n){
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibo(n-1) + fibo(n -2);
    
    
}