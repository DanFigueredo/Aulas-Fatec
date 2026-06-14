#include <stdio.h>
int MDC(int , int );
int main(){

    printf("%d", MDC(48,18));
}

int MDC(int a, int b){
    if (b == 0 )
    {
        return a;
    }

    if (a % b == 0)
    {
        return b;
    }else
        return MDC(b, a % b);

    
}