#include <stdio.h>

int main()
{
    int n;
    float t;
    float u;
    int p;

    scanf("%d",&n);
    
    for (int  i = 0; i < n; i++)
    {
        
        scanf("%f",&t);
        scanf("%f",&u);
        scanf("%d",&p);

        if (p == 1 )
        {
            puts("NAO REGAR");
        }else if (t > 30 && u < 50)
        {   
            puts("REGAR");
        }else{
            puts("NAO REGAR");
        }
    }
    
}//fim do programa