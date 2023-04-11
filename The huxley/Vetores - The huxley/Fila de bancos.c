#include <stdio.h>

int main()
{
    int fila1[10000], fila2[10000];
    int nfila1, nfila2, caixa;

    scanf("%i%i%i", &nfila1, &nfila2, &caixa);
    if (0 <= nfila1 <= 10000 && 0 <= nfila2 <= 10000 && 1 <= caixa <= 2)
    {
        for (int i = 0; i < nfila1; i++)
        {
            scanf("%i", &fila1[i]);
        }
        for (int i = 0; i < nfila2; i++)
        {
            scanf("%i", &fila2[i]);
        }
    }

    // caixa 1 indo almoçar
    if (caixa == 1)
    {
        printf("%i\n", fila2[0]);

        if (nfila1 < nfila2)
        {
            for (int a = 0; a < nfila1; a++)
            {
                printf("%i\n%i\n", fila1[a], fila2[a + 1]);
            }
            for (int a = nfila1 + 1; a < nfila2; a++)
                printf("%i\n", fila2[a]);
        }


        if (nfila1 > nfila2) // condição com erro///////////
        {
            for (int a = 0; a < nfila2; a++)
            {

                printf("%i\n%i\n", fila1[a], fila2[a + 1]);
            }
            for (int a = nfila2; a < nfila1; a++)
                printf("%i\n", fila1[a]);
        }
    }

    // caixa 2 indo almoçar//
    if (caixa == 2)
    {
        printf("%i\n", fila1[0]);

        if (nfila1 < nfila2)
        {
            for (int a = 0; a < nfila1 - 1; a++)
            {
                printf("%i\n%i\n", fila2[a], fila1[a + 1]);
            }
            for (int a = nfila1 - 1; a < nfila2; a++)
                printf("%i\n", fila2[a]);
        }

        if (nfila1 > nfila2)
        {
            for (int a = 0; a < nfila2; a++)
            {
                printf("%i\n%i\n", fila2[a], fila1[a + 1]);
            }
            for (int a = nfila2 + 1; a < nfila1; a++)
                printf("%i\n", fila1[a]);
        }
    }
    return 0;
}