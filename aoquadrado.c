#include <stdio.h>
int quadrado(int A, int B)
{
    int i, result = 1;
    for (i=0; i<B; i++)
        result *= A;
    return result;
}
int imprime(int A, int B)
{
    printf("Resultado de %d^%d: ", A,B);

    for(int i = 0; i < B; i++)
    {
        printf(" %d ",A);
        if (i == (B-1))
            printf("=");
        else
            printf("x");

    }
    printf(" %d", quadrado(A,B));
}
int main()
{
    int a, b;
    printf("Entre A: \n");
    scanf("%d", &a);
    printf("Entre B: \n");
    scanf("%d", &b);
    imprime(a,b);

    return 0;
}
