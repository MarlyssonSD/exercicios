#include <stdio.h>
#include <math.h>

float AreaC(float a)
{
    return M_PI*pow(a,2);
}
int main()
{
    float r;
    scanf("%f", &r);
    printf("A area do circulo e igual a: %.3f\n", AreaC(r));
    return 0;
}