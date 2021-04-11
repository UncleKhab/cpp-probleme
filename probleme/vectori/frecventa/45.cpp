#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("cifrazecmax.in");
ofstream cout("cifrazecmax.out");
int v[10], max_aparitii = 0, cif_salvata = 10, indx = 0, cif_salvata_indx;
int cif_zec(long long n)
{
    indx++;
    int cif_n = (n % 100) / 10;
    v[cif_n]++;
    if (v[cif_n] > max_aparitii)
    {
        max_aparitii = v[cif_n];
        cif_salvata_indx = indx;
        cif_salvata = cif_n;
    }
    return 0;
}
int main()
{
    long long aux;
    while (cin >> aux)
    {
        cif_zec(aux);
    }
    cout << cif_salvata_indx << endl;
}
