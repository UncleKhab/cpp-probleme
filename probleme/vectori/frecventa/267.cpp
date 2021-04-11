#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("unice.in");
ofstream cout("unice.out");
int x[101];
int main()
{
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;

        x[tmp]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (x[i] == 1)
        {
            cout << i << " ";
        }
    }
}
