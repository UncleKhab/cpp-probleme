#include <iostream>

using namespace std;

int main()
{
    int c1, c2;
    cin >> c1 >> c2;
    for (int i = c1; i < 10; i++)
    {
        for (int k = 0; k < 10; k += 2)
        {
            for (int j = 0; j <= c2; j++)
            {
                cout << 1000 * i + 101 * k + 10 * j << "\n";
            }
        }
    }
}