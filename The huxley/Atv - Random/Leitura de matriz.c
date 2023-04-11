#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    int tabela[5][6] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {20, 10, 5, 3, 1},
        {3, 6, 9, 12, 15}};
    int i, j, soma;

    for (i = 0; i < 4; i++)
    {
        soma = 0;
        for (j = 0; j < 5; j++)
            soma = tabela[i][j] + soma;
        tabela[i][5] = soma;
    }

    for (j = 0; j < 5; j++)
    {
        soma = 0;
        for (i = 0; i < 4; i++)
            soma = tabela[i][j] + soma;
        tabela[4][j] = soma;
    }
//----------------soma da ultima coluna e linha-------------//
    
    soma=0;
    for (j = 0; j < 5; j++)
    
            soma = tabela[4][j] + soma;

        for (i = 0; i < 4; i++)
        
                soma = tabela[i][5] + soma;
        
        tabela[4][5]= soma;
    

//---------matriz--------//
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            printf("%5i", tabela[i][j]);
        printf("\n");
    }
    return 0;
}