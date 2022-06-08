#include <iostream>

using namespace std;

int main(){
    int dia, ano = 0, mes = 0;

    cin >> dia;

    if (dia >= 365){
        ano = dia / 365;
        dia = dia - (ano*365);
        cout << ano << " ano(s)" << endl;
    } else {
        cout << "0 ano(s)" << endl;
    }
    if( dia >= 30){
        mes = dia / 30;
        dia = dia - (mes*30);
        cout << mes << " mes(es)" << endl;
    }else {
        cout << "0 mes(es)" << endl;
    }
    if(dia < 30)
        cout << dia << " dia(s)" << endl;
    else{
        cout << "0 dia(s)" << endl;
    }
    return 0;
}