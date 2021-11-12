#include <stdio.h>
#define n 3

int main()
{
    int A[n][n] = {{8,0,7},{4,5,6},{3,10,2}};
    int i, j, sl_0, sl_i, sc_0, sc_i, sdi;

    sl_0 = sl_i = sc_0 = sc_i = sdi = 0;
    for(i = 0; i < n; ++i)
    {
        sdi = sdi + A[i][i];
        if(i == 0)
        {
            for(j = 0; j < n; ++j)
            {
                sl_0 = sl_0 + A[i][j];
                sc_0 = sc_0 + A[j][i];
            }
//          printf("sl_0 = %d \nsc_0 = %d\n", sl_0, sc_0);
            if(sl_0 != sc_0) {printf("\nA matriz nao representa um quadrado especial.\n"); return;}
        }
        else
        {
            for(j = 0; j < n; ++j)
            {
                sl_i = sl_i + A[i][j];
                sc_i = sc_i + A[j][i];
            }
        }

        if(i > 0)
        {
//          printf("sl_%d = %d \nsc_%d = %d\n", i, sl_i, i, sc_i);
            if(sl_i != sl_0 || sc_i != sc_0) {printf("\nA matriz nao representa um quadrado especial.\n"); return;}
        }
        sl_i = sc_i = 0;
    }
//  printf("sdi = %d\n", sdi);
    if(sdi != sl_0) {printf("\nA matriz nao representa um quadrado especial.\n"); return;}
    printf("\nA matriz representa um quadrado especial.\n");
}
