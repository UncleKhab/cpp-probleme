#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sortcif.in");
ofstream cout("sortcif.out");

int sum_cif(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int v[n];
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum[i] = sum_cif(v[i]);
    }

    // bubble sort
    bool sortat = false;
    int m = n - 1;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p; i++)
        {
            if (sum[i] > sum[i + 1])
            {
                swap(sum[i], sum[i + 1]);
                swap(v[i], v[i + 1]);
                m = i;
                sortat = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}