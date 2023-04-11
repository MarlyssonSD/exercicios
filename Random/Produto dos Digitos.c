#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int num(int n1)
{
    int aux = 1, multip = 10;
    for (int i = n1; i < 100000; i++) // 15
    {
        aux = 1;
        multip = 1;
        if (i > 9 && i < 100)
        {
            for (int a = 0; a < 2; a++)
            {
                aux = ((i / multip) % 10) * aux;
                multip *= 10;
            }
        }

        else if (i > 99 && i < 1000)
        {
            for (int a = 0; a < 3; a++)
            {
                aux = ((i / multip) % 10) * aux;
                multip *= 10;
            }
        }
        else if (i > 999 && i < 10000)
        {
            for (int a = 0; a < 4; a++)
            {
                aux = ((i / multip) % 10) * aux;
                multip *= 10;
            }
        }
        else if (i > 9999 && i < 100000)
        {
            for (int a = 0; a < 5; a++)
            {
                aux = ((i / multip) % 10) * aux;
                multip *= 10;
            }
        }



        if (aux == n1)
            return i;
    }
    return -1;
}

int main()
{
    int N;
    scanf("%i", &N);
    if (N > 9 && N < 100000)
    {
        printf("%i", num(N));
    }

    return 0;
}