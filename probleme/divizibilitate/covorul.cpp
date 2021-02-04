#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int min = n, max = m;
    int m_max = 0;
    int counter = 0;
    int total = n * m;
    if (n > m)
    {
        min = m;
        max = n;
    }
    while (total > 0)
    {
        int aux = max;
        while (aux % min != 0)
        {
            aux--;
        }
        if (min > m_max)
        {
            m_max = min;
        }
        counter += aux / min;
        total -= aux * min;
        max -= aux;
        if (max < min)
        {
            int aux2 = max;
            max = min;
            min = aux2;
        }
    }
    cout << m_max << " " << counter << endl;
}