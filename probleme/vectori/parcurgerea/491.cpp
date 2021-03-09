#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    int primul = -1, ultimul = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            if (primul == -1)
                primul = i;
            ultimul = i;
        }
    }
    if (primul == -1)
    {
        cout << "NU EXISTA" << endl;
    }
    else
    {
        for (int i = primul; i <= ultimul; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
}