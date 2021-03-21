#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");

int main()
{
    int n, m, i = 0, j = 0, k = 1;
    cin >> n;
    int a[n];
    while (i < n)
    {
        cin >> a[i++];
    }

    cin >> m;
    int b[m];
    for (i = 1; i <= m; i++)
    {
        int tmp;
        bool gasit = false;
        cin >> tmp;

        while (tmp >= a[j] && j < n)
        {
            if (tmp == a[j])
            {
                gasit = true;
            }
            j++;
        }
        if (gasit)
        {
            b[k++] = tmp;
        }
    }
    for (i = 1; i < k; i++)
    {
        cout << b[i] << " ";
        if (i % 10 == 0)
        {
            cout << '\n';
        }
    }
}