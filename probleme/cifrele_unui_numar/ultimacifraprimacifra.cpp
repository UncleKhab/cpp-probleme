#include <iostream>

using namespace std;

int main()
{
    int n, m, prev_last_digit = 10, current_last_digit, prev_number = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        m = abs(m);
        int aux = m;
        current_last_digit = m % 10;
        while (aux > 10)
        {
            aux /= 10;
        }
        if (aux == prev_last_digit)
        {
            cout << prev_number << " " << m << endl;
        }
        prev_number = m;
        prev_last_digit = current_last_digit;
    }
}