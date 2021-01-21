#include <iostream>

using namespace std;

int main()
{
    int n;
    char c, d;
    cin >> n >> c >> d;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == (n - 1))
        {
            for (int j = 0; j < n; j++)
            {
                cout << c;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == (n - 1))
                {
                    cout << c;
                }
                else
                {
                    cout << d;
                }
            }
        }

        cout << "\n";
    }
}