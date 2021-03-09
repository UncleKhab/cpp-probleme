#include <iostream>

using namespace std;
bool is_prime(int x)
{
    int div = 0;
    int d = 2;
    while (d * d <= x)
    {
        if (x % d == 0)
        {
            div += 1;
        }
        d++;
    }
    if (div != 0)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (is_prime(a[i]))
        {
            b[counter] = a[i];
            counter++;
        }
    }
    counter--;
    for (int i = counter; i >= 0; i--)
        cout << b[i] << " ";
    cout << endl;
}