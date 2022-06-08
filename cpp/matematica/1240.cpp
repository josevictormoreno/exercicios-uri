#include <iostream>

using namespace std;

int main()
{
    string numero1, numero2;
    bool encaixa;
    int cont, i, entrada[2];

    cin >> cont;

    for (int casos = 0; casos < cont; casos++)
    {
        encaixa = true;
        i = 1;
        cin >> entrada[0] >> entrada[1];

        numero1 = to_string(entrada[0]);
        numero2 = to_string(entrada[1]);

        if (numero2.length() > numero1.length())
        {
            cout << "nao encaixa" << endl;
        }
        else
        {
            do
            {
                if (numero2[numero2.length() - i] != numero1[numero1.length() - i])
                {
                    encaixa = false;
                }
                i++;
            } while (i <= numero2.length());
            if (encaixa)
                cout << "encaixa" << endl;
            else
            {
                cout << "nao encaixa" << endl;
            }
        }
    }

    return 0;
}