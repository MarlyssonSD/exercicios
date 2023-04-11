#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int tam_vetor, i, vetor[10000], aux;
    scanf("%i", &tam_vetor);
    for (i = 0; i < tam_vetor; i++)
        scanf("%i", &vetor[i]);

    for (int a = 0; a < tam_vetor; a++){
        for (i = 0; i < tam_vetor; i++)
            if (vetor[a] < vetor[i])
            {
                 aux = vetor[i];
                vetor[i] = vetor[a];
                vetor[a] = aux;
            }
    }
    for(int x=0; x<tam_vetor;x++)
    printf("[%i]", vetor[x]);
    return 0;
}