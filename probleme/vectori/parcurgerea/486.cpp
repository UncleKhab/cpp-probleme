#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, min = 1000001;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }
    cout << min << " " << max << endl;
}