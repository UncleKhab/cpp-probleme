#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    long int m, max = -2147483648;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m == max)
        {
            count++;
        }
        if (m > max)
        {
            max = m;
            count = 1;
        }
    }
    cout << max << " " << count << endl;
}