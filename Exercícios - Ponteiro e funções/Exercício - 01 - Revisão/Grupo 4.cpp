#include <iostream>
#include <math.h>

#define A 6 // define Q-1

// Questão 1 Dez um maior outro menor
/*int main()
{
    float lista[A];
    float maior, menor;

    printf("Digite %i numeros:\n", A);

    for (int a = 0; a < A; a++)
    {
        scanf("%f", &lista[a]);
    }

    maior = lista[0];
    for (int a = 0; a < A; a++)
    {
        if (lista[a] > maior)
        {
            maior = lista[a];
        }
    }

    menor = lista[0];
    for (int a = 0; a < A; a++)
    {
        if (lista[a] < menor)
        {
            menor = lista[a];
        }
    }
    printf("Numero maior: %f\n", maior);
    printf("Numero menor: %f\n", menor);

    return 0;
}*/

// Questão 2 Ordem dos numeros
/*int main()
{
    int lista[A];

    printf("Digite %i numeros:\n", A);
    for (int a = 0; a < A; a++)
        scanf("%i", &lista[a]);

    for (int a = 0; a < A; a++)
    {
        for (int a = 1; a < A; a++)
        {
            int aux;
            if (lista[a] < lista[a - 1])
            {
                aux = lista[a];
                lista[a] = lista[a - 1];
                lista[a - 1] = aux;
            }
        }
    }
    for (int a = 0;a < A; a++)
    {
        printf("%i ", lista[a]);
    }

    return 0;
}*/

// Questão 3 Média de 5 notas
/*float media()
{
    float notas[5], soma=0;

    printf("Digite as 5 notas do aluno:\n");
    for (int a = 0; a < 5; a++)
    {
        scanf("%f", &notas[a]);
        soma +=notas[a];
    }
    return soma/5;
}
int main()
{

    printf("A media do aluno foi: %.1f", media());
    return 0;
}*/

// Questão 4 