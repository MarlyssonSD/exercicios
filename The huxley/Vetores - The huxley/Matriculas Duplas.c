#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int prog2[45], prog3[35];
    for (int i = 0; i < 45; i++)
        scanf("%i", &prog2[i]);
    for (int i = 0; i < 30; i++)
        scanf("%i", &prog3[i]);
    for (int i = 0; i < 45; i++)
    {
        for (int aux = 0; aux < 30; aux++)
            if (prog2[i] == prog3[aux])
                printf("%i ", prog3[aux]);
    }
    return 0;
}