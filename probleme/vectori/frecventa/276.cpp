#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("pareimpare.in");
ofstream cout("pareimpare.out");

int v[100];

int main()
{
    int tmp;
    while (cin >> tmp)
    {
        v[tmp]++;
    }
    for (int i = 1; i < 100; i += 2)
    {
        if (v[i] > 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 98; i >= 0; i -= 2)
    {
        if (v[i] > 0)
        {
            cout << i << " ";
        }
    }
}