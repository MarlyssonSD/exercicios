#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int fat, num, soma_fat = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &fat);
        if (fat % 3 == 0)
        {
            num = fat;
            for (int a = 1; a < num; a++)
            {
                fat = fat * a;
            }
            soma_fat = soma_fat + fat;
        }
    }
    printf("%i\n", soma_fat);
    return 0;
}