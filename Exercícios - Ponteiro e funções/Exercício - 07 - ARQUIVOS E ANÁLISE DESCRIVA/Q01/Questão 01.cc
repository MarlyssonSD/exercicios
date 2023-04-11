#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char *arquivo = "Q01.txt";
    ofstream arq;
    arq.open(arquivo, ios::out | ios::in);

    string nome_arq;
    cout << "Digite o nome do arquivo" << endl;
    cin >> nome_arq;
    arq << "Nome do arquivo: " << nome_arq << endl;
    getchar();
    int numeros[5];
    cout << "Digite 5 numeros para armazenar" << endl;
    for (int x = 0; x < 5;)
    {
        cin >> numeros[x];
        arq << numeros[x] << endl;
        x++;
    }
    arq.close();

    ifstream ler(arquivo);
    string s;
    while (getline(ler, s))
    {
        cout << s << endl;
    }
    ler.close();
    
    return 0;
}