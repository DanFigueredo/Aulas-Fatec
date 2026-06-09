#include <stdio.h>

void printer(int num);

int main(){

    int num = 0;
    printf("Digite um numero? ");
    scanf("%d",&num);
    printer(num);
}

void printer(int num){
    if(num <= 0){
        return;
    }
    printer(num - 1 );
    printf("%d",num);
    
}