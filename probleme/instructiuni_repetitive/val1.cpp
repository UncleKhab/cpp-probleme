#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // __0_0___
    // _0___0__
    // 0______0
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "__" << 0 << "_" << 0 << "___";
            }
            cout << "\n";
        }
        else if (i == n)
        {
            for (int j = 0; j < m; j++)
            {
                cout << 0 << "_____" << 0 << "_";
            }
            cout << "\n";
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << "_" << 0 << "___" << 0 << "__";
            }
            cout << "\n";
        }
    }
}