#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int distancia, horas, velocidade;

    //entrada
    cin >> horas >> velocidade;
    distancia = horas * velocidade;
    cout << fixed << setprecision(3)
         << distancia/12.0 << endl; 
    return 0;
}