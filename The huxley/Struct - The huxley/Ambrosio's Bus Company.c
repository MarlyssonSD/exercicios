#include <stdio.h>
#include <string.h>
#include <math.h>
#define pessoas 44


struct onibus
{
    int num_passagem;
    char data[200];
    char esta_em[200];
    char vai_para[200];
    char horario[200];
    int poltrona;
    int idade;
    char nome[200];
};
int main()
{
    struct onibus busao[pessoas];
    int quant = 0;

    scanf("%i ", &busao[quant].num_passagem);
    while (busao[quant].num_passagem != -1)
    {
        fgets(busao[quant].data, 200, stdin);
        fgets(busao[quant].esta_em, 200, stdin);
        fgets(busao[quant].vai_para, 200, stdin);
        fgets(busao[quant].horario, 200, stdin);
        scanf("%i", &busao[quant].poltrona);
        scanf("%i", &busao[quant].idade);
        getchar();
        fgets(busao[quant].nome, 200, stdin);

        quant++;
        scanf("%i", &busao[quant].num_passagem);
        getchar();
    }

    int media_idade = 0;
    for (int x = 0; x < quant; x++)
    {
        media_idade = busao[x].idade + media_idade;
    }
    media_idade = media_idade / quant;

    for (int i = 0; i < quant; i++)
    {
        if (busao[i].idade > media_idade)
            if (busao[i].poltrona % 2 == 0)
                printf("%s",busao[i].nome);
    }

    return 0;
}