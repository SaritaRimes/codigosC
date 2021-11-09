#include <stdio.h>

void main()
{
    int A[3], B[3], i, esc = 0, ab1, ab2, ab3;

    printf("Digite os elementos do seu vetor A, separados por espaco:\n");
    for(i = 0; i < 3; ++i) scanf("%d", &A[i]);

    printf("Digite os elementos do seu vetor B, separados por espaco:\n");
    for(i = 0; i < 3; ++i) scanf("%d", &B[i]);

    for(i = 0; i < 3; ++i) esc = esc + A[i]*B[i];
    printf("O produto escalar entre os vetores A e B eh igual a %d\n", esc);

    /*produto vetorial:
    |x  y  z |   | x  y  z  x  y|
    |a1 a2 a3| = |a1 a2 a3 a1 a2|
    |b1 b2 b3|   |b1 b2 b3 b1 b2|

    A x B = (x*a2*b3 + y*a3*b1 + z*a1*b2) - (b1*a2*z + b2*a3*x + b3*a1*y)
    A x B = (a2*b3 - b2*a3)x + (a3*b1 - b3*a1)y + (a1*b2 - b1*a2)z */

    ab1 = A[1]*B[2] - B[1]*A[2];
    ab2 = A[2]*B[0] - B[2]*A[0];
    ab3 = A[0]*B[1] - B[0]*A[1];

    printf("O produto vetorial entre os vetores A e B gera um novo vetor C = {%d, %d, %d}\n", ab1, ab2, ab3);
}
