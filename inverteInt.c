#include <stdio.h>
#include <math.h>

int quest1(int num)
{
    int aux, res, dig, i;
    double inv; /*a variavel eh declarada como double para evitar erros da funcao pow*/

    inv = dig = 0;
    aux = num;
    while(aux != 0)
    {
        aux = aux/10;
        ++dig;
    }

    aux = num;
    for(i = dig - 1; i >= 0; --i)
    {
        res = aux % 10;
        inv = inv + res*pow(10, i);
        aux = aux/10;
    }
    return(inv);
}
void main()
{
    printf("%d\n", quest1(5234));
}
