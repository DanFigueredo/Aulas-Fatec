#include <stdio.h>
int power(int a, int b);
int main(){
   int a =0;
   int b =0;
   printf("Write a value: "); scanf("%d",&a);
   printf("Write a value: "); scanf("%d",&b);

   printf("%d",power(a,b));


}

int power(int a, int b){
    if(b == 0){
        return 1;
    }

    return a * power(a, b-1);

}