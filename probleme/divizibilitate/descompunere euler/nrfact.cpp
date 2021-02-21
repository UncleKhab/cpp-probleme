#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int m;
    long int nr = 0, max_div = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int cur_div = 0;
        int p = 2;
        long aux = m;
        while (aux > 1)
        {
            if (aux % p == 0)
            {
                cur_div++;
                while (aux % p == 0)
                {
                    aux /= p;
                }
            }
            p++;
            if (p * p > aux)
                p = aux;
        }

        if (cur_div > max_div)
        {
            max_div = cur_div;
            nr = m;
        }
        if (cur_div == max_div && m < nr)
            nr = m;
    }
    cout << nr << endl;
}