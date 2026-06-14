#include <stdio.h>
int soma(int );
int fatorial(int num);

int main(){
    int num =0;
    printf("Write a number: ");
    scanf("%d",&num);

    printf("%d\n",soma(num));
    printf("%d",fatorial(num));
    
}

int soma(int num){
    if(num ==0){
        return 0;
        
    }

    return num + soma(num-1);

}

int fatorial(int num){
    if(num == 0){
        return 1;
    }

    return num * fatorial(num -1);

}