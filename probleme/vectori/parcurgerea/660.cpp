#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;

    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        int a = v[i];
        for (int j = i + 1; j < n - 1; j++)
        {
            int b = v[j];
            for (int k = j + 1; k < n; k++)
            {
                int c = v[k];
                if (a + b > c && a + c > b && b + c > a)
                    counter++;
            }
        }
    }
    cout << counter << endl;
}