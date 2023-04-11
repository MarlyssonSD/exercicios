#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum
{
    FEMININO,
    MASCULINO
} Sexo;

typedef struct
{
    char codigo[26];
    char nome[101];
    int qtd_alunos;

} disc;

typedef struct
{
    char nome[501];
    char codigo[31];
    int idade;
    Sexo sexo;
    double nota;
    disc *discs;

} Aluno;

void ordem_vetor(int size, disc vetor[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(vetor[i].nome, vetor[j].nome) > 0)
            {
                disc temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void ordem_vetor_aluno(int size, Aluno vetor[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(vetor[i].nome, vetor[j].nome) > 0)
            {
                Aluno temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

Sexo cadastrar_aluno(Aluno *aluno)
{
    gets(aluno->codigo);
    gets(aluno->nome);
    scanf("%d\n", &aluno->idade);
    scanf("%d\n", (int *)&aluno->sexo);
    scanf("%lf\n", &aluno->nota);

    return aluno->sexo;
}

void cadastrar_disc(disc *disc)
{
    gets(disc->codigo);
    gets(disc->nome);
}

int main(int argc, char **argv)
{
    int mais_q_sete_e_meio = 0;
    int total_masc = 0;
    int total_feminino = 0;
    int n_de_alunos;
    int soma_idade = 0;
    int soma_idade_maior_q_sete = 0;

    scanf("%d\n", &n_de_alunos);

    Aluno *alunos = (Aluno *)calloc(n_de_alunos, sizeof(Aluno));

    for (int i = 0; i < n_de_alunos; i++)
    {
        if (cadastrar_aluno(alunos + i) == 1)
        {
            total_masc++;
        }
        else
        {
            total_feminino++;
        }
    }

    for (int i = 0; i < n_de_alunos; i++)
    {
        mais_q_sete_e_meio += alunos[i].nota > 7.5 ? 1 : 0;
        soma_idade += alunos[i].idade;
        soma_idade_maior_q_sete += alunos[i].nota > 7.5 ? alunos[i].idade : 0;
    }

    double media_idade_maior_q_sete = soma_idade_maior_q_sete / (double)mais_q_sete_e_meio;
    double media_idade = soma_idade / (double)n_de_alunos;

    printf("%d\n", total_masc);
    printf("%d\n", total_feminino);
    printf("%.2lf\n", media_idade);
    printf("%.2lf\n", media_idade_maior_q_sete);

    int n_de_discs;
    scanf("%d\n", &n_de_discs);

    disc *discs = (disc *)calloc(n_de_discs, sizeof(disc));

    for (int i = 0; i < n_de_alunos; i++)
    {
        alunos[i].discs = (disc *)calloc(n_de_discs, sizeof(disc));
        for (int j = 0; j < n_de_discs; j++)
        {
            alunos[i].discs[j].codigo[0] = '\0';
        }
    }

    for (int i = 0; i < n_de_discs; i++)
    {
        discs[i].qtd_alunos = 0;
    }

    for (int i = 0; i < n_de_discs; i++)
    {
        cadastrar_disc(discs + i);
    }

    int n_de_alunos_em_disc;
    scanf("%d\n", &n_de_alunos_em_disc);

    for (int i = 0; i < n_de_alunos_em_disc; i++)
    {
        char p[255];
        gets(p);

        int x = 0;

        char *codigo_aluno = strtok(p, " ");
        char *codigo_turma = strtok(NULL, "\0");

        for (int j = 0; j < n_de_alunos; j++)
        {
            if (!strcmp(codigo_aluno, alunos[j].codigo))
            {
                for (int k = 0; k < n_de_discs; k++)
                {
                    if (alunos[j].discs[k].codigo[0] == '\0' && !x)
                    {
                        for (int l = 0; l < n_de_discs; l++)
                        {
                            if (!strcmp(codigo_turma, discs[l].codigo))
                            {
                                alunos[j].discs[k] = discs[l];
                                discs[l].qtd_alunos++;
                                x++;
                            }
                        }
                    }
                }
            }
        }
    }

    ordem_vetor(n_de_discs, discs);
    ordem_vetor_aluno(n_de_alunos, alunos);

    for (int i = 0; i < n_de_discs; i++)
    {
        printf("%s\n", discs[i].nome);
        printf("%d\n", discs[i].qtd_alunos);

        for (int j = 0; j < n_de_alunos; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (!strcmp(alunos[j].discs[k].codigo, discs[i].codigo))
                {
                    printf("%s\n", alunos[j].nome);
                }
            }
        }
    }

    return 0;
}