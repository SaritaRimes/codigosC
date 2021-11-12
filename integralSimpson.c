#include <stdio.h>
#include <math.h>

float f(float x)
{
    //return(pow(x, 3.0));
    return(1/x);
}

void main()
{
    float a, b;
    int n, i, j;

    printf("Digite o limite inferior, a: ");
    scanf("%f", &a);
    printf("Digite o limite superior, b: ");
    scanf("%f", &b);
    printf("Digite o numero de aproximacoes feitas no intervalo, n: ");
    scanf("%d", &n);

    float x[n + 1], som1, som2, h, I;

    x[0] = a; h = (b - a)/n;
    for(i = 1; i < n + 1; ++i) x[i] = x[i - 1] + h;

    som1 = som2 = 0;
    for(j = 1; j <= n/2; ++j) som1 = som1 + f(x[2*j - 1]);
    for(j = 1; j <= (n/2 - 1); ++j) som2 = som2 + f(x[2*j]);

    I = (h/3)*(f(x[0]) + 4*som1 + 2*som2 + f(x[n]));

    printf("Sua integral eh I = %f\n", I);
}
