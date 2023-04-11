
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char casos[201];
    int num_de_casos, tamanho, soma = 1, contagem;
    scanf("%i ", &num_de_casos);
    contagem = num_de_casos;
    do
    {
        fgets(casos, 201, stdin);
        tamanho = strlen(casos) ;
        for (int a = 0; a < tamanho; a++)
        {
            for (int b = 0; b < tamanho; b++)
                if (casos[a] > casos[b])
                {
                    char aux[tamanho];
                    aux[tamanho] = casos[a];
                    casos[a] = casos[b];
                    casos[b] = aux[tamanho];
                }
        }

        printf("Caso %i: ", soma++);
        for (int x = 0; x < tamanho; x++)
        {

            printf("%c", casos[x]);
        }
        //printf("\n");

    } while (--num_de_casos != 0);
    return 0;
}