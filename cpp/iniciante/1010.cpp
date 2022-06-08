#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int product[2], quantity[2];
    double price[2];

    cin >> product[0] >> quantity[0] >> price[0];
    cin >> product[1] >> quantity[1] >> price[1]; 

    cout << "VALOR A PAGAR: R$ "
            << fixed << setprecision(2)
            << (quantity[0] * price[0])
            + (quantity[1] * price[1])
            << endl;

    return 0;
}