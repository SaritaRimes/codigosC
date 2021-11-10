#include <stdio.h>
#include <stdlib.h>

int SomaPrimo(int num)
{
    int aux, som, i;

    som = 0;
    aux = num;
    while(aux != 0)
    {
        som = som + (aux % 10);
        aux = aux/10;
    }
    
    if(som == 1) return(0);
    if(som == 2 || som == 3) return(1);
    
    for(i = 2; i <= som/2; ++i)
    {
        if(som % i == 0) return(0);
    }
    return(1);
}

int main()
{
    printf("%d\n", SomaPrimo(98));
}
