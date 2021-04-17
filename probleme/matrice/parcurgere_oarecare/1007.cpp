#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("matrice7.in");
ofstream cout("matrice7.out");
int main()
{
    int n, m, max = 0;
    cin >> n >> m;
    long int v[n][m], a[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] > max)
            {
                max = v[i][j];
            }
            if (i == 0)
            {
                a[j] = v[i][j];
            }
            else
            {
                if (v[i][j] < a[j])
                    a[j] = v[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == max)
            {
                v[i][j] = a[j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
