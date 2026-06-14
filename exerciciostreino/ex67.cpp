#include <stdio.h>

int produtoDigitos(int n);

int  main(){
    int num =0;
    printf("Write a number: ");
    scanf("%d",&num);
    printf("%d",produtoDigitos(num));

}

int produtoDigitos(int n){
    if(n == 0){
        return 1;
    }

    return n % 10 * produtoDigitos(n / 10);
}