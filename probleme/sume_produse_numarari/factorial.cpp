#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int p;
    cin >> n;
    if (n == 0)
    {
        p = 1;
    }
    else
    {
        p = 1;
        for (long int i = 1; i <= n; i++)
        {
            p *= i;
        }
    }

    cout << p << "\n";
}