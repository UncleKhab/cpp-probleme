#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("halfsort2.in");
ofstream cout("halfsort2.out");
int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // Insertion Sort 2 steps desc
    for (int i = 3; i < n; i += 2)
    {
        int p = i - 2;
        int x = v[i];
        while (x > v[p] && p >= 1)
        {
            v[p + 2] = v[p];
            p -= 2;
        }
        v[p + 2] = x;
    }

    //Selection Sort 2 Steps
    for (int i = 2; i <= n - 2; i += 2)
    {
        for (int j = i + 2; j <= n; j += 2)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}