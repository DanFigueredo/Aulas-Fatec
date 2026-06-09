#include <stdio.h>
#include <math.h>

int main(){
    int n =0;
    scanf("%d",&n);
    if (n >= 1 && n <= 10000)
    {
        int S =0;
        int L =0;
        for (int i = 1; i <= n; i++)
        {
            S += pow(i,3);
            L = sqrt(S);
        }
        
        printf("%d %d",S,L);
    }
    
}