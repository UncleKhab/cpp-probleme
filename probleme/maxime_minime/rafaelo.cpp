#include <iostream>
using namespace std;

int main()
{
    int s, n, m, max_cutii = 0, store_index = 0;
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (s / m > max_cutii)
        {
            max_cutii = s / m;
            store_index = i;
        }
    }
    cout << max_cutii << " " << store_index << "\n";
}