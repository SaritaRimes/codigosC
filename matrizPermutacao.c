#include <stdio.h>
#define n 4

void main()
{
    int A[n][n] = {{0,1,0,0},{0,0,1,0},{1,0,0,0},{0,0,0,1}};
    int nenl, nenc, i, j;

    nenl = nenc = 0;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            if(A[i][j] == 0) ++nenl;
            else if(A[i][j] != 1) {printf("A matriz de entrada nao eh uma matriz de permutacao.\n"); return;}
            if(A[j][i] == 0) ++nenc;
            else if(A[j][i] != 1) {printf("A matriz de entrada nao eh uma matriz de permutacao.\n"); return;}
        }
        if(nenl != (n - 1) || nenc != (n - 1)) {printf("A matriz de entrada nao eh uma matriz de permutacao.\n"); return;}
        nenl = nenc = 0;
    }
    printf("A matriz de entrada eh uma matriz de permutacao.\n");
}
