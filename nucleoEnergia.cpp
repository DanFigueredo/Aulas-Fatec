#include <stdio.h>
#include <math.h>

int main()
{
    int n =0;
    scanf("%d",&n);
    int energia =0;
    int consecutivo =0;
    int maior =0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&energia);
        consecutivo += energia;
        if (consecutivo > maior)
        {
            maior = consecutivo;
        }
        
        if (consecutivo < 0)
        {
            consecutivo =0;
            
        }
        
    }
    printf("%d\n",maior);

    
}