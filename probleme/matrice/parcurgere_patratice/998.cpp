#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("matrice6.in");
ofstream cout("matrice6.out");

int main()
{
    int n;
    cin >> n;
    long int v[n][n];
    long int max = 0, min = 1000000001;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            if (v[i][j] > max)
            {
                max = v[i][j];
            }
            if (v[i][j] < min)
            {
                min = v[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool contine = false;
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == max)
                contine = true;
        }
        if (contine)
        {
            for (int j = 0; j < n; j++)
            {
                v[i][j] += min;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}