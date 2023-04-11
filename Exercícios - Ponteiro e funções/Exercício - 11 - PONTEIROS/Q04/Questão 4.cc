#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;
void misterio(int *p, int *q);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i = 6;
    int j = 10;
    misterio(&i, &j);
    cout << " Apos a troca o primeiro valor sera " << i;
    cout << " e o segundo valor " << j << endl;
    cout << "Fim do programa .\n";
    getch();
}
void misterio(int *p, int *q) // o inteiro temp para poder efetuar a troca precisa ser allocado
{
    int *temp = new int ();
    *temp = *p;
    *p = *q;
    *q = *temp;
    //printf("%i", *p);
}