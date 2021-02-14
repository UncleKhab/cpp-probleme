#include <iostream>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int min = n, max = m;
    long long int counter = 0;

    if (n > m)
    {
        min = m;
        max = n;
    }
    long long int max_l = min;
    while (min > 0)
    {
        if (min > max_l)
        {
            max_l = min;
        }
        long long int rest = max % min;
        counter += max / min;
        max = min;
        min = rest;
    }
    cout << max_l << " " << counter << endl;
}