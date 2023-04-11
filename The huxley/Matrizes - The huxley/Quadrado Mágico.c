#include <stdio.h>

int main()
{
    int soma = 0, tam_quad, comparacao = 0, bool = 1;
    scanf("%i", &tam_quad);
    int quadrado[tam_quad][tam_quad];

    for (int i = 0; i < tam_quad; i++)
    {
        for (int a = 0; a < tam_quad; a++)
        {
            scanf("%i", &quadrado[i][a]);
        }
    }
    // Leitura da primeira linha para comparar com o resto
    for (int col = 0; col < tam_quad; col++)
    {
        comparacao = comparacao + quadrado[0][col];
    }
    // comparação de linhas
    for (int lin = 1; lin < tam_quad; lin++)
    {
        soma = 0;
        for (int col = 0; col < tam_quad; col++)
        {
            soma = soma + quadrado[lin][col];
        }

        if (comparacao != soma)
        {
            bool = 0;
            break;
        }
    }
    // comparação de colunas
    for (int col = 0; col < tam_quad; col++)
    {
        soma = 0;
        for (int lin = 0; lin < tam_quad; lin++)
        {
            soma = soma + quadrado[lin][col];
        }

        if (comparacao != soma)
        {
            bool = 0;
            break;
        }
    }
    soma = 0;
    // comparação de diagonal com índices iguais 0,0  1,1...//***No huxley da como errado***///
    /*for (int lin = 0; lin < tam_quad; lin++)
    {
        for (int col = 0; col < tam_quad; col++)
        {
            if (col == lin)
                soma = soma + quadrado[lin][col];
        }
    }
    if (comparacao != soma)
    {
        printf("%i", soma);
        bool = 0;
    }
    */
    soma = 0;
    // comparação da outra diagonal
    for (int lin = 0; lin < tam_quad; lin++)
    {
        for (int col = 0; col < tam_quad; col++)
        {
            if (lin == tam_quad - 1 - col)
                soma = soma + quadrado[lin][col];
        }
    }
    if (comparacao != soma)
    {
        bool = 0;
    }
printf("Digite a dimensao da matriz quadrada N x N:\nDigite os elementos da matriz:\n");
    if (bool)
        printf("Os elementos FORMAM um quadrado magico.\nA soma do quadrado magico e %i.", comparacao);
    else
        printf("Os elementos NAO FORMAM um quadrado magico.");

    return 0;
}