#include <stdio.h>
#include <math.h>

double OP1perguntarcateto1()
{
    double cateto;
    printf("\nDigite o valor do primeiro cateto:\n");
    scanf("%lf", &cateto);
    return cateto;
}
double OP2perguntarcateto2()
{
    double cateto;
    printf("Digite o valor do segundo cateto:\n");
    scanf("%lf", &cateto);
    return cateto;
}
double calculohipo1(double cat1, double cat2)
{
    return sqrt(pow(cat1, 2) + pow(cat2, 2));
}
void continuarcalculadora(double hipo)
{
    printf("O valor da hipotenusa eh: %lf\n\n", hipo);
    printf("Se deseja continuar calculando digite 's' ou 'S'!!\nPara finalizar digite qualquer outro valor:\n");
}
double calculo_XaXbYaYb()
{
    double Xa, Xb, Ya, Yb, DistAB;
    printf("Digite o Xa, Xb, Ya, Yb respectivamente\n");
    scanf("%lf%lf%lf%lf", &Xa, &Xb, &Ya, &Yb);
    DistAB = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    return DistAB;
}

int main()
{
    double cateto1, cateto2;
    char continuar;
    int opcao;
    do
    {
        printf("Escolha qual calculo deseja realizar\n1- Hipotenusa comum\n2- Hipotenusa em plano cartesiano\n");
        scanf("%i", &opcao);
        if (opcao == 1)
        {
            cateto1 = OP1perguntarcateto1();
            cateto2 = OP2perguntarcateto2();

            double hipo;
            hipo = calculohipo1(cateto1, cateto2);
            continuarcalculadora(hipo);
            scanf(" %c", &continuar);
        }

        else if (opcao == 2)
        {
            double distanciaAB;

            distanciaAB = calculo_XaXbYaYb();
            continuarcalculadora(distanciaAB);
            scanf(" %c", &continuar);
        }
    } while (continuar == 's' || continuar == 'S');

    return 0;
}