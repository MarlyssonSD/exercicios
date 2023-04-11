#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max 100

struct pessoa
{
    char sexo;
    char olho;
    char cabelo;
    int idade;
};

int main()
{
    struct pessoa pesquisa[max];
    int quant_pessoas = 0, filtro = 0, MaisVelho = -1;

    scanf("%i ", &pesquisa[quant_pessoas].idade);
    while (pesquisa[quant_pessoas].idade != -1)
    {

        scanf("%c %c %c", &pesquisa[quant_pessoas].sexo,
              &pesquisa[quant_pessoas].cabelo,
              &pesquisa[quant_pessoas].olho);
        if (pesquisa[quant_pessoas].idade > MaisVelho)
            MaisVelho = pesquisa[quant_pessoas].idade;

        if ((toupper(pesquisa[quant_pessoas].sexo) == 'F') &&
            (pesquisa[quant_pessoas].idade >= 18) &&
            (pesquisa[quant_pessoas].idade <= 35) &&
            (toupper(pesquisa[quant_pessoas].cabelo) == 'L') &&
            (toupper(pesquisa[quant_pessoas].olho) == 'V'))
            filtro++;

        quant_pessoas++;
        scanf("%i ", &pesquisa[quant_pessoas].idade);
    }

    double porcent = (filtro / (double)quant_pessoas) * 100;
    printf("Mais velho: %i\n", MaisVelho);
    printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2lf%c", porcent, '%');

    return 0;
}