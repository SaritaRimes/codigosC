#include <stdio.h>
#define n 3
#define x 10

void main()
{
    int som = 0, mult_linha = 1, mult_coluna = 1, i, j;
    int A[n][n] = {{1,5,2},{3,4,5},{10,1,5}};

    for(i = 0; i < n; ++i) som = som + A[i][i];
    if(som != x) {printf("A matriz de entrada nao representa uma matriz multipla.\n"); return;}

    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            mult_linha = mult_linha*A[i][j];
            mult_coluna = mult_coluna*A[j][i];
        }
        if((mult_linha % x != 0) || (mult_coluna % x != 0))
        {
            printf("A matriz de entrada nao representa uma matriz multipla.\n");
            return;
        }
        mult_linha = mult_coluna = 1;
    }
    printf("A matriz de entrada representa uma matriz multipla.\n");
}
