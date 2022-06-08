#include <iostream>

using namespace std;

int main(){
    int a, b, c, maior;

    cin >> a >> b >> c;

    maior = (a+b+abs(a-b))/2;

    if(maior < c){
        cout << c << " eh o maior" << endl;
    } else{
           cout << maior << " eh o maior" << endl;
    }

    return 0;
}