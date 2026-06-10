#include <stdio.h>
int printer(int );
int main(){

    int num =0;
    printf("Write a number: ");
    scanf("%d",&num);
    printf("%d", printer(num));

}

int printer(int num){
    if(num == 0 ){
        return 1;
    }
    
    return num * printer(num -1);
     
    
}

