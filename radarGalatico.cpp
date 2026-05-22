#include <stdio.h>
#include <math.h>

int main()
{
    int n =0;
    scanf("%d",&n);
    int nums =0;
    int vezes =0;
    int menor =0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums);
        if (i==0)
        {
            menor = nums;
        }
        if (nums < menor )
        {
            menor = nums;
            vezes = 1;
            
        }else if(nums == menor){
            vezes++;
        }
         
    }

    printf("%d\n",menor);
    printf("%d\n",vezes);
    
}

