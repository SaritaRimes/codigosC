#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
    return(-0.07*(y - 20));
}

float T(float t)
{
    return(20 + (100 - 20)*exp(-0.07*t));
}

void euler(float t0, float T0, float tn, float h)
{
    float Tn;
    int n = (tn - t0)/h;

    while(t0 < tn)
    {
        Tn = T0 + h*f(t0, T0);
        t0 = t0 + h;
        T0 = Tn;
    }

    printf("Apos %d passos: (tn, Tn) = (%f, %f)\n", n, t0, Tn);
}

void main()
{
    euler(0, 100, 100, 2);
    euler(0, 100, 100, 5);
    euler(0, 100, 100, 10);

    /*solucao analitica*/
    printf("\nA solucao analitica eh T(100) = %f\n", T(100));
}
