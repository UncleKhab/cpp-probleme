#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    double v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double min = v[0];
    double max = v[n - 1];
    if (min > max)
    {
        double aux = min;
        min = max;
        max = aux;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < min || v[i] > max)
            counter++;
    }
    cout << counter << endl;
}