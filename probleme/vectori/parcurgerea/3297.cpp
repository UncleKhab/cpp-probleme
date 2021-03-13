#include <fstream>

using namespace std;

ifstream cin("fmi_orase1.in");
ofstream cout("fmi_orase1.out");

int main()
{
    int n;
    cin >> n;
    int v[n], c_max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int min = v[i], max = v[j];
            if (min > max)
            {
                int aux = min;
                min = max;
                max = aux;
            }
            int cap = min * (j - i);
            if (cap > c_max)
                c_max = cap;
        }
    }
    cout << c_max << endl;
}