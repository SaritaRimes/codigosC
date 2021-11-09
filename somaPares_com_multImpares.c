#include <stdio.h>
#include <math.h>

int exerc1(int num)
{
    int par = 0, imp = 1, imp2 = 0, res = 0, aux = num, som = 0, i;

    i = 0;
    while(aux != 0)
    {
        res = aux % 10;
        if(res % 2 == 0) {par = par + res;}
        else {imp = imp*res; imp2 = imp;}
        aux = aux/10;
        ++i;
    }

    return(par + imp2);
}

void main()
{
    printf("%d\n", exerc1(327));
}
