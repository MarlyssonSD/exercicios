#include <stdio.h>

int main()
{
    int tabela[3][4], i, col, lin;
    float valores[4];

    for (int lin = 0; lin < 3; lin++)
    {
        for (int col = 0; col < 4; col++)
        {
            scanf("%i", &tabela[lin][col]);
        }
    }

    for (i = 0; i < 4; i++)
        scanf("%f", &valores[i]);

    for (lin = 0; lin < 3; lin++)
    {
        float valor_geral = 0;

        for (col = 0; col < 4; col++)
        {

            valor_geral = tabela[lin][col] * valores[col] + valor_geral;
        }
        printf("%.2f\n", valor_geral);
    }
    return 0;
}