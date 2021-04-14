#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool egale = false;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        egale = true;
        int tmp, cmp;
        cin >> tmp;
        for (int j = 1; j < m; j++)
        {
            cin >> cmp;
            if (cmp != tmp)
                egale = false;
        }
        if (egale)
            counter++;
    }
    cout << counter << endl;
}
