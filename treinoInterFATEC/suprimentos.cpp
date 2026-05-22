#include <stdio.h>

int main()
{
    int n;
    int t;
    int saldo =0;
    int menor =0;
    scanf("%d", &n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&t);
        saldo += t;
        if (saldo < menor)
        {
            saldo = menor;
        }
        
    }
    printf("%d\n",menor);
}