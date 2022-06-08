#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    float Y;
    cin >> X;
    cout << fixed << setprecision(1);
    cin >> Y;
    cout << fixed << setprecision(3) << X/Y << " km/l" << endl;

    return 0;
}