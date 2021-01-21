#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    long long int s, n, m, aux, d, s2;
    ifstream fin("sumagauss2.in");
    ofstream fout("sumagauss2.out");

    fin >> s;
    s2 = 2 * s;
    for (d = 1; d * d < s2; d++)
    {
        if (s2 % d == 0)
        {
            aux = d + s2 / d - 1;
            if (aux % 2 == 0)
            {
                n = aux / 2;
                m = n - d;
                fout << n << ' ' << m << '\n';
            }
        }
    }
}