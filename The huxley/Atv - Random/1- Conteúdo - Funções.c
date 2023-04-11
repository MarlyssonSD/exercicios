#include <stdio.h>
#include <math.h>
#include <ctype.h> // maiusculo minusculo

/*6. Escreva uma função que recebe dois números inteiros distintos e retorna o maior dentre eles.
int maior(int n1, int n2)
{

    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int num1, num2;
    scanf("%i%i", &num1, &num2);
    printf("o maior numero eh: %i ", maior(num1, num2));
    return 0;
}*/
/*7. Escreva uma função que receba três números inteiros distintos e retorne o maior dentre eles.

int maiorde3(int a, int b, int c)
{
    if (a < b)
        a = b;
    if (a < c)
        a = c;
    return a;
}
int main()
{

    int n1, n2, n3;
    scanf("%i%i%i", &n1, &n2, &n3);
    printf("Dos tres numeros o maior eh: %i", maiorde3(n1, n2, n3));
    return 0;
}*/
/*8. Escreva uma função que receba o raio de um círculo e retorne a sua área. (área=PI*r2)

float area_do_circulo(float raio)
{
    return pow(raio, 2) * M_PI;
}

int main()
{
    float r;

    scanf("%f", &r);
    printf("%.3f", area_do_circulo(r));
}*/
/*9. Escreva uma função para converter graus Celsius em Fahrenheit. (Fahrenheit=1,8*Celsius + 32)

float c_para_f(float c)
{
    return c * 1.8 + 32;
}
int main()
{
    float celsius;
    scanf("%f", &celsius);
    printf("A temp. %.2f Celsius em fahrenheit eh igual a:%.2f", celsius, c_para_f(celsius));
}*/
/*10. Faça um programa que dado um inteiro n, imprima n linhas, em que cada linha deve seguir o seguinte padrão:

void triangulo(int n)
{
    for (int i = 0; i < n; i++)
        printf("%i", n);
    printf("\n");
}
int main()
{
    int tamanho;
    scanf("%i", &tamanho);
    for (int i = 0; i <= tamanho; i++)
        triangulo(i);

            return 0;
}*/
/* Extra - Positivo e negativo com verdadeiro ou falso no if
#include <stdio.h>
float verdade(float a)
{
    int verdade;
    if (a > 0)
        return verdade = 0;
    else
        return verdade = 1;
}
int main()
{
    float n;
    scanf("%f", &n);
    if (verdade(n))
        printf("eh negativo\n");
    else
        printf("eh positivo");
    return 0;
}*/
/* Extra - Maiusculo ou minusculo??

char paramaiusculo(char letra)
{
    if (islower(letra))
        return toupper(letra);
    else
        return letra;
}
int main(){
    int c;
    scanf("%c", &c);
    printf("%c", paramaiusculo(c));


    return 0;
}*/
/* Extra - Escreva uma função que receba um número inteiro como parâmetro e retorne o fatorial desse número.

int fatorial(int num)
{
    int aux=1;
    for(int i=0;i<num;i++)
    aux = aux*(num-i);
    return aux;
}
int main(){
    int num_fat;
    scanf("%i", &num_fat);
    printf("%i", fatorial(num_fat));

    return 0;
}*/