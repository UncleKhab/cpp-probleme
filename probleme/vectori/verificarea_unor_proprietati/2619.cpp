#include <iostream>

using namespace std;

int main()
{
    int n, w, x, y, z;
    cin >> n >> w >> x >> y >> z;
    int v[n];
    v[0] = w % 5;
    x = x % 5;
    y = y % z;
    int counter = 0;
    for (int i = 1; i < n; i++)
    {
        v[i] = (x * v[i - 1] + y) % z;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((v[i] + v[j] + v[k]) % 5 == 0)
                    counter++;
            }
        }
    }
    cout << counter << endl;
}