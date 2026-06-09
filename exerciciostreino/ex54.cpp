#include <stdio.h>

void printer(int num);

int main(){
    int num = 5;
    printer(num);
}

void printer(int num){
    if(num < 0){
        return;
    }

    printf("%d ",num);
    printer(num -1 );
}