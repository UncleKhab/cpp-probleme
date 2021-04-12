#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("frecventa1.in");
ofstream cout("frecventa1.out");

int v[100];
int main()
{
    int n, tmp, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v[tmp]++;
        if (v[tmp] > max)
        {
            max = v[tmp];
        }
    }

    while (max > 0)
    {
        for (int i = 0; i < 100; i++)
        {
            if (v[i] == max)
            {
                cout << i << " ";
                v[i] = 0;
            }
        }
        max--;
    }
}