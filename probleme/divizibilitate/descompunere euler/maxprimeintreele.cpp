#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("maxprimeintreele.in");
ofstream fout("maxprimeintreele.out");
int phi(int n)
{
    // n * (1 - 1/p1) * (1 - 1/p2) * ... * (1 - 1/pk)
    float cati_factori = n;
    int p = 2;
    while (n > 1)
    {
        if (n % p == 0)
        {
            cati_factori *= (1 - (1.0 / p));
            while (n % p == 0)
            {
                n /= p;
            }
        }
        p++;
        if (p * p > n)
        {
            p = n;
        }
    }
    return (int)cati_factori;
}
int main()
{
    int n;
    float max_phi = 0;
    int max_n;
    while (fin >> n)
    {

        if (n / (phi(n) * 1.0) > max_phi)
        {
            max_phi = n / (phi(n) * 1.0);
            max_n = n;
        }
    }
    fout << max_n << endl;
}