#include <stdio.h>
void binary(int );

int main(){
    int num =0;
    printf("Write a decimal number: ");
    scanf("%d",&num);

    binary(num);
   

}

void binary(int num){
    if (num == 0)
    {
        return;
    }
    
    binary(num/2);
    printf("%d",num% 2); 
    
}