#include <iostream>

using namespace std;

int main()
{
    int n, m, num_counter = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    int w[m];
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        for (int j = 0; j < m; j++)
        {
            if (v[i] > w[j])
            {
                counter++;
            }
        }
        if (counter == m)
        {
            num_counter++;
        }
    }
    cout << num_counter << endl;
}