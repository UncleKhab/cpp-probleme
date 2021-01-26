#include <iostream>

using namespace std;

int main()
{
    int m = 1, max_num = -1, counter = 0;
    bool exista = false;
    cin >> m;
    while (m != 0)
    {
        m = abs(m);
        if (m == max_num)
        {
            counter++;
        }
        else
        {
            int d = 0;
            int aux = m;
            while (aux > 0)
            {
                d = d * 10 + aux % 10;
                aux /= 10;
            }
            if (m == d && m > max_num)
            {
                max_num = m;
                counter = 1;
                exista = true;
            }
        }
        cin >> m;
    }
    if (exista)
    {
        cout << max_num << " " << counter << endl;
    }
    else
    {
        cout << "NU EXISTA" << endl;
    }
}
