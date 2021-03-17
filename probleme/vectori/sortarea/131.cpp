#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sortcif2.in");
ofstream cout("sortcif2.out");

int prima_cifra(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
int main()
{
    int n;
    cin >> n;
    int v[n], u[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        u[i] = prima_cifra(v[i]);
    }

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (u[i] > u[j])
            {
                swap(u[i], u[j]);
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}