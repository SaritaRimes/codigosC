#include <stdio.h>

void selectionsort(int v[], int in, int fi)
{
    int i, aux, min = in + 1;
    if(fi == in) return;
    for(i = in + 1; i <= fi; ++i)
    {
        if(v[i] < v[min]) min = i;
    }
    if(v[in] > v[min])
    {
        aux = v[in];
        v[in] = v[min];
        v[min] = aux;
    }
    selectionsort(v, in + 1, fi);
}

void main()
{
    int i, v[7] = {3, 6, 90, 2, 1, 8, 5};
    selectionsort(v, 0, 6);
    for(i = 0; i < 7; ++i) printf("%d ", v[i]);
}
