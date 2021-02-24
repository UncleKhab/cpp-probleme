#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        while (m)
        {
            if (m % 10 > max)
                max = m % 10;
            m /= 10;
        }
    }
    cout << ++max << endl;
}