#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("subnumar.in");
ofstream cout("subnumar.out");
int v[100], nr_max = 0;

void sub_nr(long long int n)
{
    while (n > 9)
    {
        int nr = n % 100;
        v[nr]++;
        if (v[nr] > nr_max)
            nr_max = v[nr];
        n /= 10;
    }
}
int main()
{
    long long int tmp;
    while (cin >> tmp)
    {
        sub_nr(tmp);
    }
    for (int i = 99; i > 9; i--)
    {
        if (v[i] == nr_max)
        {
            cout << i << " ";
        }
    }
}