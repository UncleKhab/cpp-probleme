#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("maxcif.in");
ofstream cout("maxcif.out");

int main()
{
    int x[10];
    for (int i = 0; i < 10; i++)
    {
        x[i] = 0;
    }
    int n, max = 0;
    while (cin >> n)
    {
        x[n]++;
        if (x[n] > max)
        {
            max = x[n];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (x[i] == max)
            cout << i << " ";
    }
}