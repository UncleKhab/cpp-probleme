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
        for (int j = 0; j < n; j++)
        {
            cout << v[j] << " ";
        }
        cout << endl;
        int first = v[0];
        for (int j = 0; j < n - 1; j++)
        {
            v[j] = v[j + 1];
        }
        v[n - 1] = first;
    }
}