#include <stdio.h>

int indice(int vet1[], int vet2[], int tam)
{
    int i, soma = 0;

    for(i = 0; i < tam; ++i)
        soma = soma + vet2[i];
    for(i = 0; i < tam; ++i)
    {
        if(vet1[i] == soma)
            return(i);
    }
    return(-1);
}

void main()
{
    int v1[5] = {-9,56,16,8,2};
    int v2[5] = {1,2,3,4,5};
    printf("%d\n", indice(v1, v2, 5));
}
