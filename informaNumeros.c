#include <stdio.h>

int main()
{
    int v[10], i, npep, npo, npa, npop;

    printf("Digite os numeros, um por um, separados por espaco: \n");
    for(i = 0; i < 10; ++i)
        scanf("%d", &v[i]);

    npep = npop = npo = npa = 0;
    for(i = 0; i < 10; ++i)
    {
        if(v[i] > 0)
            ++npo;
        if(v[i] % 2 == 0)
            ++npa;
        if((v[i] > 0) && (v[i] % 2 == 0))
            ++npep;
    }
    npop = npo + npa - npep;

    printf("o numero de valores positivos eh: %d\n", npo);
    printf("o numero de valores pares eh: %d\n", npa);
    printf("o numero de valores positivos e pares eh: %d\n", npep);
    printf("o numero de valores positivos ou pares eh: %d\n", npop);
}
