#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    n = abs(n);
    long long int sum = n;
    long long int aux = n / 10;
    long long int ordin = 1;
    long int counter = 0;
    while (aux)
    {
        ordin *= 10;
        counter++;
        aux /= 10;
    }
    aux = n;
    for (int i = 0; i < counter; i++)
    {

        aux = ((aux % 10) * ordin) + aux / 10;
        sum += aux;
    }
    cout << sum << endl;
}