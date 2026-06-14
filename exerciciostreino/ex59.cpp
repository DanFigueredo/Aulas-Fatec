#include <stdio.h>

int sumN(int n);

int main(){
    int n =0;
    printf("Write a value: ");
    scanf("%d",&n);
    printf("%d",sumN(n));

}

int sumN(int n){
    if(n < 0 ){
        return 0;
    }
    return n + sumN(n - 1);
}