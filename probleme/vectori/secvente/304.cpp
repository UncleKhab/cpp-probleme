#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("secvente.in");
ofstream cout("secvente.out");
int main()
{
    int n, cnt = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cnt++;

        if (v[i] <= v[i + 1])
        {
            while (v[i] <= v[i + 1] && i + 1 < n)
            {
                i++;
            }
        }
    }
    cout << cnt << endl;
}
