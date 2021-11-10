#include <stdio.h>
#define n 3

void main()
{
    int i, j, mult_diag, soma_ele, mult_lin, soma_prim_col, mult_ult_col;
    int A[n][n] = {0};

    mult_diag = 1;
    for(i = 0; i < n; ++i)
    {
        mult_diag = mult_diag*A[i][i];
    }

    soma_ele = 0;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            soma_ele = soma_ele + A[i][j];
        }
    }

    if(mult_diag != soma_ele) {printf("A matriz de entrada nao representa uma matriz interessante.\n"); return;}

    mult_lin = 1;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            mult_lin = mult_lin*A[i][j];
        }
        if(mult_lin % 3 != 0) {printf("A matriz de entrada nao representa uma matriz interessante.\n"); return;}
        mult_lin = 1;
    }

    soma_prim_col = 0;
    mult_ult_col = 1;
    for(i = 0; i < n; ++i)
    {
        soma_prim_col = soma_prim_col + A[i][0];
        mult_ult_col = mult_ult_col*A[i][n - 1];
    }
    if(soma_prim_col != mult_ult_col) {printf("A matriz de entrada nao representa uma matriz interessante.\n"); return;}

    printf("A matriz de entrada representa uma matriz interessante.\n");
}
