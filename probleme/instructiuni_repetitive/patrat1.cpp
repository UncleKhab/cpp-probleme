#include <iostream>

using namespace std;

int main()
{
    int n;
    char c, d;
    cin >> n >> c >> d;

    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2)
                {
                    cout << c;
                }
                else
                {
                    cout << d;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2)
                {
                    cout << d;
                }
                else
                {
                    cout << c;
                }
            }
        }

        cout << "\n";
    }
}