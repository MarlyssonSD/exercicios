#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double numeros[10000] = {0}, media = 0, desvio = 0, soma = 0;
    int num_de_notas = 0, acima_da_media = 0;

    for (int i = 0; i < 10000; i++)
    {
        scanf("%lf", &numeros[i]);
        if (numeros[i] == -1)
        {
            break;
        }
        num_de_notas++;
        soma = soma + numeros[i];
    }
    media = soma / num_de_notas;
    printf("%.2lf\n", media);

    for (int a=0; a < num_de_notas; a++)
        desvio = (desvio) + pow(numeros[a] - media,2);
    printf("%.2lf\n", sqrt(desvio / (num_de_notas-1)));

    for (int x = 0; x < num_de_notas; x++)
    {
        if (numeros[x] > media)
            acima_da_media++;
    }
    printf("%i\n", acima_da_media);

    return 0;
}