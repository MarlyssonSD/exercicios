#include <stdio.h>
#include <math.h>

// Questão 1 - Adoçante (INCOMPLETA)
/*
double quant_matar_rato()
{
    double quant;
    printf("Quanto de adocante precisa para matar um rato: ");
    scanf("%lf", &quant);
    return quant;
}

float peso_rato()
{
    float massa_rat;
    printf("\nDigite a massa do rato: ");
    scanf("%f", &massa_rat);
    return massa_rat;
}

float peso_pessoa()
{
    float massa;
    printf("\nDigite a massa da pessoa em dieta: ");
    scanf("%f", &massa);
    return massa;
}
int main()
{
    double qnt_matar_rato;
    float massa_rato, massa_humano;
    qnt_matar_rato = quant_matar_rato();

    massa_rato = peso_rato();

    massa_humano = peso_pessoa();

    printf("\n%.4f", massa_humano);
    return 0;
}
*/


/// Questão 2 - Limite de segurança
int perguntalimite()
{
    int quantpessoas;
    printf("Digite a capacidade maxima da sala: ");
    scanf("%i", &quantpessoas);
    return quantpessoas;
}
int perguntaconvidados()
{
    int convidados;
    printf("Digite quantas pessoas foram convidadas para a sala: ");
    scanf("%i", &convidados);
    return convidados;
}
void comparacao(int limite, int pessoas)
{
    int resultado;
    if (limite > pessoas)
    {
        printf("O limite eh maior que a quantidade de convidados\nE %i pessoas ainda podem ser convidadas\n", limite - pessoas);
    }
    else if (limite < pessoas)
    {
        printf("O limite eh menor que a quantidade de convidados\n%i pessoas devem sair da sala pela seguranca de todos!!\n", pessoas - limite);
    }
    else
    {
        printf("A quantidade de pessoas eh igual ao limite da sala!!\nTudo OK!");
    }
}

int main()
{
    int Lim_da_sala, convidados;
    Lim_da_sala = perguntalimite();
    convidados = perguntaconvidados();

    printf("O limite da sala eh: %i\nA quantidade de convidados eh: %i\n\n", Lim_da_sala, convidados);

    comparacao(Lim_da_sala, convidados);

    return 0;
}
