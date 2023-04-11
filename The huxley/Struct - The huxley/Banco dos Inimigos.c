#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct personagens
{
    char nome[22];
    int id;
    int level;
    int vida;
    int ataque;
    int defesa;
};

int main()
{
    struct personagens npc[100];
    int quant, aux = 0;

    scanf("%i ", &quant);

    while (quant-- > 0)
    {
        fgets(npc[aux].nome, 22, stdin);
        scanf("%i", &npc[aux].id);
        scanf("%i", &npc[aux].level);
        scanf("%i", &npc[aux].vida);
        scanf("%i", &npc[aux].ataque);
        scanf("%i", &npc[aux].defesa);
        getchar();
        aux++;
    }

    for (int a = 0; a < aux;a++)
    {
        printf("Nome: %s", npc[a].nome);
        printf("ID: %i\n", npc[a].id);
        printf("Level: %i\n", npc[a].level);
        printf("Vida: %i\n", npc[a].vida);
        printf("Ataque: %i\n", npc[a].ataque);
        printf("Defesa: %i\n", npc[a].defesa);
    }
    return 0;
}