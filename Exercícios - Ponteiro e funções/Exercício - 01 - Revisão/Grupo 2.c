#include <stdio.h>
#include <math.h>

/// Questão 1 deci, cent, mili...
/*int main (){
    int valor;

    printf("Digite um valor em metros abaixo:\n");
    scanf("%i", &valor);

    printf("O valor digitado em decimetros eh igual a: %i\n", valor*10 );
    printf("O valor digitado em centimetros eh igual a: %i\n", valor*100 );
    printf("O valor digitado em milimetros eh igual a: %i\n", valor*1000 );


    return 0;
}*/

/// Questão 2 tabuada do 1-9
/*int main()
{
    for (int a = 1; a <= 10; a++)
    {
        printf("\n");
        for (int b = 0; b < 10; b++){
            printf("%2ix%i:%3i  ", a,b, a*b);
        }
    }

    return 0;
}*/

/// Questão 3 decimal, hexa, octal...

/*int main()
{
    int decimal, quant_de_casas = 0, variavel;

    printf("Degite um numero em decimal para converte-lo em hexa e octal!!\n");
    scanf("%i", &decimal);
    printf("Em octal: %o\n", decimal);
    printf("Em hexa: %X\n", decimal);


    return 0;
}*/

/// Questão 4 Fahrenheit -->celsius

/*int main()
{
    double numero1, conta1, conta2;
    int numero2;
    printf("Digite um valor em Fahrenheit abaixo!\n");
    scanf("%lf", &numero1);
    conta1 = (numero1 - 32) / 1.8;
    printf("%lf\n", conta1);
    // conta2
    printf("Digite um valor em Fahrenheit abaixo!\n");
    scanf("%i", &numero2);
    conta2 = (numero2 - 32) / 1.8;
    printf("%lf\n", conta2);
    return 0;
}*/

/// Questão 5 Dois numeros

/*int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    printf("A soma dos numeros eh igual a: %.4f\n", a + b);
    printf("O produto do primeiro numero pelo quadrado do segundo: %.4f\n", a * pow(b, 2));
    printf("O quadrado do primeiro numero: %.4f\n", pow(a, 2));
    printf("A raiz quadrada da soma dos quadrados: %.4f\n", sqrt(pow(a, 2) + pow(b, 2)));
    printf("O seno da diferenca do primeiro numero pelo segundo: %.4f\n", sin(a - b));
    printf("O modulo do primeiro numero: %.4f\n", fabs(a));
}*/


