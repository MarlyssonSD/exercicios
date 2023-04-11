#include <stdio.h>
#include <math.h>

// Questão 1 Dois valores menor maior

/*int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    if (a < b)
    {
        printf("%f%f", a, b);
    }
    else if (a > b)
    {
        printf("%f%f", b, a);
    }
    else
    {
        printf("valores iguais");
    }

    return 0;
}*/

// Questão 2 Tabela ascii

/*int main()
{
    // caractere
    for (int a = 0; a <= 127; a++)
    {
        if (a % 11 == 0)
        {
            printf("\n");
        }
        printf("%i = %c\t", a, a);
    }

    printf("\n\n");
    // decimal
    for (int a = 0; a <= 127; a++)
    {
        if (a % 8 == 0)
        {
            printf("\n");
        }
        printf("%3i = %3i ", a, a);
    }
    printf("\n\n");

    // hexa
    for (int a = 0; a <= 127; a++)
    {
        if (a % 10 == 0)
        {
            printf("\n");
        }
        printf("%i = %2X  ", a, a);
    }
    return 0;
}*/

// Questão 3 Preço e inflação

/*int main()
{
    float valor;
    printf("Digite um valor:\n");
    scanf("%f", &valor);
    if (valor < 100)
    {
        printf("%.3f", valor * 1.1);
    }
    else if (valor >= 100)
    {
        printf("%.3f", valor * 1.2);
    }

    return 0;
}*/

// Questão 4 Escolha de operação

/*int main()
{
    float x, y;
    char a;
    printf("Digite um valor:\n");
    scanf("%f", &x);

    printf("Digite o simbolo da operacao que deseja fazer * / + -\n");
    scanf(" %c", &a);

    printf("Digite o outro valor:\n");
    scanf("%f", &y);

    if (a == '*')
    {
        printf("%.2f", x * y);
    }
    if (a == '/')
    {
        printf("%.2f", x / y);
    }
    if (a == '+')
    {
        printf("%.2f", x + y);
    }
    if (a == '-')
    {
        printf("%.2f", x - y);
    }
    return 0;
}*/

// Questão 5 Média das notas

/*int main()
{
    float nota1, nota2;

    printf("Digite as duas notas do aluno:\n");
    scanf("%f", &nota1);
    do
    {
        scanf("%f", &nota2);
        printf("A media das notas eh: %.2f\n", (nota1 + nota2) / 2);

        scanf("%f", &nota1);
    } while (nota1 != 50);
    return 0;
}*/
