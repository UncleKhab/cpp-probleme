#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int m1 = 10000, m2 = m1, m3 = m1, aux;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m < m1)
        {
            m1 = m;
        }
        if (m1 < m2)
        {
            aux = m2;
            m2 = m1;
            m1 = aux;
        }
        if (m2 < m3)
        {
            aux = m3;
            m3 = m2;
            m2 = aux;
        }
    }

    cout << m1 << " " << m2 << " " << m3 << endl;
}