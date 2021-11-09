#include <stdio.h>

float f(float x)
{
    return(x*x*x);
}

float trapezio(float a, float b, int N)
{
    float x[N + 1], h = (b - a)/N, som = 0, I;
    int i, j;

    x[0] = a; x[N] = b;
    for(i = 1; i < N; ++i) x[i] = x[i - 1] + h;
    for(j = 1; j < N; ++j) som = som + f(x[j]);

    I = h*((f(x[0])/2) + som + (f(x[N])/2));
    return(I);
}

void main()
{
    printf("I = %f", trapezio(0, 1, 100));
}
