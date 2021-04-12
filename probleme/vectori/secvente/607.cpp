#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("asfalt.in");
ofstream cout("asfalt.out");

int a[10000];
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        for (int j = x; j < y; j++)
        {
            a[j]++;
        }
    }
    int mai_multe = 0, neasfaltati = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            neasfaltati++;
        }
        else if (a[i] > 1)
        {
            mai_multe++;
        }
    }
    cout << neasfaltati << " " << mai_multe << endl;
}