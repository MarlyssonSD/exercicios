#include <stdio.h>

int main()
{
    FILE *arqsaida;
    arqsaida = fopen("exe03s.txt", "w");

    FILE *arqentrada;
    arqentrada = fopen("exe03e.txt", "r");

    if (arqentrada == NULL)
    {
        printf("A abertura do arquivo de entrada falhou\n");
        exit(1);
    }

    if (arqsaida == NULL)
    {
        printf("A abertura do arquivo de saida falhou\n");

        exit(1);
    }
    char sequencia;
    int x = 1;

    fscanf(arqentrada, "%c", &sequencia);
    fprintf(arqsaida, "%d ", x);

    while (!feof(arqentrada))
    {
        fprintf(arqsaida, "%c", sequencia);
        if (sequencia == '\n')
        {
            x++;
            fprintf(arqsaida, "%d ", x);
        }
        fscanf(arqentrada, "%c", &sequencia);
    }

    fclose(arqentrada);
    fclose(arqsaida);
    return 0;
}