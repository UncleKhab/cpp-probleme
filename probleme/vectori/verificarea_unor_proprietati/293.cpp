#include <iostream>
using namespace std;
bool cif_dif(int n)
{
    int v[9];
    int counter = 0;
    while (n)
    {
        v[counter] = n % 10;
        n /= 10;
        counter++;
    }
    for (int i = 0; i < counter; i++)
    {
        for (int j = i + 1; j < counter; j++)
        {
            if (v[i] == v[j])
                return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n;
    bool are_cif_dif = true;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (!cif_dif(m))
            are_cif_dif = false;
    }
    if (are_cif_dif)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}