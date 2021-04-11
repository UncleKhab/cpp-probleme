#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("cifreord1.in");
ofstream cout("cifreord1.out");

long long int x[10];
void cifre(long int n)
{
    int cif;
    while (n > 0)
    {
        cif = n % 10;
        x[cif]++;
        n /= 10;
    }
}
int main()
{
    long long int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            x[n]++;
        }
        else
            cifre(n);
    }
    long long int nr = 0;
    for (int i = 9; i >= 0; i--)
    {

        if (x[i] > 0)
        {
            while (x[i] > 0)
            {
                cout << i << " ";
                nr++;
                if (nr % 20 == 0)
                    cout << "\n";
                x[i]--;
            }
        }
    }
}