#include <iostream>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int ordin = 1,
                  aux = n;
    while (aux > 0)
    {
        ordin *= 10;
        aux /= 10;
    }
    aux = n;
    for (int i = 1; i < k; i++)
    {
        aux += n * ordin;
        ordin *= ordin;
    }
    cout << aux % 72 << endl;
}