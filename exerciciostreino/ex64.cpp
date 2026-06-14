#include <stdio.h>

int sumValue(int );

int main(){
    
    int n =0;
    printf("Write a number: ");
    scanf("%d",&n);
    printf("%d",sumValue(n));
}

int sumValue(int n){
    if(n == 0){
        return 0;
    }
    
    return n % 10+ sumValue(n / 10);
    
    
}