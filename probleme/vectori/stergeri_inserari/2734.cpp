#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] == a)
            {
                for (int k = j; k < n; k++)
                {
                    v[k] = v[k + 1];
                }
                j--;
                n--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}