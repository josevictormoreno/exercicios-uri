#include <iostream>

using namespace std;

int main()
{
    int valor, horas = 0, minutos = 0;

    cin >> valor;

    if (valor > 3600)
    {
        horas = valor / 3600;
        valor = valor - (horas * 3600);
    }
    if (valor > 60)
    {
        minutos = valor / 60;
        valor = valor - (minutos * 60);
    } 
    cout << horas << ":" << minutos << ":" << valor << endl;

    return 0;
}