#include <stdio.h>

float f(float x, float y)
{
    return(1 - x + 4*y);
}

float y(float x)
{
    return((x/4) - (3/16) + (19*exp(4*x))/16);
}
void main()
{
    float x0 = 0, xf = 2, y0 = 1, yn, h = 0.001;

    int n = 1;
    while(x0 <= xf)
    {
        printf("\n      Iteracao %d\n", n);
        yn = y0 + h*f(x0,y0);
        x0 = x0 + h;
        y0 = yn;
        printf("x%d = %f \ny%d = %f \ny(%f) = %f\n", n, x0, n, yn, x0, y(x0));
        ++n;
    }
}
