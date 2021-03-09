#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n + 1], pare = 0, pozitii_pare = 0, div10 = 0, div3 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            pare += v[i];
        }
        if (i % 2 == 0)
        {
            pozitii_pare += v[i];
        }
        else
        {
            if (v[i] % 3 == 0)
            {
                div3 += v[i];
            }
        }

        if (v[i] % 10 == 0)
        {
            div10++;
        }
    }
    for (int i = n; i > 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << pare << "\n"
         << pozitii_pare << "\n"
         << div10 << "\n"
         << div3 << "\n";
}