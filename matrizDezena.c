#include <stdio.h>
#define n 3

void main()
{
    int som = 0, soml = 0, somc = 0, multl = 1, multc = 1, i, j;
    int A[n][n] = {{1,5,2},{2,4,5},{10,1,5}};

    /*soma dos elementos da diagonal principal*/
    for(i = 0; i < n; ++i)
    {
        som = som + A[i][i];
    }
    if(som != 10)
    {
        printf("som = %d \nA matriz de entrada nao representa uma matriz dezena.\n", som);
        return;
    }

    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            multl = multl*A[i][j];
            multc = multc*A[j][i];
        }
        if((multl % 10 != 0) || (multc % 10 != 0))
        {
            printf("multl = %d \nmultc = %d \nA matriz de entrada nao representa uma matriz dezena.\n", multl, multc);
            return;
        }
        multl = multc = 1;
    }

    printf("A matriz de entrada representa uma matriz dezena.\n");
}
