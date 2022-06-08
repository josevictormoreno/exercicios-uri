#include <iostream>

using namespace std;

int main()
{
    int n, dias;
    float c;
    cin >> n;
    for(int i = 0; i < n; i++){
        dias = 0;

        cin>> c;

        do{
            c = int(c -  (c*0.5));
            cout << c << endl;
            dias++;
        }while(c>0);

        cout << dias << " dias" << endl;
    }
    return 0;
}
