#include <fstream>
#include <algorithm>
#include <math.h>

using namespace std;

ifstream cin("nrlipsa2.in");
ofstream cout("nrlipsa2.out");
int v[201];
int main()
{
    int n;
    while (cin >> n)
    {
        if (n >= -100 && n < 0)
        {
            n = abs(n);
            n += 100;
            v[n]++;
        }
        if (n >= 0 && n <= 100)
        {
            v[n]++;
        }
    }
    int min = 101;
    bool gasit = false;
    for (int i = 200; i > 100 && !gasit; i--)
    {
        if (v[i] == 0)
        {
            int m = 0 - (i - 100);
            gasit = true;
            min = m;
        }
    }
    if (!gasit)
    {
        for (int i = 0; i <= 100 && !gasit; i++)
        {
            if (v[i] == 0)
            {
                min = i;
                gasit = true;
            }
        }
    }
    if (!gasit)
    {
        cout << "nu exista";
    }
    else
    {
        cout << min << endl;
    }
}