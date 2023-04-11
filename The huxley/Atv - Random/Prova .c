#include <stdio.h>
#include <math.h>

/*
1) Leia 10 números inteiros informando se cada um deles é um número primo.
Obs: Lembrando que um número primo só é divisível por ele próprio e pela unidade. */

/*int main()
{

    int numero, verdade;
    for (int i = 0; i < 10; i++)
    {
        verdade = 1;
        scanf("%i", &numero);
        for (int x = 2; x < numero; x++)
        {
            if (numero % x == 0)
            {
                verdade = 0;
            }
        }
        if (verdade)
        {
            printf("%i eh primo\n", numero);
        }
        else
        {
            printf("%i Nao eh primo\n", numero);
        }
    }

    return 0;
}
*/

/*2) Leia uma palavra e exiba-a em N linhas, formando um triângulo, conforme os seguintes exemplos.
Considere que N é a quantidade de letras da palavra.
*/

int main()
{
    int n, i = 0, x;
    char palavra[20];

    scanf("%s%i", palavra, &n);

    for (int lin = 0; lin <= n; lin++)
    {
        for (int col = n-lin; col <= n; col++)
        printf("%s", palavra);
    printf("\n");
    }

return 0;
}

// 3ªMenu Divergente
/*
int main()
{
    int menu;
    do
    {
        printf(" Digite '1' para calcular a raiz quadrada!!\n Digite '2' para exibir o menor de 3 numeros!!\n Digite '3' para ler dois numeros inteiros e exibir todos os valores entre eles (inclusive eles)!!\n Digite '4' para fechar o menu!!\n");
        scanf("%i", &menu);
        if (menu == 1)
        {
            int num;
            float raizq;
            printf("Digite um numero\n");
            scanf("%i", &num);
            raizq = sqrt(num);
            printf("a raiz quadrada de %i eh igual a %.2f\n\n", num, raizq);
        }
        if (menu == 2)
        {
            int a, b, c;
            printf("Digite 3 numeros\n");
            scanf("%i%i%i", &a, &b, &c);
            if (a < b)
                b = a;
            if (c < b)
                b = c;
            printf("O menor numero eh %i\n\n", b);
        }

        if (menu == 3)
        {
            int n1, n2, aux;
            printf("Digite 2 numeros\n");
            scanf("%i%i", &n1, &n2);
            if (n1 > n2)
            {
                aux = n1;
                n2 = n1;
                n1 = aux;
            }
            for (n1; n1 <= n2; n1++)
                printf("%i ", n1);
            printf("\n\n");
        }

    } while (menu != 4);

    return 0;
}
*/