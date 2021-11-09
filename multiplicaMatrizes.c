#include <stdio.h>


void main()
{
    int A[5][4] = {{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2}};
    int B[4][6] = {{3,3,3,3,3,3},{3,3,3,3,3,3},{3,3,3,3,3,3},{3,3,3,3,3,3}};
    int C[5][6];
    int som = 0, i, j, k;

    for(i = 0; i < 5; ++i)
    {
        for(j = 0; j < 6; ++j)
        {
            for(k = 0; k < 4; ++k)
            {
                som = som + A[i][k]*B[k][j];
            }
            C[i][j] = som;
            som = 0;
        }
    }
    for(i = 0; i < 5; ++i)
    {
        for(j = 0; j < 6; ++j)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
