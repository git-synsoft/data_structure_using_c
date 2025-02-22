#include <stdio.h>
#include <stdlib.h>

int *fun(int n)
{
    int *p = (int *)malloc(n * sizeof(int));
    return p;
}

int main()
{
    int *A = fun(5);
    for (int i = 0; i < 5; i++)
    {
        A[i] = i * 54 + A[i - 1];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
    free(A);

    return 0;
}