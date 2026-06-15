//Exercicio prova

#include <stdio.h>

int calcularPotencia(int , int );
int main(){
    int a =0;
    int b = 0;
    printf("Digite a base: ");
    scanf("%d",&a);
    printf("Digite o expoente: ");
    scanf("%d",&b);

    printf("%d",calcularPotencia(a,b));
}

int calcularPotencia(int a, int b){
    if(b == 0){
        return 1;
    }

    return a * calcularPotencia(a,b-1);
}