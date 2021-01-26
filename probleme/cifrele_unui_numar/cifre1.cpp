#include <iostream>

using namespace std;

int main()
{
    int n, max_number = 0, max_digit = 0, aux;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        aux = m;
        while (aux > 9)
        {
            aux /= 10;
        }
        if (aux > max_digit)
        {
            max_digit = aux;
            max_number = m;
        }
        if (aux == max_digit && m > max_number)
        {
            max_number = m;
        }
    }
    cout << max_number << endl;
}