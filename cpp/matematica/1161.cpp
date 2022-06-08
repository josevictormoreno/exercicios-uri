#include <iostream>
#include <cstdio>

using namespace std;

int fatorial(int num);
int main()
{
    int m, n;

    while(cin >> m >> n)
    {
        cout << fatorial(m) + fatorial(n) << endl;
    }
    return 0;
}

int fatorial(int num)
{
    // Função que calcula, recursivamente, o fatorial de n.
    if ((num == 1) || (num == 0))
        return 1;
    else
    {
        return fatorial(num - 1) * num;
    }
}