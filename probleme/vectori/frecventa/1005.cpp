#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("numere8.in");
ofstream cout("numere8.out");

int u[10000];
int main()
{
    int n;
    for (int i = 1; i < 10000; i++)
    {
        u[i] = 0;
    }
    while (cin >> n)
        if (n < 10000)
            u[n] = 1;

    for (int i = 9999; i > 0; i--)
    {
        if (u[i] == 0)
        {
            cout << i << " ";
        }
    }
}
