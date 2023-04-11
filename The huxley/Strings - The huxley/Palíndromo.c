#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char frase[256], fraseinvertida[256], c;
    int tamanho, i, posicao, a = 0, aux, retorno = 1, quant;

    scanf("%i%c", &quant, &c);
    for (int repete = 0; repete < quant; repete++)
    {

        fgets(frase, 256, stdin);

        tamanho = strlen(frase);
        aux = tamanho;

        for (i = 0, posicao = 0; i < tamanho; i++, posicao++)
        {
            if (frase[posicao] == ' ')
                posicao++;
            frase[i] = frase[posicao];
        }
        i = 0;
        while (frase[i++] != '\0')
            fraseinvertida[--aux] = frase[a++];

        for (int x = 0; x < tamanho; x++)
            printf("%c", fraseinvertida[x]);
        printf("\n");
        for (int x = 0; x < tamanho; x++)
            printf("%c", frase[x]);
        printf("\n");

        retorno = 1;
        for (int a = 0; a < tamanho; a++)
        {
            if (frase[a] == fraseinvertida[a - 1])
            {
                retorno = 0;
            }
        }
        if (retorno == 0)
            printf("SIM\n");
        else
            printf("NAO\n");
    }
    return 0;
}