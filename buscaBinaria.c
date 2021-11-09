#include <stdio.h>

void buscabinaria(int v[], int in, int fi, int t)
{
    int m = (in + fi)/2;
    if(t == v[m])
    {
        printf("O elemento esta no vetor, na posicao %d.\n", m);
        return;
    }
    else if(t >= v[in] && t < v[m]) buscabinaria(v, in, m, t);
    else if(t > v[m] && t <= v[fi]) buscabinaria(v, m + 1, fi, t);
    else printf("O elemento nao esta no vetor.\n");
}

void main()
{
    int v[5] = {2,5,7,9,10};
    buscabinaria(v, 0, 4, 2);
}
