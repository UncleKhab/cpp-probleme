#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("secvk.in");
ofstream cout("secvk.out");
int main()
{
    int n, k, st, dr;
    cin >> n >> k;
    int v[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int tmp_sum = 0;
    for (int i = 0; i < k; i++)
    {
        tmp_sum += v[i];
    }
    st = 0;
    dr = k - 1;
    sum = tmp_sum;
    for (int i = k; i < n; i++)
    {
        tmp_sum = tmp_sum - v[i - k] + v[i];
        if (tmp_sum > sum)
        {
            sum = tmp_sum;
            st = i - k + 1;
            dr = i;
        }
    }
    for (int i = st; i <= dr; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
