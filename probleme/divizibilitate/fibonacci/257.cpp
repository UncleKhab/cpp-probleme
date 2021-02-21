#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int z[50];
    z[0] = 1;
    z[1] = 1;
    for (int i = 2; i <= 44; i++)
    {
        z[i] = z[i - 1] + z[i - 2];
    }
    for (int i = 44; i >= 0; i--)
    {
        if (n == 0)
        {
            break;
        }
        if (n - z[i] >= 0)
        {
            cout << z[i] << " ";
            n -= z[i];
        }
    }
}