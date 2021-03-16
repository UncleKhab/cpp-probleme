#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("ordsume.in");
ofstream cout("ordsume.out");

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a[n * n];
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] != v[j])
            {
                int tmp = v[i] + v[j];
                bool gasit = false;
                for (int k = 0; k < counter; k++)
                {
                    if (a[k] == tmp)
                    {
                        gasit = true;
                    }
                }
                if (!gasit)
                {
                    a[counter] = tmp;
                    counter++;
                }
            }
        }
    }
    // Insertion Sort

    for (int i = 1; i < counter; i++)
    {
        int x = a[i];
        int p = i - 1;
        while (x < a[p] && p >= 0)
        {
            a[p + 1] = a[p];
            p--;
        }
        a[p + 1] = x;
    }

    for (int i = 0; i < counter; i++)
    {
        cout << a[i] << " ";
    }
}