#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sumesecv.in");
ofstream cout("sumesecv.out");

int main()
{
    int n, m;
    cin >> n;
    int v[n], sums[n];
    sums[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sums[i] = sums[i - 1] + v[i];
    }
    cin >> m;
    int j, k;
    for (int i = 0; i < m; i++)
    {
        cin >> j >> k;
        cout << sums[k] - sums[j - 1] << " ";
    }
}
