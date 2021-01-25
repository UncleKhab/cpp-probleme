#include <iostream>

using namespace std;

int main()
{
    int n, m, aux, m_cp, c = 9;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        m_cp = m;
        while (m_cp > 9)
        {
            m_cp = m_cp / 10;
        }
        if (m_cp < c)
        {
            c = m_cp;
            aux = m;
        }
        if (m_cp == c && m > aux)
        {
            aux = m;
        }
    }
    cout << aux << endl;
}