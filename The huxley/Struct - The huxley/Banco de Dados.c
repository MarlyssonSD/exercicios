#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct rede_social
{
    int idade;
    char nome[51];
    char sexo;
    char estado_c;
    int num_de_amigos;
    int quant_fotos;
};

int main()
{
    struct rede_social perfil[100];
    int usuarios, aux, contagem = 0;

    scanf("%i", &usuarios);
    aux = usuarios;
    while (aux-- > 0)
    {
        scanf("%i ", &perfil[contagem].idade);
        fgets(perfil[contagem].nome, 51, stdin);
        scanf("%c ", &perfil[contagem].sexo);
        scanf("%c ", &perfil[contagem].estado_c);
        scanf("%i", &perfil[contagem].num_de_amigos);
        scanf("%i", &perfil[contagem].quant_fotos);
        contagem++;
    }

    for (int a = 0; a < usuarios; a++)
    {
        printf("Idade: %i\n", perfil[a].idade);
        printf("Nome: %s", perfil[a].nome);
        printf("Sexo: %c\n", perfil[a].sexo);
        printf("Estado Civil: %c\n", perfil[a].estado_c);
        printf("Numero de amigos: %i\n", perfil[a].num_de_amigos);
        printf("Numero de fotos: %i\n\n", perfil[a].quant_fotos);
    }
    return 0;
}