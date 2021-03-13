#include <iostream>

using namespace std;

int main()
{
    int n, e;
    int m, max = 0, index = -1, counter = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> e;
            if (e > max)
            {
                max = e;
                index = i;
                counter = 1;
            }
            if (e == max && i != index)
            {
                index = i;
                counter++;
            }
        }
    }
    cout << max << " " << counter << endl;
}