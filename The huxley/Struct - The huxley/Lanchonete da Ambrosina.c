#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct lanchonete
{
    int led;
    char nome_lanche[501];
    float preco;
};

int main()
{
    struct lanchonete lanches[500];
    int quant_lanches, a = 0;

    scanf("%i ", &quant_lanches);

    for (int x = quant_lanches; x > 0; x--)
    {
        scanf("%i ", &lanches[a].led);
        fgets(lanches[a].nome_lanche, 252, stdin);
        scanf("%f", &lanches[a].preco);

        a++;
    }

    // printf("%f\n", lanches[0].preco);
    int led_escolhido = 1, quant = 1;
    float valorT = 0;

    scanf("%i", &led_escolhido);
    while (led_escolhido != 0)
    {
        scanf("%i", &quant);

        for (int x = 0; x <= a; x++)
        {
            if (quant > 0)
            {
                if (led_escolhido == lanches[x].led)
                {
                    valorT = lanches[x].preco * quant + valorT;
                }
            }
        }

        scanf("%i", &led_escolhido);
    }
    printf("%.2f", valorT);

    return 0;
}