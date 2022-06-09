#include <iostream>

using namespace std;

int main()
{
    int n, num;
    bool prime;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        prime = true;

        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
                prime = false;
        }
        if(prime)
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
    return 0;
}
