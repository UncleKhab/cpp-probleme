#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], sum = 0, counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sum = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > sum)
            counter++;
    }
    cout << counter << endl;
}