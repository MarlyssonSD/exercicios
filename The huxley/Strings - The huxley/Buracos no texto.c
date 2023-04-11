#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char texto[200];
    int tam_texto, n1, num, aux;

    scanf("%i ", &n1);

    aux = n1;

    do
    {
        fgets(texto, 200, stdin);
        tam_texto = strlen(texto);

        for (int i = 0; i < tam_texto; i++)
        {

            if ((toupper(texto[i]) == 'A') ||
                (toupper(texto[i]) == 'D') ||
                (toupper(texto[i]) == 'O') ||
                (toupper(texto[i]) == 'P') ||
                (toupper(texto[i]) == 'P') ||
                (toupper(texto[i]) == 'R') ||
                (toupper(texto[i]) == 'Q'))
                num++;

            else if (toupper(texto[i]) == 'B')
                num += 2;
        }
        printf("%i\n", num);
        num = 0;
    } while (--aux != 0);

    return 0;
}