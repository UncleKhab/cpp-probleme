#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, min = 1000001, v[n], dif = 0, counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
            max = v[i];
        if (v[i] < min)
            min = v[i];
    }
    dif = max - min;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == dif)
            counter++;
    }
    cout << counter << endl;
}