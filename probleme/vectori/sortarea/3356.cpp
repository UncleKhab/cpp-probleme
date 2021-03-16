#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("alfa.in");
ofstream cout("alfa.out");

int main()
{
    int n, x;
    cin >> n >> x;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int prev_x = 1;
    int this_x = -1;
    for (int i = 0; i < n; i++)
    {
        bool gasite = false;
        if (v[i] == x && this_x != -1)
        {
            prev_x = this_x + 1;
            this_x = i;
            gasite = true;
        }
        else if (v[i] == x)
        {
            this_x = i;
            gasite = true;
        }

        if (gasite)
        {
            bool sortate = false;
            while (!sortate)
            {
                sortate = true;
                for (int j = prev_x; j < this_x - 1; j++)
                {
                    if (v[j] > v[j + 1])
                    {
                        swap(v[j], v[j + 1]);
                        sortate = false;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}