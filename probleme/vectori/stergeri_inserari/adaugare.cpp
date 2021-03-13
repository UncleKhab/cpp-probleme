#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n * 2];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Vrei sa adaugi un vector? y/n" << endl;
    char x;
    cin >> x;
    if (x == 'y')
    {
        int m;
        cout << "Ce element?" << endl;
        cin >> m;
        v[n] = m;
        n++;
        cout << "Mai vrei unu? y/n" << endl;
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}