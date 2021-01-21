#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cin >> n;
    s = n * 3;

    for (int i = 1; i <= n; i++)
    {
        int x = s - (i * 2);
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < x; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n; i > 0; i--)
    {
        int x = s - (i * 2);
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        for (int k = 0; k < x; k++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}