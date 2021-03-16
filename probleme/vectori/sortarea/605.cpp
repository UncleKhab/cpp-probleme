#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("crb.in");
ofstream cout("crb.out");
int main()
{
    int n;
    cin >> n;
    int v[n], u[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        u[i] = v[i];
    }
    //bubble sort
    bool sortat = false;
    int m = n - 1;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p; i++)
        {
            if (v[i] < v[i + 1])
            {
                sortat = false;
                swap(v[i], v[i + 1]);
                m = i;
            }
        }
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (u[i] == v[i])
        {
            counter++;
        }
    }

    cout << counter << endl;
}