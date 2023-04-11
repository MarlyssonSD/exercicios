#include <iostream>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

using namespace std;
float Calcula_Taxas(float tempo);

int main()
{
    char continuar;
    float Tempo_clientes[3];
    do
    {
        for (int a = 0; a < 3; a++)
        {
            switch (a)
            {
            case 0:
                cout << "Forneca tempo de permanencia do primeiro cliente: ";
                cin >> Tempo_clientes[a];
                break;
            case 1:
                cout << "Forneca tempo de permanencia do segundo cliente: ";
                cin >> Tempo_clientes[a];
                break;
            case 2:
                cout << "Forneca tempo de permanencia do terceiro cliente: ";
                cin >> Tempo_clientes[a];
                break;
            default:
                break;
            }
        }

        for (int a = 0; a < 3; a++)
        {
            cout << "Carro " << a + 1 << ": " << Tempo_clientes[a] << "horas de permanencia, Taxa de R$" << Calcula_Taxas(Tempo_clientes[a]) << endl;
        }

        int total_tempo = 0;
        for (int a = 0; a < 3; a++)
        {
            total_tempo += Tempo_clientes[a];
        }

        float total_taxa = 0;
        for (int a = 0; a < 3; a++)
        {
            total_taxa += Calcula_Taxas(Tempo_clientes[a]);
        }

        cout << "TOTAL de horas: " << total_tempo << "/ TAXA total: R$" << total_taxa;
        cout << "\nDeseja continuar? S / N ?" << endl;
        getchar();

        continuar = tolower(getchar());
    } while (tolower(continuar) != 'n');
    return 0;
}
float Calcula_Taxas(float tempo)
{
    if (tempo <= 3)
    {
        return 2;
    }
    else if (tempo > 3 && tempo < 24)
    {
        return (tempo - 3) * 0.5 + 2;
    }
    else
    {
        return 10;
    }
}
