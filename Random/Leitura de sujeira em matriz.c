#include <stdio.h>

int main()
{

    int area_limpa, cont = 0;
    int m[3][5] = {
        {' ', '*', ' ', ' ', '*'},
        {'*', ' ', '*', ' ', ' '},
        {'*', ' ', ' ', '*', '*'},
    };

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (m[l][c] == '*')
                cont++;
        }
    }
    printf("%i", cont++);

    return 0;
}