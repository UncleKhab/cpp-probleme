#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 1, counter = 0;
    while (m * m < n)
    {
        if (n % m == 0)
        {
            int p = n / m;
            if (m % 2 == 0)
            {
                counter++;
            }
            if (p % 2 == 0)
            {
                counter++;
            }
        }
        m++;
    }
    if (m * m == n && m % 2 == 0)
    {
        counter++;
    }
    cout << counter << endl;
}