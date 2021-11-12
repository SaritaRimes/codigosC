#include <stdio.h>

void buscabinaria(int v[], int in, int fi, int n)
{
    int m = (fi + in)/2;
    if(fi - in == 1) {printf("Elemento procurado nao se encontra no vetor.\n"); return;}
    else if(n == v[m]) {printf("Elemento %d encontrado no indice %d\n", n, m); return;}
    else if(n < v[m]) buscabinaria(v, in, m, n);
    else if(n > v[m]) buscabinaria(v, m, fi, n);
}

void main()
{
    int n;

    printf("Digite o numero que sera procurado: ");
    scanf("%d", &n);

    int v[20] = {2,5,7,9,10,14,22,25,30,40,50,51,60,61,66,78,90,91,92,93};
    buscabinaria(v, 0, 20, n);
}
