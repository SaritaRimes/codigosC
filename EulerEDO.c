#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
    return((x/4) - (3./16.) + (19./16.)*exp(4*x));
}

void main()
{
    float x0 = 0, y0 = 1, yn, h = 0.001;

    int n = 1;
    while(x0 < 2)
    {
        yn = y0 + h*f(x0,y0);
        x0 = x0 + h;
        y0 = yn;
        printf("Iteracao %d: \n(x%d, y%d) = (%f, %f)\n", n, n, n, x0, yn);
        ++n;
    }
}
