#include <iostream>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

using namespace std;
int Calcula_Segundos(int hora, int min, int seg);

int main()
{
    int a = 0, horas[a], min[a], seg[a];
    int total[2];

    while (a < 2)
    {
        if (a == 1)
            cout << endl;
        cout << "Digite respectivamente as horas, minutos e segundos\n";
        cin >> horas[a] >> min[a] >> seg[a];
        total[a] = Calcula_Segundos(horas[a], min[a], seg[a]);
        a++;
    }

    int intervalo;
    if (total[0] > total[1])
    {
        cout << "Intervalo de: " << total[0] - total[1] << " segundos" << endl;
        cout << "Intervalo de: " << total[0] / 3600 - total[1] / 3600 << " horas" << endl;
    }
    else if (total[0] < total[1])
    {
        cout << "Intervalo de: " << total[1] - total[0] << " segundos" << endl;
        cout << "Intervalo de aproximadamente: " << total[1] / 3600 - total[0] / 3600 << " horas" << endl;
    }

    return 0;
}
int Calcula_Segundos(int hora, int min, int seg)
{
    int total_seg;

    return seg + (min * 60) + (hora * 3600);

    return 0;
}