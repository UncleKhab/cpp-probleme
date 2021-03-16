#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("puterik.in");
ofstream cout("puterik.out");

bool is_pow(int n, int k)
{
    while (n > 1)
    {
        if (n % k != 0)
        {
            return false;
        }
        n /= k;
    }
    return true;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int v[n], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (is_pow(tmp, k))
        {
            v[cnt] = tmp;
            cnt++;
        }
    }
    // Insertion Sort
    for (int i = 1; i < cnt; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (x < v[p] && p >= 0)
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << v[i] << " ";
    }
}