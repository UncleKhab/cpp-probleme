#include <iostream>

using namespace std;

int main()
{
    long long int n, prod = 1, counter = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            prod *= n % 10;
            counter++;
        }
        n /= 10;
    }
    if (counter > 0)
    {
        cout << prod << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}