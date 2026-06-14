#include <stdio.h>

int potencia(int , int );

int main(){
    printf("%d",potencia(2,5));

}

int potencia(int a, int b){
    if (b == 0)
    {
        return 1;
    }

    return a * potencia(a, b - 1);
    
}