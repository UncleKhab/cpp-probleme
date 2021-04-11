#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("intervale5.in");
ofstream cout("intervale5.out");
int v[101];
int main()
{
    int tmp;
    while (cin >> tmp)
    {
        v[tmp]++;
    }
    int nr = 0;
    for (int i = 0; i < 99; i++)
    {
        if (v[i] > 0)
        {
            int j = i + 1;
            while (v[j] == 0 && j < 100)
            {
                j++;
            }
            if (v[j] > 0 && j - i >= 2)
            {
                cout << i << " " << j << endl;
                i = j - 1;
                nr++;
            }
        }
    }
    if (nr == 0)
    {
        cout << "nu exista" << endl;
    }
}