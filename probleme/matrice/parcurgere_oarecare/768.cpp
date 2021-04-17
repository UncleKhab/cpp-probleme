#include <bits/stdc++.h>

using namespace std;

int a[10001];
int main()
{
    int n, m;
    cin >> n >> m;
    int indx = n * m;
    int tmp, sum = 0;

    for (int i = 0; i < indx; i++)
    {
        cin >> tmp;
        if (tmp % 2 == 0 && a[tmp] == 0)
        {
            sum += tmp;
        }
        a[tmp]++;
    }
    cout << sum << endl;
}