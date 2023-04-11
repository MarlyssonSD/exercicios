#include <stdio.h>

int main()
{
    FILE *arqsaida;
    arqsaida = fopen("exe02s.txt", "w");

    FILE *arqentrada;
    arqentrada = fopen("exe02e.txt", "r");

    int primeiro, segundo, terceiro, soma;
    fscanf(arqentrada, "%i%i%i", &primeiro, &segundo, &terceiro);
    soma = primeiro + segundo + terceiro;
    fprintf(arqsaida, "A soma dos primeiros\n3 numeros em\nexe02s.txt %i", soma );

    fclose(arqentrada);
    fclose(arqsaida);
    return 0;
}