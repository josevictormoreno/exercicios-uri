#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double R, volume;
    
    cin >> R;
    volume =  (4/3.0) * 3.14159 * R*R*R;
    cout << "VOLUME = " 
         << fixed << setprecision(3)
         << volume << endl;

    return 0;
}