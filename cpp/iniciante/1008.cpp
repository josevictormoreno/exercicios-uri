#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hours, number;
    double salary;

    cin >> number >> hours >> salary;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2)
            << hours * salary << endl; 

   return 0; 
}