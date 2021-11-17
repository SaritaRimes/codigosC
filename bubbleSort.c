#include <stdio.h>

void bubblesort(int v[], int in, int fi) //fi eh a posicao do ultimo elemento do vetor
{
    int i, aux;
    if(in == fi) return;
    for(i = in; i < fi; ++i)
    {
        if(v[i] > v[i + 1])
        {
            aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }
    bubblesort(v, in, fi - 1);
}

void main()
{
    int i, v[10] = {2,6,7,9,1,0,-4,-6,1,};

    bubblesort(v, 0, 9);
    for(i = 0; i < 10; ++i)
        printf("%d ", v[i]);
}
