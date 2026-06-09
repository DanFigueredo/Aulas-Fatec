#include <stdio.h>

void printer(int );

int main(){
    int num =0;
    printf("Write a number: ");
    scanf("%d", &num);
    printer(num);

}

void printer(int num){
    if(num < 0 ){
        return;
    }

    if (num % 2 == 0)
    {
        printf("%d ", num);
        
    }
    printer(num - 1);
    
}