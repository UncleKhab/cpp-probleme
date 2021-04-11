#include <fstream>
#include <algorithm>
#include <math.h>

using namespace std;

ifstream cin("puteri6.in");
ofstream cout("puteri6.out");
int v[10];
int putere_10(long long n)
{
    int nr = 0;
    if (n == 1)
    {
        v[0]++;
    }
    else
    {
        while (n > 1)
        {
            nr++;
            n /= 10;
        }
        v[nr]++;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    long long int tmp;
    while (cin >> tmp)
    {
        putere_10(tmp);
    }
    for (int i = 0; i < 10 && n > 0; i++)
    {
        n -= v[i];
        if (n <= 0)
        {
            cout << std::pow(10, i) << endl;
        }
    }
    if (n > 0)
    {
        cout << "Nu exista" << endl;
    }
}