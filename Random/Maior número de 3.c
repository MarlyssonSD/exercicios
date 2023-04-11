#include <stdio.h>

int numeromaior(int a, int b, int c)
{
    if (a < b)
        a = b;
    if (a < c)
        a = c;
    return a;
}

int main()
{
    int n1, n2, n3;
    scanf("%i%i%i", &n1, &n2, &n3);
    printf("O maior numero: %i\n", numeromaior(n1, n2, n3));
    return 0;
}
