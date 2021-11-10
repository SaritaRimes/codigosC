#include <stdio.h>
#include <math.h>

float f(float x, float y) //derivada de y com relacao a x
{
    return(x*sqrt(y));
}

void main()
{
    float t0, y0, tn, yn, dt, dy_1, dy_2, dy_3, dy_4, n;
    int i;
    dt = 0.1;
    t0 = 0;
    y0 = 1;
    tn = 10;

    printf("(t0, y0) = (%f, %f)\n", t0, y0);
    i = 1;
    while(t0 < tn)
    {
        dy_1 = dt*f(t0, y0);
        dy_2 = dt*f(t0 + dt/2, y0 + (dt*dy_1)/2);
        dy_3 = dt*f(t0 + dt/2, y0 + (dt*dy_2)/2);
        dy_4 = dt*f(t0 + dt, y0 + dt*dy_3);
        yn = y0 + (dy_1 + 2*dy_2 + 2*dy_3 + dy_4)/6;
        t0 = t0 + dt;
        if((int)((t0 - (int)t0)*100) == 0) printf("(t%d, y%d) = (%f, %f)\n", i, i, t0, yn);
        y0 = yn;
        ++i;
    }
}
