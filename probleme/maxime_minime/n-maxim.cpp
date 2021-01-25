#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int m, max = -1000000000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > max)
        {
            max = m;
        }
    }
    cout << max << "\n";
}