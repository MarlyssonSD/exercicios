#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char texto[51];
    char letra;
    int indice, tamanho;

    fgets(texto, 51, stdin);
    scanf("%c", &letra);
    tamanho = strlen(texto);

    for (indice = 0; indice < tamanho; indice++)
    {
        if(texto[indice] == letra)
        printf("%i\n", indice);
    }
    printf("%i\n", -1);

    return 0;
}