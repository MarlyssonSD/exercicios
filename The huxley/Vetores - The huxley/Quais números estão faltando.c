#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*1 2 3 4 5 6 7 8
2 4 8 7 45 */
int main()
{
    int vetor1[10000];
    int vetor2[10000];
    int vetor3[10000];
    int cont1 = 0, cont2 = 0, cont3 = 0, a, b;
    char cond;

    do
    {
        scanf("%i%c", &vetor1[cont1], &cond);
        cont1++;
    } while (cond != '\n');

    do
    {
        scanf("%i%c", &vetor2[cont2], &cond);
        cont2++;
    } while (cond != '\n');

    for ( a = 0; a < cont1; a++)
    {
        int verdade = 1;
        for ( b = 0; b < cont2; b++)
            if (vetor1[a] == vetor2[b])
                verdade = 0;
        if (verdade)
        {
            vetor3[cont3] = vetor1[a];
            cont3++;
        }
    }

    for ( a = cont3 - 1; a >= 0; a--)
        printf("%i ", vetor3[a]);

    return 0;
}