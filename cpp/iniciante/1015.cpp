#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    float x[2], y[2], distancia;

    //ENTRADA
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];

    //OPERAÇÃO
    distancia = sqrt(((x[1]-x[0]) * (x[1]-x[0])) + ((y[1]-y[0]) * (y[1]-y[0])));

    //SAIDA
    cout << fixed
         << setprecision(4);
         cout << distancia << endl; 
    return 0;
}