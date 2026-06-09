#include <stdio.h>

int somaNumeros(int );
int main(){
    int N= 0;
    printf("Digite o valor de n: ");
    scanf("%d",&N);
    printf("%d", somaNumeros(N));


}

int somaNumeros(int N){
    if(N  == 0){
        return 0;
    }

    return N + somaNumeros(N -1 );
}