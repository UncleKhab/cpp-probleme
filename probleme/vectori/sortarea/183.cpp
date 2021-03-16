#include <bits/stdc++.h>
using namespace std;

int patrat_perfect(int i)
{
    int rad = sqrt(i);
    if (i == rad * rad)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int v[n], k = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (patrat_perfect(v[i]) && k == -1)
        {
            k = i;
        }
    }
    // SELECTION SORT
    for (int i = k; i < n - 1; i++)
    {
        if (patrat_perfect(v[i]))
        {
            for (int j = i + 1; j < n; j++)
            {
                if (patrat_perfect(v[j]) && v[i] > v[j])
                {
                    swap(v[i], v[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}