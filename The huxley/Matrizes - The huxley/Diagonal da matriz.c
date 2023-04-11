#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define LIN 4
#define COL 4
int main()
{
    int matriz[LIN][COL];
    int constante;

    scanf("%i", &constante);
    do
    {
        for (int linha = 0; linha < LIN; linha++)
            for (int coluna = 0; coluna < COL; coluna++)
                scanf("%i", &matriz[linha][coluna]);

        for (int linha = 0; linha < LIN; linha++)
        {
            for (int coluna = 0; coluna < COL; coluna++)
                if (linha == coluna)
                    matriz[linha][coluna] = (matriz[linha][coluna]) * (constante);
        }

        for (int coluna = 0; coluna < COL; coluna++)
        {
            for (int linha = 0; linha < LIN; linha++)
                printf("%i ", matriz[linha][coluna]);
            printf("\n");
        }
        scanf("%i", &constante);
    } while (constante != 0);
    return 0;
}