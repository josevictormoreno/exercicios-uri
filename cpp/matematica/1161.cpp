#include <iostream>

using namespace std;

int fatorial(int num);
int main()
{
    int num;
    cin >> num;

    // cout << "Fatorial de " << num << " eh: " << fat(num)<< endl;

    return 0;
}

int fatorial(int num)
{
    // Função que calcula, recursivamente, o fatorial de n.
    if ((num == 1) || (num == 0))
        return 1;
    else{
        return fatorial(num - 1) * num;}
}