#include <stdio.h>
#include <stdlib.h>

int exerc1(int num)
{
    int aux = num, res, som = 0;
    while(aux != 0)
    {
        res = aux % 10;
        if(res % 2 != 0) return(0);
        som = som + res;
        aux = aux/10;
    }
    if(som > 10) return(1);
    else return(0);
}

int main()
{
    printf("%d\n", exerc1(228));
}
