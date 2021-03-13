#include <iostream>
#include <cmath>
using namespace std;

bool isSquare(int n)
{
    int rad = (int)sqrt(n);

    if (n == rad * rad)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int v[n * 2];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (isSquare(v[i]))
        {
            n++;
            for (int j = n; j > i; j--)
            {
                v[j] = v[j - 1];
            }
            v[i] = sqrt(v[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}