/*
Daniel Figueredo
09/10
Programa para ler 5 numeros inteiros e mostrar o produto
*/
#include <stdio.h>
int main()
{
    int num, soma , produto; soma = produto = 0;
    for(int i=1;i<=5; i++){
        printf("Digite o %d numero inteiro", i);
        scanf("%d", &num);
        soma += num;
        produto *=num;
    }//fim do for
    printf("\n Soma total = %d\n", soma);
    printf("Produto total: %d", produto);



    
}//fim do programa