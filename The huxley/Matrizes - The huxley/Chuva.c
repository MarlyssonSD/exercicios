#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam_reg;
    scanf("%i", &tam_reg);
    int reg1[tam_reg][tam_reg], reg2[tam_reg][tam_reg], soma_reg[tam_reg][tam_reg];

    for (int a = 0; a < tam_reg; a++)
    {
        for (int b = 0; b < tam_reg; b++)
        {
            scanf("%i", &reg1[a][b]);
        }
    }

    for (int a = 0; a < tam_reg; a++)
    {
        for (int b = 0; b < tam_reg; b++)
        {
            scanf("%i", &reg2[a][b]);
        }
    }

    for (int a = 0; a < tam_reg; a++)
    {
        for (int b = 0; b < tam_reg; b++)
        {
            soma_reg[a][b]=reg1[a][b]+reg2[a][b];
        }
    }

    for (int a = 0; a < tam_reg; a++)
    {
        for (int b = 0; b < tam_reg; b++)
        {
            printf("%i ", soma_reg[a][b]);
        }
        printf("\n");
    }

    return 0;
}