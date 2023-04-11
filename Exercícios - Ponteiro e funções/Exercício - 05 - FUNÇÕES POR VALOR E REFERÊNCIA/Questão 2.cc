#include <iostream>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

using namespace std;

float Celsius(float temp);
float Fahrenheit(float temp);
int main()
{
    cout << "=======================================================\n";

    cout << "    Celsius ---> Farenheit" << endl;
    for (int a = 0; a <= 100; a++)
    {
        cout << a << " ---> " << Fahrenheit(a) << endl;
    }
    cout << "=======================================================\n";
    cout << "\n   Farenheit ---> Celsius\n\n";
    for (int a = 0; a <= 100; a++)
    {
        cout << a << " ---> " << Celsius(a) << endl;
    }

    return 0;
}
float Celsius(float temp) // retorna em celsius
{
    return (temp - 32) / 1.8;
}
float Fahrenheit(float temp) // retorna em fahrenh
{
    return temp * 1.8 + 32;
}