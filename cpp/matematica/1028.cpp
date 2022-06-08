#include <iostream>

using namespace std;
int maiorDivisorComum(int maior, int menor);
int main()
{
    int cont, p[2], aux;

    cin >> cont;

    for (int i = 0; i < cont; i++){

    cin >> p[0] >> p[1];

    if(p[0] != max(p[0], p[1])){
        aux = p[1];
        p[1] = p[0];
        p[0] = aux;
    }

    cout << maiorDivisorComum(p[0], p[1]) << endl;}
    return 0;
}

int maiorDivisorComum(int maior, int menor)
{
    int resto;

    do{
        resto = maior % menor;

        maior = menor;
        menor = resto;
    }while(resto != 0);

    return maior;
}