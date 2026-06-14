#include <stdio.h>

int mult(int , int );

int main(){

    
    printf("%d" ,mult(4,3));


}

int mult(int a, int b){
    if(b == 0 ){
        return 0;
    }

    return a + mult(a,  b - 1);
}
