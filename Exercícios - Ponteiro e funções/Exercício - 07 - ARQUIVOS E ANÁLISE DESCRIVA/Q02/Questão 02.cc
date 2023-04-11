#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string.h>

using namespace std;

int main()
{
    ifstream arqE;
    ofstream arqS;
    arqE.open("E02.txt");
    arqS.open("S02.txt");


    char c;
    arqE.get(c);
    while (!arqE.eof())
    {
        arqS << toupper(c); //acho que está indo em binário :/
        arqE.get(c);
    }
    string s;

    return 0;
}