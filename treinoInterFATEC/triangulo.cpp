#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, angulo;
    int pi = 3.14159265358979323846;
    while(1)
    {
        scanf("%f,%f,%f",&a, &b, &angulo);
        if (a,b,angulo == 0)
        {
            break;
        }else
        {
            float radianos = angulo * pi/180;
            float area = (a * b * sin(radianos))/2;
            printf("%.4f",area);
        }
        
    }
}
