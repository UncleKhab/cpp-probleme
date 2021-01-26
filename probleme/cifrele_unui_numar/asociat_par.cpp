#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0, cifra;
    long long int m, aux, s, ordin;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        m = abs(m);
        aux = 0;
        ordin = 1;
        bool pare = false;
        if (m == 0)
        {
            counter++;
        }
        while (m > 0)
        {
            cifra = m % 10;
            if (cifra % 2 == 0)
            {
                pare = true;
                aux += cifra * ordin;
                ordin *= 10;
            }
            m /= 10;
        }

        if (pare)
        {
            s = aux;
            int d = 0;
            while (aux > 0)
            {
                d = d * 10 + aux % 10;
                aux /= 10;
            }
            if (s == d)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
}