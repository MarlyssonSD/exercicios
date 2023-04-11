#include <stdio.h>

int main()
{
    int soma_diagonais = 0;
    int m[5][5] = {
        {5, 10, 15, 20, 25},
        {30, 35, 40, 45, 50},
        {55, 60, 65, 70, 75},
        {80, 85, 90, 95, 100},
        {105, 110, 115, 120, 125}};

    // soma da diagonal 0,4  1,3  2,2  3,2  4,0
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            if (a == 4 - b)
                soma_diagonais = m[a][b] + soma_diagonais;
        }
        printf("\n");
    }
    printf("%i", soma_diagonais);

    // soma da diagonal 0,0  1,1  2,2  3,3  4,4
    soma_diagonais = 0;
    
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            if (a == b)
                soma_diagonais = m[a][b] + soma_diagonais;
        }
        printf("\n");
    }
    printf("%i", soma_diagonais);

    return 0;
}