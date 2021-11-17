#include <stdio.h>

int exerc1(int num1, int num2, int num3)
{
    int soma, mult, aux, res, imp;

    aux = num1; soma = 0;
    while(aux != 0)
    {
        res = aux % 10;
        if(res % 2 == 0) soma = soma + res;
        aux = aux/10;
    }

    aux = num2; mult = 1; imp = 0;
    while(aux != 0)
    {
        res = aux % 10;
        if(res % 2 != 0) {mult = mult*res; imp = mult;}
        aux = aux/10;
    }

    if(soma + imp == num3) return(1);
    else return(0);
}

int main()
{
    printf("%d\n", exerc1(35,22,0));
}
