#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
using std ::cin;
using std ::cout;
using std ::endl;
using std ::string;

typedef int** IntPtr;

IntPtr *criaMatrizDinamica(int ano, int meses, int dias);
void regPrecipitacao(IntPtr *mat, char ans);
void consPrecipitacao(IntPtr *mat, char ans);
string strTipoChuva(int mm);
void selecionaOpcao(char &op);

main()
{
    setlocale(LC_ALL, " portuguese ");
    // Criar Matriz Din^amica
    IntPtr *chuva = criaMatrizDinamica(10, 12, 30);
    
    char opcao;
    selecionaOpcao(opcao);
    while ((opcao == '1') || (opcao == '2'))
    {
        switch (opcao)
        {
        case '1':
            // Registro de Precipita¸c~oes desejadas
            regPrecipitacao(chuva, 'S');
            break;
        case '2':
            // Consulta de Precipita¸c~oes desejadas
            consPrecipitacao(chuva, 'S');
            break;
        }
        cout << " Pressione qualquer tecla para retornar ao [MENU ].\n";
        getch();
        selecionaOpcao(opcao);
    }
    cout << " Fim do programa .\n";
    return 0;
}

IntPtr *criaMatrizDinamica(int ano, int meses, int dias) //10 , 12, 30
{
    int i, j, k;
    IntPtr *mat = new IntPtr[ano - 1];

    for (i = 0; i < ano; i++)
    {
        mat[i] = new int *[meses - 1];
        for (j = 0; j < meses; j++)
        {
            mat[i][j] = new int[dias - 1];
        }
    }
    return mat;
}
void regPrecipitacao(IntPtr *mat, char ans)
{
    if ((ans == 's' || ans == 'S'))
    {
        system("cls ");
        int d, m, a, p;
        cout << " ------------ REGISTRO DE PRECIPITAÇÕES-- -- -- -- -- --\n ";
        cout
            << " Para o registro de uma PRECIPITAÇÃO informe ,por favor :\n ";
        cout << "Dia : ";
        cin >> d;
        cout << "M^es : ";
        cin >> m;
        cout << "Ano : ";
        cin >> a;
        cout << " Quantidade de Chuva : ";
        cin >> p;
        mat[a % 10][m][d] = p;
        cout << mat[a % 10][m][d] << endl;
        cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -\n >";
        cout << " Realizar novo registro ? (s/n): ";
        cin >> ans;
        regPrecipitacao(mat, ans);
    }
}
void consPrecipitacao(IntPtr *mat, char ans)
{
    if ((ans == 's' || ans == 'S'))
    {
        system("cls ");
        int d, m, a;
        cout << " ------------ CONSULTA DE PRECIPITAÇÕES-- -- -- -- -- --\n ";
        cout << " Para a consulta de uma precipitação informe ,por favor :\n ";
        cout << "Dia : ";
        cin >> d;
        cout << "M^es : ";
        cin >> m;
        cout << "Ano : ";
        cin >> a;
        cout << " Quantidade de Chuva neste dia foi de: " << mat[a % 10][m][d] << " milímetros ." << endl;
        cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -\n > ";
        cout
            << " De acordo com o Inmet , chuva considerada "
            << strTipoChuva(mat[a % 10][m][d]) << " neste dia ."
            << endl;
        cout << " -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -\n >";
        cout << " Realizar nova consulta ? (s/n): ";
        cin >> ans;
        consPrecipitacao(mat, ans);
    }
}
string strTipoChuva(int mm)
{
    if (mm < 5)
    {
        return " FRACA ";
    }
    else if ((mm >= 5) && (mm <= 60))
    {
        return " MODERADA ";
    }
    else
    {
        return " FORTE ";
    }
}
void selecionaOpcao(char &op)
{
    system("cls ");
    cout << " ---------- Cadastro de Precipita¸c~oes ----------\n"
         << " [1] REGISTRO DE PRECIPITAÇÕES \n"
         << " [2] CONSULTA DE PRECIPITAÇÕES \n"
         << " -----------------------------------------------\n>"
         << " [x] Para sair pressiona qualquer outra tecla .\n"
         << " -----------------------------------------------\n>";
    op = getch();
    system("cls ");
}